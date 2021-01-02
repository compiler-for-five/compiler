#include "InterMediate.h"
#include <typeinfo>
#include <cstdio>
InterMediate::InterMediate(RootASTNode *rootNode,  SymbolTable *symbolTable)
{
    tempVar.reserve(100);
    this->root = rootNode;
    this->rootTable = new SymbolTable(symbolTable, false);//获得根结点所在的符号表
}

void InterMediate::Generate(AST* node, SymbolTable *symbolTable)
{
    if (node == NULL)
    {
        std::cout << "NULL" << std::endl;
    }
    if (node == NULL)
        return;
    AST *p = node->child;
    switch (node->nodeType)
    {
    case ASTNodeType::literal:
    {
        if (node->parent->nodeType == ASTNodeType::op)
        {
            OperatorASTNode *par = (OperatorASTNode *)node->parent;
            if (par->type == opType::And || par->type == opType::Or || par->type == opType::Not)
            {
                Quad *trueQuad = new Quad(OpCode::JUMP_GREAT, std::stoi(node->value), 0, (int)NULL);
                Quad *falseQuad = new Quad(OpCode::JUMP, (int)NULL);
                std::list<int> trueL;
                trueL.push_back(quads.size());
                this->quads.push_back(*trueQuad);
                std::list<int> falseL;
                falseL.push_back(quads.size());
                this->quads.push_back(*falseQuad);
                trueList.push(trueL);
                falseList.push(falseL);
            }
        }
        break;
    }
    case ASTNodeType::op:
    {
        if (((OperatorASTNode *)node)->type == opType::And || ((OperatorASTNode *)node)->type == opType::Or)
        {
            Generate(p, symbolTable);
            signal.push(quads.size());//记录指向四元组下一位置
            Generate(p->peer, symbolTable);
        }
        else if (((OperatorASTNode *)node)->type == opType::Not ||((OperatorASTNode *)node)->type== opType::Relop)
        {
            while (p != NULL)
            {
                Generate(p, symbolTable);
                p = p->peer;
            }
        }
        this->GenerateOp((OperatorASTNode *)node, symbolTable);
        break;
    }
    case ASTNodeType::stmt:
    {
        StmtASTNode *ret = (StmtASTNode *)node;
        if (ret->type == StmtType::returnStmt)
        {
            GenerateReturn((StmtASTNode *)node, symbolTable);
        }
        else
        {
            while (p != NULL)
            {
                Generate(p, this->GenerateStmt((StmtASTNode *)node, symbolTable));
                p = p->peer;
            }
        }
        break;
    }
    case ASTNodeType::defVar:
    {
        DefVarASTNode *tempNode = (DefVarASTNode *)node;
        if (tempNode->type == symbolType::Array)
        {
            symbolTable->addArraySymbol(tempNode);
        }
        else
        {
            symbolTable->addSymbol(tempNode->value, tempNode->type);
        }
        symbol *varSymbol = symbolTable->findSymbol(node->value);
        if (p != NULL)
        {
            Quad *temp;
            if (p->nodeType == ASTNodeType::literal)
            {
                int arg1 = std::stoi(p->value);
                temp = new Quad(OpCode::ASSIGN, arg1, varSymbol);
            }
            else if (p->nodeType == ASTNodeType::assignVar)
            {
                symbol *arg1 = symbolTable->findSymbol(p->value);
                temp = new Quad(OpCode::ASSIGN, arg1, varSymbol);
            }
            else if (p->nodeType == ASTNodeType::op)
            {
                symbol *arg1 = this->GenerateOp((OperatorASTNode *)p, symbolTable);
                temp = new Quad(OpCode::ASSIGN, arg1, varSymbol);
            }
            else
            {
                std::cout << "\033[31mError: \033[0m"
                          << "Type error" << std::endl;
                exit(1);
            }
            this->quads.push_back(*temp);
        }
        break;
    }
    case ASTNodeType::assignVar:
    {
        if (node->parent->nodeType == ASTNodeType::op)
        {
            OperatorASTNode *par = (OperatorASTNode *)node->parent;
            if (par->type == opType::And || par->type == opType::Or || par->type == opType::Not)
            {
                symbol *arg1 = symbolTable->findSymbol(node->value);
                Quad *trueQuad = new Quad(OpCode::JUMP_GREAT, arg1, 0, (int)NULL);
                Quad *falseQuad = new Quad(OpCode::JUMP, (int)NULL);
                std::list<int> trueL;
                trueL.push_back(quads.size());
                this->quads.push_back(*trueQuad);
                std::list<int> falseL;
                falseL.push_back(quads.size());
                this->quads.push_back(*falseQuad);
                trueList.push(trueL);
                falseList.push(falseL);
            }
        }
        break;
    }
    case ASTNodeType::loop: // for(1.DefASTNODE, 2.OperatorASTNODE, 3.OperatorASTNODE, 4.StmtASTNODE)
    {
        LoopASTNode *loop = (LoopASTNode *)node;
        if (loop->loopType == LoopType::_for)
        {
            SymbolTable *childTable = symbolTable->createChildTable();
            Generate(((LoopASTNode *)node)->declare, childTable);
            int start = quads.size();
            Generate(((LoopASTNode *)node)->condition, childTable);
            std::list<int> JudgeTrue = trueList.top();
            std::list<int> JudgeFalse = falseList.top();
            trueList.pop();
            falseList.pop();
            backpatch(&JudgeTrue, JudgeTrue.back() + 2);
            while (p != NULL)
            {
                Generate(p, childTable);
                p = p->peer;
            }
            Generate(((LoopASTNode *)node)->action, childTable);
            Quad *temp = new Quad(OpCode::JUMP, start);
            this->quads.push_back(*temp);
            int end = quads.size();
            backpatch(&JudgeFalse, end);
        }
        else if (loop->loopType == LoopType::_while)
        {
            int start = quads.size();
            Generate(((LoopASTNode *)node)->condition, symbolTable);
            std::list<int> JudgeTrue = trueList.top();
            std::list<int> JudgeFalse = falseList.top();
            trueList.pop();
            falseList.pop();
            backpatch(&JudgeTrue, JudgeTrue.back() + 2);
            while (p != NULL)
            {
                Generate(p, symbolTable->createChildTable());
                p = p->peer;
            }

            Quad *temp = new Quad(OpCode::JUMP, start);
            this->quads.push_back(*temp);
            int end = quads.size();
            backpatch(&JudgeFalse, end);
        }
        break;
    }
    case ASTNodeType::select: // Just IF and ELSE.
    {
        SelectASTNode *select = (SelectASTNode *)node;
        Generate(select->condition, symbolTable);
        int start = quads.size();
        std::list<int> JudgeTrue = trueList.top();
        std::list<int> JudgeFalse = falseList.top();
        trueList.pop();
        falseList.pop();

        backpatch(&JudgeTrue, start);
        Generate(select->body, symbolTable);
        if (select->elseStmt != NULL)
        {
            Quad *temp = new Quad(OpCode::JUMP, (int)NULL);
            this->quads.push_back(*temp);
            temp = &quads.back();
            int elseStart = quads.size();
            Generate(select->elseStmt, symbolTable);
            backpatch(&JudgeFalse, elseStart);
            int end = quads.size();
            temp->backpatch(end);
        }
        else
        {
            int end = quads.size();
            backpatch(&JudgeFalse, end);
        }
        break;
    }
    case ASTNodeType::root:
    {
        while (p != NULL)
        {
            Generate(p, symbolTable);
            p = p->peer;
        }
        break;
    }
    case ASTNodeType::printInt:
    {
        while (p != NULL)
        {
            Generate(p, symbolTable);
            p = p->peer;
        }
        break;
    }
    default:
        std::cout << "Hello! Something Wrong happened!\n";
        break;
    }
}

SymbolTable *InterMediate::GenerateStmt(StmtASTNode *node, SymbolTable *symbolTable)//干嘛用的
{
    switch (node->type)
    {
    case StmtType::compStmt:
    {
        if (node->parent->nodeType == ASTNodeType::loop)
            return symbolTable;
        return symbolTable->createChildTable();
    }
    break;
    default:
        break;
    }
    return symbolTable;
}

SymbolTable *InterMediate::GenerateReturn(StmtASTNode *node, SymbolTable *symbolTable)
{
    AST *p = node->child;
    Quad *temp;
    symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
    tempVar.push_back(result);
    if (p == NULL)
    {
        temp = new Quad(OpCode::RETURN, (symbol *)NULL, (symbol *)NULL, (symbol *)NULL);
    }
    else if (p->nodeType == ASTNodeType::literal)
    {
        int arg1 = std::stoi(p->value);
        temp = new Quad(OpCode::RETURN, arg1, result);
    }
    else if (p->nodeType == ASTNodeType::assignVar)
    {
        symbol *arg1 = symbolTable->findSymbol(p->value);
        temp = new Quad(OpCode::RETURN, arg1, result);
    }
    else if (p->nodeType == ASTNodeType::op)
    {
        symbol *arg1 = this->GenerateOp((OperatorASTNode *)p, symbolTable);
        temp = new Quad(OpCode::RETURN, arg1, result);
    }
    else
    {
        std::cout << "\033[31mError: \033[0m"
                  << "Type error" << std::endl;
        exit(1);
    }
    quads.push_back(*temp);
}

symbol *InterMediate::GenerateOp(OperatorASTNode *node, SymbolTable *symbolTable)
{
    Quad *temp;
    AST *arg1Node, *arg2Node;
    switch (node->type)
    {
    case opType::Assignop:
    {
        symbol *result;
        OpCode op;
        if (node->child->nodeType == ASTNodeType::op && ((OperatorASTNode *)node->child)->type == opType::GetValue)
        {
            op = OpCode::ASSIGN_POINTER;
            result = symbolTable->findSymbol(node->child->child->value);
        }
        else
        {
            op = OpCode::ASSIGN;
            if (node->child->nodeType != ASTNodeType::assignVar)
            {
                std::cout << "\033[31mError: \033[0m"
                          << node->child->value << " is not a variable. What are u doing?" << std::endl;
                exit(1);
            }
            result = symbolTable->findSymbol(node->child->value);//符号表返回什么东西？
        }

        AST *arg1Node = node->child->peer;
        if (arg1Node->nodeType == ASTNodeType::assignVar)
        {
            symbol *arg1 = symbolTable->findSymbol(arg1Node->value);
            if (result->getIdType() == symbolType::integer && arg1->getIdType() == symbolType::pointer)
            {
                std::cout << "\033[31mError: \033[0m"
                          << "Syntax error, maybe you have used the wrong type: " << (int)arg1Node->nodeType << "  value:" << arg1Node->value << std::endl;
                exit(1);
            }
            temp = new Quad(op, arg1, result);
        }
        else if (arg1Node->nodeType == ASTNodeType::op)
        {
            symbol *arg1 = GenerateOp((OperatorASTNode *)arg1Node, symbolTable);
            temp = new Quad(op, arg1, result);
        }
        else if (arg1Node->nodeType == ASTNodeType::literal)
        {
            int arg1 = std::stoi(arg1Node->value);
            temp = new Quad(op, arg1, result);
        }
        else
        {
            std::cout << "\033[31mError: \033[0m"
                      << "No match type of" << (int)arg1Node->nodeType << "  value:" << arg1Node->value << std::endl;
            exit(1);
        }
        this->quads.push_back(*temp);
        return result;
        break;
    }
    case opType::AssignArray:
    {
        symbol *result;
        if (node->child->nodeType != ASTNodeType::op)
        {
            std::cout << "\033[31mError: \033[0m"
                      << node->value << " syntax error. What are u doing?" << std::endl;
        }
        result = GenerateOp((OperatorASTNode *)node->child, symbolTable);
        AST *arg1Node = node->child->peer;
        symbol *arg2 = this->childValue.top();
        this->childValue.pop();
        if (arg1Node->nodeType == ASTNodeType::assignVar)
        {
            symbol *arg1 = symbolTable->findSymbol(arg1Node->value);
            temp = new Quad(OpCode::ASSIGN_ARRAY, arg1, arg2, result);
        }
        else if (arg1Node->nodeType == ASTNodeType::op)
        {
            symbol *arg1 = GenerateOp((OperatorASTNode *)arg1Node, symbolTable);
            temp = new Quad(OpCode::ASSIGN_ARRAY, arg1, arg2, result);
        }
        else if (arg1Node->nodeType == ASTNodeType::literal)
        {
            int arg1 = std::stoi(arg1Node->value);
            temp = new Quad(OpCode::ASSIGN_ARRAY, arg1, arg2, result);
        }
        else
        {
            std::cout << "\033[31mError: \033[0m"
                      << "No match type of" << (int)arg1Node->nodeType << "  value:" << arg1Node->value << std::endl;
            exit(1);
        }
        this->quads.push_back(*temp);

        return result;
        break;
    }
    case opType::Relop:
    {
        Quad *tempTrue, *tempFalse;
        arg1Node = node->child;
        arg2Node = arg1Node->peer;
        if (node->value == ">")
        {
            RelopOp(tempTrue, tempFalse, OpCode::JUMP_GREAT, arg1Node, arg2Node, symbolTable);
        }
        else if (node->value == ">=")
        {
            RelopOp(tempTrue, tempFalse, OpCode::JUMP_EQ_GREAT, arg1Node, arg2Node, symbolTable);
        }
        else if (node->value == "<")
        {
            RelopOp(tempTrue, tempFalse, OpCode::JUMP_SMALL, arg1Node, arg2Node, symbolTable);
        }
        else if (node->value == "<=")
        {
            RelopOp(tempTrue, tempFalse, OpCode::JUMP_EQ_SMALL, arg1Node, arg2Node, symbolTable);
        }
        else if (node->value == "!=")
        {
            RelopOp(tempTrue, tempFalse, OpCode::JUMP_NOT_EQUAL, arg1Node, arg2Node, symbolTable);
        }
        else if (node->value == "==")
        {
            RelopOp(tempTrue, tempFalse, OpCode::JUMP_EQUAL, arg1Node, arg2Node, symbolTable);
        }
        break;
    }
    case opType::Plus: // 可能需要重构一下，方便看
    {
        symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
        arg1Node = node->child;
        arg2Node = arg1Node->peer;
        tempVar.push_back(result);
        result = tempVar.back();
        temp = this->CaculateOp(OpCode::PLUS, arg1Node, arg2Node, result, symbolTable);
        this->quads.push_back(*temp);
        return result;
        break;
    }
    case opType::Minus:
    {
        symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
        arg1Node = node->child;
        arg2Node = arg1Node->peer;
        tempVar.push_back(result);
        result = tempVar.back();
        temp = this->CaculateOp(OpCode::MINUS, arg1Node, arg2Node, result, symbolTable);
        this->quads.push_back(*temp);
        return result;
        break;
    }
    case opType::Times:
    {
        symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
        arg1Node = node->child;
        arg2Node = arg1Node->peer;
        tempVar.push_back(result);
        result = tempVar.back();
        temp = this->CaculateOp(OpCode::TIMES, arg1Node, arg2Node, result, symbolTable);
        this->quads.push_back(*temp);
        return result;
        break;
    }
    case opType::Div:
    {
        symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
        arg1Node = node->child;
        arg2Node = arg1Node->peer;
        tempVar.push_back(result);
        result = tempVar.back();
        temp = this->CaculateOp(OpCode::DIV, arg1Node, arg2Node, result, symbolTable);
        this->quads.push_back(*temp);
        return result;
        break;
    }
    case opType::Mod:
    {
        symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
        arg1Node = node->child;
        arg2Node = arg1Node->peer;
        tempVar.push_back(result);
        result = tempVar.back();
        temp = this->CaculateOp(OpCode::MOD, arg1Node, arg2Node, result, symbolTable);
        this->quads.push_back(*temp);
        return result;
        break;
    }
    case opType::Power:
    {
        symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
        arg1Node = node->child;
        arg2Node = arg1Node->peer;
        tempVar.push_back(result);
        result = tempVar.back();
        temp = this->CaculateOp(OpCode::POWER, arg1Node, arg2Node, result, symbolTable);
        this->quads.push_back(*temp);
        return result;
        break;
    }
    case opType::Negative:
    {
        symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
        arg1Node = node->child;
        tempVar.push_back(result);
        result = tempVar.back();
        if (arg1Node->nodeType == ASTNodeType::assignVar)
        {
            symbol *arg1 = symbolTable->findSymbol(arg1Node->value);
            temp = new Quad(OpCode::NEGATIVE, arg1, result);
        }
        else if (arg1Node->nodeType == ASTNodeType::literal)
        {
            int arg1 = std::stoi(arg1Node->value);
            temp = new Quad(OpCode::NEGATIVE, arg1, result);
        }
        else if (arg1Node->nodeType == ASTNodeType::op)
        {
            symbol *arg1 = GenerateOp((OperatorASTNode *)arg1Node, symbolTable);
            temp = new Quad(OpCode::NEGATIVE, arg1, result);
        }
        this->quads.push_back(*temp);
        return result;
        break;
    }
    case opType::SingalAnd:
    {
        symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::pointer);
        arg1Node = node->child;
        tempVar.push_back(result);
        if (arg1Node->nodeType == ASTNodeType::assignVar)
        {
            symbol *arg1 = symbolTable->findSymbol(arg1Node->value);
            temp = new Quad(OpCode::GET_ADDRESS, arg1, result);
        }
        else
        {
            std::cout << "\033[31mError: \033[0m"
                      << " lvalue required as unary ‘&’ operand" << std::endl;
            exit(1);
        }
        this->quads.push_back(*temp);
        return result;
        break;
    }
    case opType::And: // 保证栈顶是：node2List, node1List,所以得先遍历子节点，再到&&节点
    {
        std::list<int> leftTrue, rightTrue, leftFalse, rightFalse;
        rightTrue = trueList.top();
        trueList.pop();
        leftTrue = trueList.top();
        trueList.pop();
        rightFalse = falseList.top();
        falseList.pop();
        leftFalse = falseList.top();
        falseList.pop();
        leftFalse.merge(rightFalse);//合并两个列表，相当于将需要错误出口一样的给合并起来
        falseList.push(leftFalse);//此时的假值回填表顶部所存的列表里面至少存有两个四元组编号
        trueList.push(rightTrue);
        backpatch(&leftTrue, signal.top());//回填操作
        signal.pop();
        break;
    }
    case opType::Or:
    {
        std::list<int> leftTrue, rightTrue, leftFalse, rightFalse;
        rightTrue = trueList.top();
        trueList.pop();
        leftTrue = trueList.top();
        trueList.pop();
        rightFalse = falseList.top();
        falseList.pop();
        leftFalse = falseList.top();
        falseList.pop();
        leftTrue.merge(rightTrue);
        trueList.push(leftTrue);
        falseList.push(rightFalse);
        backpatch(&leftFalse, signal.top());
        signal.pop();
        break;
    }
    case opType::Not:
    {
        std::list<int> trueL, falseL;
        trueL = trueList.top();
        trueList.pop();
        falseL = falseList.top();
        falseList.pop();
        trueList.push(falseL);
        falseList.push(trueL);
        break;
    }
    case opType::GetValue:
    {
        Quad *temp;
        symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
        arg1Node = node->child;
        tempVar.push_back(result);
        if (arg1Node->nodeType == ASTNodeType::assignVar)
        {
            symbol *arg1 = symbolTable->findSymbol(arg1Node->value);
            temp = new Quad(OpCode::GET_VALUE, arg1, result);
        }
        else if (arg1Node->nodeType == ASTNodeType::op)
        {
            symbol *arg1 = GenerateOp((OperatorASTNode *)arg1Node, symbolTable);
            temp = new Quad(OpCode::GET_VALUE, arg1, result);
        }
        else
        {
            std::cout << "\033[31mError: \033[0m"
                      << " lvalue required as unary ‘&’ operand" << std::endl;
            exit(1);
        }
        this->quads.push_back(*temp);
        return result;
        break;
    }
    case opType::GetArrayValue:
    {
        Quad *temp;
        symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
        AST *arg1Node = node->child;
        AST *arg2Node = arg1Node->peer;
        symbol *arg1 = symbolTable->findSymbol(arg1Node->value);
        // 如果赋值，就把index push到 childValue中 返回arg1
        // 如果是别的运算，就把值放到temp中，返回temp，并且加一条四元式
        if (node->parent->nodeType == ASTNodeType::op && ((OperatorASTNode *)node->parent)->type == opType::AssignArray)
        {
            if (arg2Node->nodeType == ASTNodeType::assignVar)
            {
                childValue.push(symbolTable->findSymbol(arg2Node->value));
            }
            else if (arg2Node->nodeType == ASTNodeType::literal)
            {
                symbol *arg2 = new symbol(arg2Node->value, symbolType::literal);
                childValue.push(arg2);
            }
            else if (arg2Node->nodeType == ASTNodeType::op)
            {
                symbol *arg2 = GenerateOp((OperatorASTNode *)arg2Node, symbolTable);
                childValue.push(arg2);
            }
            else
            {
                std::cout << "\033[31mError: \033[0m"
                          << "Type error" << std::endl;
                exit(1);
            }
            return arg1;
        }
        else
        {
            if (arg2Node->nodeType == ASTNodeType::assignVar)
            {
                symbol *arg2 = symbolTable->findSymbol(arg2Node->value);
                temp = new Quad(OpCode::GET_ARRAY, arg1, arg2, result);
            }
            else if (arg2Node->nodeType == ASTNodeType::literal)
            {
                int arg2 = std::stoi(arg2Node->value);
                temp = new Quad(OpCode::GET_ARRAY, arg1, arg2, result);
            }
            else if (arg2Node->nodeType == ASTNodeType::op)
            {
                symbol *arg2 = GenerateOp((OperatorASTNode *)arg2Node, symbolTable);
                temp = new Quad(OpCode::GET_ARRAY, arg1, arg2, result);
            }
            else
            {
                std::cout << "\033[31mError: \033[0m"
                          << "Type error" << std::endl;
                exit(1);
            }
            tempVar.push_back(result);
            this->quads.push_back(*temp);
            return result;
        }
    }
    default:
        break;
    }
    return NULL;
}

Quad *InterMediate::CaculateOp(OpCode op, AST *arg1Node, AST *arg2Node, symbol *result, SymbolTable *symbolTable)
{
    Quad *temp;
    if (arg1Node->nodeType == ASTNodeType::assignVar && arg2Node->nodeType == ASTNodeType::assignVar)
    {
        symbol *arg1 = symbolTable->findSymbol(arg1Node->value);
        symbol *arg2 = symbolTable->findSymbol(arg2Node->value);
        temp = new Quad(op, arg1, arg2, result);
    }
    else if (arg1Node->nodeType == ASTNodeType::assignVar && arg2Node->nodeType == ASTNodeType::op)
    {
        symbol *arg1 = symbolTable->findSymbol(arg1Node->value);
        symbol *arg2 = GenerateOp((OperatorASTNode *)arg2Node, symbolTable);
        temp = new Quad(op, arg1, arg2, result);
    }
    else if (arg1Node->nodeType == ASTNodeType::assignVar && arg2Node->nodeType == ASTNodeType::literal)
    {
        symbol *arg1 = symbolTable->findSymbol(arg1Node->value);
        int arg2 = std::stoi(arg2Node->value);
        temp = new Quad(op, arg1, arg2, result);
    }
    else if (arg1Node->nodeType == ASTNodeType::op && arg2Node->nodeType == ASTNodeType::assignVar)
    {
        symbol *arg1 = GenerateOp((OperatorASTNode *)arg1Node, symbolTable);
        symbol *arg2 = symbolTable->findSymbol(arg2Node->value);
        temp = new Quad(op, arg1, arg2, result);
    }
    else if (arg1Node->nodeType == ASTNodeType::op && arg2Node->nodeType == ASTNodeType::op)
    {
        symbol *arg1 = GenerateOp((OperatorASTNode *)arg1Node, symbolTable);
        symbol *arg2 = GenerateOp((OperatorASTNode *)arg2Node, symbolTable);
        temp = new Quad(op, arg1, arg2, result);
    }
    else if (arg1Node->nodeType == ASTNodeType::op && arg2Node->nodeType == ASTNodeType::literal)
    {
        symbol *arg1 = GenerateOp((OperatorASTNode *)arg1Node, symbolTable);
        int arg2 = std::stoi(arg2Node->value);
        temp = new Quad(op, arg1, arg2, result);
    }

    else if (arg1Node->nodeType == ASTNodeType::literal && arg2Node->nodeType == ASTNodeType::assignVar)
    {
        int arg1 = std::stoi(arg1Node->value);
        symbol *arg2 = symbolTable->findSymbol(arg2Node->value);
        temp = new Quad(op, arg1, arg2, result);
    }
    else if (arg1Node->nodeType == ASTNodeType::literal && arg2Node->nodeType == ASTNodeType::op)
    {
        int arg1 = std::stoi(arg1Node->value);
        symbol *arg2 = GenerateOp((OperatorASTNode *)arg2Node, symbolTable);
        temp = new Quad(op, arg1, arg2, result);
    }
    else if (arg1Node->nodeType == ASTNodeType::literal && arg2Node->nodeType == ASTNodeType::literal)
    {
        int arg1 = std::stoi(arg1Node->value);
        int arg2 = std::stoi(arg2Node->value);
        temp = new Quad(op, arg1, arg2, result);
    }
    else
    {
        std::cout << "\033[31mError: \033[0m"
                  << "No match type for" << (int)arg1Node->nodeType << "  value:" << arg1Node->value << std::endl;
        exit(1);
    }
    return temp;
}

void InterMediate::RelopOp(Quad *trueQuad, Quad *falseQuad, OpCode op, AST *arg1Node, AST *arg2Node, SymbolTable *symbolTable)
{
    if (arg1Node->nodeType == ASTNodeType::assignVar && arg2Node->nodeType == ASTNodeType::assignVar)
    {
       //创建真入口，如果表达式为真，跳转
        trueQuad = new Quad(op, symbolTable->findSymbol(arg1Node->value), symbolTable->findSymbol(arg2Node->value), (int)NULL);
        //创建加入口，如果为加，跳转
        falseQuad = new Quad(OpCode::JUMP, (int)NULL);
    }
    else if (arg1Node->nodeType == ASTNodeType::assignVar && arg2Node->nodeType == ASTNodeType::literal)
    {
        trueQuad = new Quad(op, symbolTable->findSymbol(arg1Node->value), std::stoi(arg2Node->value), (int)NULL);
        falseQuad = new Quad(OpCode::JUMP, (int)NULL);
    }
    else if (arg1Node->nodeType == ASTNodeType::literal && arg2Node->nodeType == ASTNodeType::assignVar)
    {
        trueQuad = new Quad(op, std::stoi(arg1Node->value), symbolTable->findSymbol(arg2Node->value), (int)NULL);
        falseQuad = new Quad(OpCode::JUMP, (int)NULL);
    }
    else if (arg1Node->nodeType == ASTNodeType::literal && arg2Node->nodeType == ASTNodeType::literal)
    {
        trueQuad = new Quad(op, std::stoi(arg1Node->value), std::stoi(arg2Node->value), (int)NULL);
        falseQuad = new Quad(OpCode::JUMP, (int)NULL);
    }
    //回填操作预备
    std::list<int> trueL; //创建一个列表存储刚刚创建的需要回填的四元组下标
    trueL.push_back(quads.size());//得到需要回填的四元组的下标，存入列表
    trueList.push(trueL);//将存有回填四元组下标的列表存入真值回填表
    this->quads.push_back(*trueQuad);//将真值四元组存入四元组列表
    std::list<int> falseL; 
    falseL.push_back(quads.size());
    this->quads.push_back(*falseQuad);
    falseList.push(falseL);
    return;
}

std::list<int> *InterMediate::makelist(int index)//创建一个列表
{
    std::list<int> *jumpList = new std::list<int>();
    jumpList->push_back(index);
    return jumpList;
}
std::list<int> *InterMediate::merge(std::list<int> *list1, std::list<int> *list2)//将list1和list2合并
{
    list1->merge(*list2);//按照升序排序，最后一个下标最大
    return list1;
}
void InterMediate::backpatch(std::list<int> *backList, int target)//将目标序号填入list语句
{
    std::list<int>::iterator it;
    for (it = backList->begin(); it != backList->end(); it++)
    {
        quads[*it].backpatch(target);
    }
    return;
}
void InterMediate::printQuads()//从列表开始到最后依次打印四元组
{
    std::vector<Quad>::iterator it;
    std::cout << "\t   Operator   \targ1\targ2\tresult" << std::endl;
    int count = 0;
    for (it = this->quads.begin(); it != this->quads.end(); it++)
    {
        std::cout << count++ << "\t";
        it->printQuad();
    }
    return;
}
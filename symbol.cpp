#include "AST.h"
#include "./symbol.h"
#include <string>

symbol::symbol()
{
    this->idName = "";
    this->idType = symbolType::integer;
}

symbol::symbol(std::string idName, symbolType idType)
{
    this->idName = idName;
    this->idType = idType;
}

const std::string symbol::getIdName()
{
    return this->idName;
}

symbolType &symbol::getIdType()
{
    return this->idType;
}

symbol *SymbolTable::findInThisTable(const std::string name)
{
    std::unordered_map<std::string, symbol *>::iterator iter;
    iter = this->symbolHashTable.find(name);
    if (iter != this->symbolHashTable.end())
        return iter->second;
    else
        return NULL;
}

SymbolTable::SymbolTable(SymbolTable *parent, bool isFun)
{
    this->childTable = NULL;
    this->parentTable = parent;
    this->isFunctionTable = isFun;
    SymbolTable *p = this;
    while (!p->isFunctionTable)
    {
        p = p->parentTable;
    }
    this->baseTable = p; //根作用域是主函数，只有主函数的isFunctionTable是True
    this->symbolItemCount = 0;
    this->totalOffset = 0;

    if (isFun)
    {
        this->symbolArray = new std::vector<symbol *>();
    }
}

symbol *SymbolTable::findSymbol(std::string name)
{
    SymbolTable *t = this;
    while (t != NULL)
    {
        symbol *target = t->findInThisTable(name);
        if (target == NULL)
        {
            // Not found in current table, goto parent table.
            t = t->parentTable;
        }
        else
        {
            return target;
        }
    }
    std::cout << "\033[31mError: \033[0m"
              << "value " << name << " is not defined" << std::endl;
    exit(1);
    return NULL;
}

SymbolTable *SymbolTable::createChildTable()
{
    SymbolTable *child = new SymbolTable(this, false);
    if (this->childTable == NULL)
        this->setChild(child);
    else if (this->childTable->peerTable == NULL)
    {
        this->childTable->peerTable = child;
    }
    else
    {
        SymbolTable *peer = this->childTable->peerTable;
        while (peer != NULL)
        {
            if (peer->peerTable == NULL)
                break;
            peer = peer->peerTable;
        }
        peer->peerTable = child;
    }
    return child;
}

int SymbolTable::addSymbol(symbol *s)
{
    if (this->findInThisTable(s->getIdName()) == NULL)
    {
        this->symbolHashTable[s->getIdName()] = s;
        return SUCCESS;
    }
    else
        return FAIL;
}

int SymbolTable::addSymbol(std::string idName, symbolType idType)
{
    symbol *s = new symbol(idName, idType);
    if (this->findInThisTable(s->getIdName()) != NULL)
        return FAIL;

    this->baseTable->symbolArray->push_back(s); // why add to baseTable, not this table ?
    s->setIndex(this->baseTable->symbolItemCount++);
    if (idType == symbolType::integer || idType == symbolType::pointer)
    {
        this->baseTable->totalOffset += INT_OFFSET;
    }
    s->setOffset(this->baseTable->totalOffset);
    return this->addSymbol(s);
}

int SymbolTable::addArraySymbol(AST *decArray)
{
    DefVarASTNode *array = (DefVarASTNode *)decArray;
    std::string name = decArray->value;
    if (this->findInThisTable(name) != NULL)
        return FAIL;
    else
    {
        symbol *s = new symbol(name, symbolType::Array);
        this->baseTable->symbolArray->push_back(s);
        s->setIndex(this->baseTable->symbolItemCount++);
        this->baseTable->totalOffset += array->arrayLength * 4;
        s->setOffset(this->baseTable->totalOffset);
        this->symbolHashTable[name] = s;
        return SUCCESS;
    }
}

void SymbolTable::printSymbolTable() {
    cout<<this->symbolArray->size()<<endl;
    for(int i = 0; i < this->symbolArray->size(); i++) {
        symbol *s = symbolArray[0][i];
        cout << s->getIdName() << ' ' << s->getIndex() << ' ' << s->getOffset() << endl;
    }
}

SymbolTable * SymbolTable::buildSymbolTable(AST *node)
{
    AST *p = node->child;
    switch (node->nodeType)
    {
    case ASTNodeType::defFunc: //是主函数则新建一个符号表，根作用域
    {
        DefFunASTNode *tempNode = (DefFunASTNode *)node;
        if(node->value == "main") {
            while (p != NULL)
            {
                this->buildSymbolTable(p);
                p = p->peer;
            }
        }
    }
    case ASTNodeType::stmt:
    {
        StmtASTNode *ret = (StmtASTNode *)node;
        if (ret->type == StmtType::compStmt)
        {
            while (p != NULL)
            {
                this->buildSymbolTable(p);
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
            this->addArraySymbol(tempNode);
        }
        else
        {
            this->addSymbol(tempNode->value, tempNode->type);
        }
        break;
    }
    case ASTNodeType::loop: 
    {
        LoopASTNode *loop = (LoopASTNode *)node;
        if (loop->loopType == LoopType::_for)
        {
            SymbolTable *childTable = this->createChildTable();
            while (p != NULL)
            {
                childTable->buildSymbolTable(p);
                p = p->peer;
            }
        }
        else if (loop->loopType == LoopType::_while)
        {
            SymbolTable *childTable = this->createChildTable();
            while (p != NULL)
            {
                childTable->buildSymbolTable(p);
                p = p->peer;
            }
        }
        break;
    }
    case ASTNodeType::select: // Just IF and ELSE.
    {
        SelectASTNode *select = (SelectASTNode *)node;
        SymbolTable *childTable = this->createChildTable();
        while (p != NULL)
        {
            childTable->buildSymbolTable(p);
            p = p->peer;
        }
        break;
    }
    case ASTNodeType::root:
    {
        while (p != NULL)
        {
            this->buildSymbolTable(p);
            p = p->peer;
        }
        break;
    }
    default:
        break;
    }
    return this;
}

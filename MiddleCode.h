#ifndef INTERMEDIATE_H
#define INTERMEDIATE_H

#include "AST.h"
#include "symbol.h"
#include <stack>
#include <list>
enum class OpCode//四元组第一个指令
{
    JUMP,//空跳转
    JUMP_SMALL,
    JUMP_EQ_SMALL,
    JUMP_GREAT,
    JUMP_EQ_GREAT,
    JUMP_EQUAL,
    JUMP_NOT_EQUAL,
    PLUS,
    MINUS,
    TIMES,
    DIV,
    MOD,
    POWER,
    NEGATIVE,
    ASSIGN,
    ASSIGN_ARRAY,
    ASSIGN_POINTER,
    GET_ADDRESS,
    PARAM,
    CALL,
    RETURN,
    LABEL,
    GET_VALUE,
    GET_ARRAY
};

union Arg {
    symbol *var;
    int target;
};

class Quad
{
private:
    OpCode op;
    Arg arg1;
    Arg arg2;
    Arg result;
    int flag;
    std::string printOp();

public:
    Quad(OpCode op, int result);
    Quad(OpCode op, symbol *arg1, symbol *result); // assign variable to variable
    Quad(OpCode op, int arg1, symbol *result);     // assign literals to variable
    Quad(OpCode op, symbol *arg1, symbol *arg2, symbol *result);
    Quad(OpCode op, int arg1, symbol *arg2, symbol *result);
    Quad(OpCode op, symbol *arg1, int arg2, symbol *result);
    Quad(OpCode op, int arg1, int arg2, symbol *result);

    Quad(OpCode op, symbol *arg1, symbol *arg2, int result);
    Quad(OpCode op, symbol *arg1, int arg2, int result);
    Quad(OpCode op, int arg1, int arg2, int result);

    inline void backpatch(int target) { this->result.target = target; };
    inline int getResult() { return this->result.target == 0 ? 1 : 0; }
    inline int getFlag() { return this->flag; }
    inline OpCode getOpCode() { return this->op; }
    inline Arg getArg(int index)
    {
        if (index == 1)
            return this->arg1;
        else if (index == 2)
            return this->arg2;
        else if (index == 3)
            return this->result;
    }
    void printQuad();
};
// Inter mediate code generator
class MiddleCode
{
private:
  RootASTNode *root; //根结点
  char* rootType; 
  int is_return = 0;           
  std::vector<Quad> quads;       //存储四元组
  std::vector<symbol *> tempVar; //存储符号表
  SymbolTable *rootTable; // 符号表

  std::stack<std::list<int>> trueList;  //真值回填表
  std::stack<std::list<int>> falseList; //假值回填表
  std::stack<int> signal;
  std::stack<symbol *> childValue;
  // Function for backpatch.
  std::list<int> *makelist(int index);                                 //创建一个含index的列表、index为四元组的下标，函数返回指向这个列表的指针
  std::list<int> *merge(std::list<int> *list1, std::list<int> *list2); //把list1和list2两个列表合并，返回合并后的链首指针
  void backpatch(std::list<int> *backList, int target);                //完成回填，把backlist所链接的每个四元式都填为target

public:
  inline AST *getRoot() { return this->root; }
  inline SymbolTable *getTable() { return this->rootTable; }
  inline std::vector<Quad> &getQuads() { return this->quads; }
  inline std::vector<symbol *> &getTempVars() { return this->tempVar; }
  MiddleCode(RootASTNode *rootNode, SymbolTable *structTable);
  void Generate(AST *node, SymbolTable *symbolTable);
  SymbolTable *GenerateStmt(StmtASTNode *node, SymbolTable *symbolTable);
  SymbolTable *GenerateReturn(StmtASTNode *node, SymbolTable *symbolTable);
  symbol *GenerateOp(OperatorASTNode *node, SymbolTable *symbolTable);
  Quad *CaculateOp(OpCode op, AST *arg1Node, AST *arg2Node, symbol *result, SymbolTable *symbalTable);
  void RelopOp(Quad *trueQuad, Quad *falseQuad, OpCode op, AST *arg1Node, AST *arg2Node, SymbolTable *symbolTable);
  void printQuads();
};
#endif

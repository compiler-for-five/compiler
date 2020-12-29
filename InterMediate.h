#ifndef INTERMEDIATE_H
#define INTERMEDIATE_H

#include "AST.h"
#include "Quad.h"
#include "symbol.h"
#include <stack>
#include <list>

// Inter mediate code generator
class InterMediate
{
private:
  RootASTNode *root;             //根结点
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
  InterMediate(RootASTNode *rootNode, SymbolTable *structTable);
  void Generate(AST *node, SymbolTable *symbolTable);
  // Create a child symbol table to generate follow code.
  SymbolTable *GenerateStmt(StmtASTNode *node, SymbolTable *symbolTable);
  SymbolTable *GenerateReturn(StmtASTNode *node, SymbolTable *symbolTable);
  symbol *GenerateOp(OperatorASTNode *node, SymbolTable *symbolTable);
  Quad *CaculateOp(OpCode op, AST *arg1Node, AST *arg2Node, symbol *result, SymbolTable *symbalTable);
  void RelopOp(Quad *trueQuad, Quad *falseQuad, OpCode op, AST *arg1Node, AST *arg2Node, SymbolTable *symbolTable);
  void printQuads();
};
#endif

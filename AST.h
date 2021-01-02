#ifndef AST_H
#define AST_H
#include<iostream>
using namespace std;
extern char *yytext;
extern int yylineno;
int yyerror(char *s);
extern int yyparse(void);
extern FILE * yyin;
extern FILE * yyout;

enum class ASTNodeType
{
    literal = 1,
    op = 2,
    stmt = 3,
    defVar = 4,
    assignVar = 5,
    loop = 6,
    select = 7,
    root = 8,
    printInt = 9
};

enum class symbolType
{
    unset = -1,
    integer = 1,
    boolean = 2,
    Void = 3,
    literal = 4,
    pointer = 5,
    Array = 6
};

class AST
{
public:
    ASTNodeType nodeType;
    AST *parent; //父节点
    AST *child; //孩子节点
    AST *peer;
    string value;
    void print_tree(AST *node, int depth);
    AST();
    AST(ASTNodeType nodetype);
    AST(char *value,ASTNodeType nodetype);
    void add_child_node(AST *node);
    void add_peer_node(AST *node);
    AST* get_last_peer_node();
    inline void set_parent(AST *parent) { this->parent = parent; }
    virtual void print_info(int depth) = 0;
};

class DefVarASTNode : public AST
{
public:
    symbolType type = symbolType::unset;
    int arrayLength;
    DefVarASTNode(char *value, AST *node = NULL);
    inline void setArrayType() { this->type = symbolType::Array; }
    void set_type(char *type);
    void set_array_length(char *length);
    void print_info(int depth);
};

class LiteralASTNode : public AST 
{
public:
    LiteralASTNode(char *value);
    //通过 AST 继承
    void print_info(int depth);
};

enum class LoopType
{
    _for,
    _while
};

class LoopASTNode:public AST
{
public:
    // Type of Loop, for or while.
    LoopType loopType;
    AST *condition; //循环条件
    AST *declare;  //变量声明
    AST *action;  //循环后的动作（同i++）
    AST *body;
    LoopASTNode(char *value, LoopType type, AST *body, AST* condition, bool iswhile);  //对while
    LoopASTNode(char *value, LoopType type, AST *body, AST* declare = NULL, AST* condition = NULL, AST* action = NULL);  //对for
    void print_info(int depth);
};

class RootASTNode : public AST
{
public:
    char* return_type;
    RootASTNode();
    void print_info(int depth);
};

enum class opType
{
    Assignop = 1,        // =
    Relop = 2,           // < > <= >=
    Plus = 3,            // +
    Minus = 4,           // -
    Times = 5,           // *
    Div = 6,             // /
    Mod = 7,             // %
    Power = 8,           // ^
    And = 9,             // &&
    Or = 10,             // || 
    Negative = 11,       // -
    Not = 12,            // !
    SingalAnd = 13,      // &
    GetValue = 14,       // *
    GetArrayValue = 15,  //a[3]
    AssignArray = 16,    // a[1] = ?
    Orgative = 17        // +
};

class OperatorASTNode : public AST
{
public:
    opType type;
    OperatorASTNode(char *value, opType type);
    void print_info(int depth);
};

enum class SelectType
{
  _if = 1,
  _else = 2
};
class SelectASTNode : public AST
{
public:
  AST *condition;
  AST *elseStmt;
  AST *elseifStmt;
  AST *body;
   //if & else if contain 23 child node, qulification statement and 'else''else if' node(optional)
  SelectType selectType;
  SelectASTNode(char *value, SelectType type, AST *body, AST *condition, AST *elseStmt = NULL);
  void print_info(int depth);
};

class PrintASTNode : public AST
{
public:
    PrintASTNode(char *value);
    void print_info(int depth);
};

enum class StmtType
{
    compStmt = 1,
    expStmt = 2,
    defStmt = 3,
    returnStmt = 4
};

class StmtASTNode : public AST
{
public:
    StmtType type;
    StmtASTNode(StmtType type);
    void print_info(int depth);
};



class VarASTNode : public AST
{
public:
    VarASTNode(char *value, AST *node = NULL);
    void print_info(int depth);
};

#endif
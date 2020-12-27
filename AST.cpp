#include "AST.h"
#include "symbol.h"
#include <cstring>
#include <typeinfo>
#include <stdlib.h>
using namespace std;

AST::AST()
{
  this->child = NULL;
  this->parent = NULL;
  this->peer = NULL;
  this->value = "Initial stat";
}

AST::AST(ASTNodeType nodeType)
{
  this->child = NULL;
  this->parent = NULL;
  this->peer = NULL;
  this->nodeType = nodeType;
}

AST::AST(char *value, ASTNodeType nodeType)
{
  this->child = NULL;
  this->parent = NULL;
  this->peer = NULL;
  this->value = value;
  this->nodeType = nodeType;
}

void AST::add_child_node(AST *node)
{
  if (node != NULL)
  {
    node->parent = this;
    AST *peerNode = node->peer;
    while (peerNode != NULL)
    {
      peerNode->parent = this;
      peerNode = peerNode->peer;
    }
  }
  this->child = node;
}

void AST::add_peer_node(AST *node)
{
  if (node != NULL)
    node->parent = this->parent;
  this->peer = node;
}

AST *AST::get_last_peer_node()
{
  AST *t = this;
  while (t->peer != NULL)
  {
    t = t->peer;
  }
  return t;
}

void AST::print_tree(AST *node, int depth)
{
  if (node == NULL)
    return;
  cout << (int)node->nodeType << "  " << typeid(*node).name() << "   " << "\t";
  cout << depth << "  ";
  for (int i = 0; i < depth; i++)
    cout << "  ";
  node->print_info(depth);
  AST *p = node->child;
  while (p != NULL)
  {
    AST::print_tree(p, depth + 1);
    p = p->peer;
  }
}

DefVarASTNode::DefVarASTNode(char *value, AST *node)
    : AST(value, ASTNodeType::defVar)
{
    this->type = symbolType::unset;
    this->add_child_node(node);
}

void DefVarASTNode::print_info(int depth)
{
    cout << "Variation define.";
    if (type == symbolType::integer)
        cout << "integer ";
    else if (type == symbolType::pointer)
        std::cout << "pointer ";
    else if (type == symbolType::Array){
        std::cout << "array ";
        cout<<this->arrayLength<<" ";
    }
    cout << this->value << endl;
}

void DefVarASTNode::set_type(char *type)
{
    symbolType varType;
    if (strcmp(type, "int") == 0)
    {
        varType = symbolType::integer;
    }
    else if (strcmp(type, "void") == 0)
    {
        varType = symbolType::Void;
    }
    else if (strcmp(type, "integer pointer") == 0)
    {
        varType = symbolType::pointer;
    }
    else if (strcmp(type, "array") == 0) {
        varType = symbolType::Array;
    }
    if (this->type == symbolType::unset) {
        this->type = varType;
    }
    DefVarASTNode *peer = (DefVarASTNode *)this->peer;
    while (peer != NULL)
    {
        if (peer->type == symbolType::unset) {
            peer->type = varType;
        }
        peer = (DefVarASTNode *)peer->peer;
    }
}

void DefVarASTNode::set_array_length(char *length) {
    if(length){
        this->arrayLength = atoi(length);
    }
}

LiteralASTNode::LiteralASTNode(char *value) : AST(value, ASTNodeType::literal)
{
}

void LiteralASTNode::print_info(int depth)
{
    cout << "literal: " << stoi(this->value) << endl;
}

LoopASTNode::LoopASTNode(char *value,
                         LoopType type,
                         AST *body,
                         AST *condition, bool iswhile)
    : AST(value, ASTNodeType::loop)
{
    this->loopType = type;
    if (condition != NULL) {
        this->add_child_node(condition);
        condition->add_peer_node(body);
    }
    else
        this->add_child_node(body);
    this->condition = condition;
    this->declare = NULL;
    this->action = NULL;
}

LoopASTNode::LoopASTNode(char *value,
                         LoopType type,
                         AST *body,
                         AST *declare,
                         AST *condition,
                         AST *action)
    : AST(value, ASTNodeType::loop)
{
    this->loopType = type;
    this->condition = condition;
    this->declare = declare;
    this->action = action;
    if (declare != NULL) {
        declare->set_parent(this);
        this->add_child_node(declare);
    }
    if (condition != NULL) {
        condition->set_parent(this);
        if(this->child->get_last_peer_node() != NULL)
            this->child->get_last_peer_node()->add_peer_node(condition);
        else
        {
            this->add_child_node(condition);
        }
        
    }
    if (action != NULL) {
        action->set_parent(this);
        if(this->child->get_last_peer_node() != NULL)
            this->child->get_last_peer_node()->add_peer_node(action);
        else
        {
            this->add_child_node(action);
        }
    }
    if(this->child->get_last_peer_node() != NULL)
        this->child->get_last_peer_node()->add_peer_node(body);
    else
    {
        this->add_child_node(body);
    }
}

void LoopASTNode::print_info(int depth)
{
    if (this->loopType == LoopType::_for)
    {
        cout << "FOR" << endl;
    }
    else
    {
        cout << "WHILE" << endl;
    }
}

OperatorASTNode::OperatorASTNode(char *value, opType type)
    : AST(value, ASTNodeType::op)
{
    this->type = type;
}

void OperatorASTNode::print_info(int depth)
{
    cout << "Operator:" << this->value << " Type is: " << (int)this->type << endl;
}

SelectASTNode::SelectASTNode(char *value, SelectType type, AST *body,
                             AST *condition, AST *elseStmt)
    : AST(value, ASTNodeType::select)
{
    this->selectType = type;
    this->body = body;
    this->body->set_parent(this);
    this->condition = condition;
    this->add_child_node(condition);
    this->condition->set_parent(this);
    condition->add_peer_node(body);
    this->elseStmt = elseStmt;
    if (elseStmt) {
        this->elseStmt->set_parent(this);
        this->child->get_last_peer_node()->add_peer_node(elseStmt);
    }
}

void SelectASTNode::print_info(int depth)
{
    if (this->selectType == SelectType::_if)
    {
        cout << "IF" << endl;
    }
}

StmtASTNode::StmtASTNode(StmtType type) : AST(ASTNodeType::stmt) {
    this->type = type;
}

void StmtASTNode::print_info(int depth) {
    if (this->type == StmtType::compStmt) {
        cout << "Comp Stmt" << endl;
    }
    else if (this->type == StmtType::defStmt) {
        cout << "Def Stmt" << endl;
    }
    else if (this->type == StmtType::expStmt) {
        cout << "Exp Stmt" << endl;
    }
    else if (this->type == StmtType::returnStmt) {
        cout << "Return Stmt" << endl;
    }
}

RootASTNode::RootASTNode() : AST(ASTNodeType::root)
{
  this->value = "Root";
}

void RootASTNode::print_info(int depth)
{
  cout << this->value << endl;
}

DefFunASTNode::DefFunASTNode(char* value, AST* argList, AST* funcBody)
    :AST(value, ASTNodeType::defFunc)
{
    this->argList = argList;
    this->add_child_node(funcBody);
}

void DefFunASTNode::print_info(int depth)
{
    cout << "Function define. Name:" << this->value << endl;
    cout << " ";
    for (int i = 0; i < depth + 1; i++) cout << " ";
    AST* var = (AST*)this->argList;
    while (var != NULL) {
        AST::print_tree(var, depth + 1);
        var = var->peer;
    }
}

void DefFunASTNode::setRevType(char* type)
{
    if (strcmp(type, "int") == 0) {
        this->revType = symbolType::integer;
    } else if (strcmp(type, "void") == 0) {
        this->revType = symbolType::Void;
    }
}

CallFunASTNode::CallFunASTNode(char *value, AST *varList)
    : AST(value, ASTNodeType::callFunc)
{
    this->varList = varList;
    if (varList != NULL) {
        varList->set_parent(this);
    }
}

CallFunASTNode::CallFunASTNode(char *value, char *var)
    : AST(value, ASTNodeType::callFunc)
{
    this->varList = varList;
    if (varList != NULL) {
        varList->set_parent(this);
    }
}

void CallFunASTNode::print_info(int depth) {
    cout << "Call Function." << this->value << endl;
    AST *var = this->varList;
    while (var != NULL) {
        AST::print_tree(var, depth + 1);
        var = var->peer;
    }
}

VarASTNode::VarASTNode(char *value, AST *node)
    : AST(value, ASTNodeType::assignVar)
{
    this->add_child_node(node);
}

void VarASTNode::print_info(int depth)
{
    cout << "Variation " << this->value << endl;
}



int main(int argc,char* argv[])
{
    cout<<"begin"<<endl;
    FILE* file = fopen(argv[1], "r");
    yyin = file;
    do {
		yyparse();
	} while(!feof(yyin));
}

int yyerror(char *s)
{
  cout<<"error: "<<s<<endl;
  return 0;
}
%{
#include<unistd.h>
#include<stdio.h>   
#include <stdlib.h>
#include <stdarg.h>
#include "AST.h"
#include <string.h>
int yyerror(char *s);
int yylex();
extern FILE * yyin;
extern int yyparse(void);
AST* root;
%}

%union{
struct AST* a;
char* str;
}
/*declare tokens*/
%token <str> SEM COMMA delim whitespace
WHILE DO IF THEN ELSE FOR NEWLINE ERRORCHAR RETURN IFX SINGNALAND
%type <str> RETYPE 
%token <str> TYPE VOID ID NUMBER MAIN
%type <a> Program Block Stmts Stmt Initializer Declaration_stmt Bool Expr Term Factor Block_Stmt Assignment_list
For_First For_Second For_Third Assignment_Stmt Init_declarator Initial_declaration_list direct_declarator Declarator
unary_expr unary_operator POW Bool_expr logical_and_expr logical_or_expr
/*priority*/
%right EQ
%left OR
%left AND
%left <str> LT LE GT GE EQUEL NE
%left DEC ADD
%left DIV STAR MOD
%left EXP
%right NOT 
%left LB RB MLB MRB BLB BRB
%nonassoc UMINUS UPLUS 
%nonassoc IFX
%nonassoc ELSE
%%
Result:Program
    {
        root = new RootASTNode();
        root->add_child_node($1);
        root->print_tree(root, 0);
    }
    ;
Program:RETYPE MAIN LB RB Block 
    {
        DefFunASTNode* temp = new DefFunASTNode($2, NULL, NULL);
        temp->setFunBody($5);
        temp->setRevType($1);
        $$ = temp;
    }
    ;
RETYPE:VOID 
    {
        $$ = strdup($1);
    }
    |TYPE 
    {
        $$ = strdup($1);
    }
    ;
Block:BLB Stmts BRB 
    {
        AST* compStmt = new StmtASTNode(StmtType::compStmt);
        compStmt->add_child_node($2);
        $$ = compStmt;
    }
    ;
Block_Stmt:Block 
    {
        $$ = $1;
    }
    |Stmt 
    {
        $$ = $1;
    }
    ;
Stmts:Stmts Stmt 
    {
        if ($1 == NULL) $$ = $2;
        else {
            $1->get_last_peer_node()->add_peer_node($2);
        }
    }
    | 
    {
        $$ = NULL;
    }
    ;
Stmt:IF LB Bool_expr RB Block_Stmt %prec IFX 
    {
        $$ = new SelectASTNode((char*)"", SelectType::_if, $5, $3);
    }
    |IF LB Bool_expr RB Block_Stmt ELSE Block_Stmt 
    {
        $$ = new SelectASTNode((char*)"", SelectType::_if, $5, $3, $7);
    }
    |RETURN Expr SEM 
    {
        AST* temp = new StmtASTNode(StmtType::returnStmt);
        temp->add_child_node($2);
        $$ = temp;
    }
    |WHILE LB Bool_expr RB Block_Stmt 
    {
        $$ = new LoopASTNode((char*)"", LoopType::_while, $5, $3, true);
    }
    |DO Block WHILE LB Bool_expr RB SEM 
    {
        $$ = new LoopASTNode((char*)"", LoopType::_while, $2, $5, true);
    }
    |FOR LB For_First SEM For_Second SEM For_Third RB Block_Stmt 
    {
        $$ = new LoopASTNode((char*)"", LoopType::_for, $9, $3, $5, $7);
    }
    |Declaration_stmt 
    {
        $$ = $1;
    }
    |Assignment_Stmt 
    {
        $$ = $1;
    }
    |ID LB Expr RB SEM
    {
        $$ = new CallFunASTNode($1, $3);
    }
    |ID LB ID RB SEM 
    {
        $$ = new CallFunASTNode($1, $3);
    }
    ;
Assignment_Stmt:Declarator EQ Expr SEM 
    {
        $1->add_child_node($3);
        $$ = $1;
    }
    ;
Assignment_list:Initializer 
    {
        $$ = $1;
    }
    |Assignment_list COMMA Initializer 
    {
        $1->get_last_peer_node()->add_peer_node($3);
        $$ = $1;
    }
;
direct_declarator:ID 
    {
        $$ = new DefVarASTNode($1);
    }
    |direct_declarator MLB MRB 
    {
        DefVarASTNode* var = new DefVarASTNode((char*)$1);
        var->set_type((char*)("array"));
        var->set_array_length(NULL);
        $$ = var;
    }
    |direct_declarator MLB NUMBER MRB 
    {
        DefVarASTNode* var = new DefVarASTNode((char*)$1);
        var->set_type((char*)("array"));
        var->set_array_length($3);
        $$ = var;
    }
    ;
Declarator:STAR direct_declarator
    {
        AST* op = new OperatorASTNode((char*)"*", opType::GetValue);
        AST* var = new DefVarASTNode((char*)$2);
        op->add_child_node(var);
        $$ = op;
    }
    |direct_declarator
    {
        $$ = $1;
    }
    ;
Initial_declaration_list:Init_declarator 
    {
        $$ = $1;
    }
    |Initial_declaration_list COMMA Init_declarator 
    {
        $1->get_last_peer_node()->add_peer_node($3);
        $$ = $1;
    }
    ;
Init_declarator:Declarator
    {
        $$ = $1;
    }
    |Initializer 
    {
        $$ = $1;
    }
    ;
Initializer:Declarator EQ Expr 
    {
        $1->add_child_node($3);
        $$ = $1;
    }
    ;
Declaration_stmt:TYPE Initial_declaration_list SEM 
    {
        DefVarASTNode* temp = (DefVarASTNode*)$2;
        temp->set_type($1);
        $$ = temp;
    }
    ;
For_First:TYPE Assignment_list 
    {
        DefVarASTNode* temp = (DefVarASTNode*)$2;
        $1 = strdup($1);
        temp->set_type($1);
        $$ = temp;
    }
    |Assignment_list
    {
        $$ = $1;
    }
    | 
    {
        $$ = NULL;
    }
    ;
For_Second:Bool_expr 
    {
        $$ = $1;
    }
    | 
    {
        $$ = NULL;
    }
    ;
For_Third:Assignment_list 
    {
        $$ = $1;
    }
    | 
    {
        $$ = NULL;
    }
    ;
logical_and_expr:Bool 
    {
        $$ = $1;
    }
    |logical_and_expr AND Bool 
    {
        AST* temp = new OperatorASTNode((char*)"&&", opType::And);
        temp->add_child_node($1);
        $1->add_peer_node($3);
        $$ = temp;
    }
    ;
logical_or_expr:logical_and_expr 
    {
        $$ = $1;
    }
    |logical_or_expr OR logical_and_expr 
    {
        AST* temp = new OperatorASTNode((char*)"||", opType::Or);
        temp->add_child_node($1);
        $1->add_peer_node($3);
        $$ = temp;
    }
    ;
Bool_expr:logical_or_expr 
    {
        $$ = $1;
    }
    ;
Bool:Expr LT Expr
    {
        AST* temp = new OperatorASTNode($2, opType::Relop);
        temp->add_child_node($1);
        $1->add_peer_node($3);
        $$ = temp;
    }
    |Expr LE Expr 
    {
        AST* temp = new OperatorASTNode($2, opType::Relop);
        temp->add_child_node($1);
        $1->add_peer_node($3);
        $$ = temp;
    }
    |Expr GT Expr 
    {
        AST* temp = new OperatorASTNode($2, opType::Relop);
        temp->add_child_node($1);
        $1->add_peer_node($3);
        $$ = temp;
    }
    |Expr GE Expr 
    {
        AST* temp = new OperatorASTNode($2, opType::Relop);
        temp->add_child_node($1);
        $1->add_peer_node($3);
        $$ = temp;
    }
    |Expr EQUEL Expr
    {
        AST* temp = new OperatorASTNode($2, opType::Relop);
        temp->add_child_node($1);
        $1->add_peer_node($3);
        $$ = temp;
    }
    |Expr NE Expr 
    {
        AST* temp = new OperatorASTNode($2, opType::Relop);
        temp->add_child_node($1);
        $1->add_peer_node($3);
        $$ = temp;
    }
    |Expr 
    {
        $$ = $1;
    }
    ;
unary_expr:Factor 
    {
        $$ = $1;
    }
	| unary_operator unary_expr 
    {
        AST* temp = $1;
        temp->add_child_node($2);
        $$ = temp;
    }
	;
unary_operator:ADD %prec UPLUS 
    {
        AST* temp = new OperatorASTNode((char*)"+", opType::Orgative);
        $$ = temp;
    }
	|DEC %prec UMINUS 
    {
        AST* temp = new OperatorASTNode((char*)"-", opType::Negative);
        $$ = temp;
    }
    |NOT 
    {
        AST* temp = new OperatorASTNode((char*)"!", opType::Not);
        $$ = temp;
    }
    |SINGNALAND 
    {
        AST* temp = new OperatorASTNode((char*)"&", opType::SingalAnd);
        $$ = temp;
    }
    |STAR 
    {
        AST* temp = new OperatorASTNode((char*)"*", opType::GetValue);
        $$ = temp;
    }
	;
Expr:Expr ADD Term 
    {
        AST* temp = new OperatorASTNode((char*)"+", opType::Plus);
        temp->add_child_node($1);
        $1->add_peer_node($3);
        $$ = temp;
    }
    |Expr DEC Term 
    {
        AST* temp = new OperatorASTNode((char*)"-", opType::Minus);
        temp->add_child_node($1);
        $1->add_peer_node($3);
        $$ = temp;
    }
    |Term 
    {
        $$ = $1;
    }
    ;
Term:Term STAR unary_expr 
    {
        AST* temp = new OperatorASTNode((char*)"*", opType::Times);
        temp->add_child_node($1);
        $1->add_peer_node($3);
        $$ = temp;
    }
    |Term DIV unary_expr 
    {
        AST* temp = new OperatorASTNode((char*)"/", opType::Div);
        temp->add_child_node($1);
        $1->add_peer_node($3);
        $$ = temp;
    }
    |Term MOD unary_expr 
    {
        AST* temp = new OperatorASTNode((char*)"%", opType::Mod);
        temp->add_child_node($1);
        $1->add_peer_node($3);
        $$ = temp;
    }
    |POW 
    {
        $$ = $1;
    }
    ;
POW:unary_expr 
    {
        $$ = $1;
    }
    | POW EXP unary_expr 
    {
        AST* temp = new OperatorASTNode((char*)"^", opType::Power);
        temp->add_child_node($1);
        $1->add_peer_node($3);
        $$ = temp;
    }
    ;
Factor:LB Expr RB 
    {
        $$ = $2;
    }
    |Declarator 
    {
        $$ = $1;
    }
    |NUMBER 
    {
        $$ = new LiteralASTNode($1);
    }
    ;
%%

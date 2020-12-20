%{
#include<unistd.h>
#include<stdio.h>   
#include "test.h"
%}

%union{
struct ast* a;
}
/*declare tokens*/
%token <a> LT LE GT GE EQ ADD DEC STAR DIV SEM LB RB MLB MRB BLB BRB COMMA ID NUMBER delim whitespace Func_print Func_scan
EQUEL MOD EXP NE AND OR NOT WHILE DO IF THEN ELSE FOR NEWLINE ERRORCHAR VOID MAIN TYPE RETURN IFX SINGNALAND
%type  <a> Program Block Stmts Stmt Initializer Declaration_stmt Bool Expr Term Factor RETYPE Block_Stmt Assignment_list
For_First For_Second For_Third Assignment_Stmt Init_declarator Initial_declaration_list direct_declarator Declarator
unary_expr unary_operator POW Bool_expr logical_and_expr logical_or_expr Self_add Self_dec
/*priority*/
%right EQ
%left OR
%left AND
%left LT LE GT GE EQUEL NE
%left DEC ADD
%left DIV STAR MOD
%left EXP
%right NOT 
%left LB RB BLB BRB
%nonassoc UMINUS UPLUS 
%nonassoc IFX
%nonassoc ELSE
%%
Program:RETYPE MAIN LB RB Block {$$=newast("Program",5,$1,$2,$3,$4,$5);check($$);printf("\n打印syntax tree:\n");eval($$,0);printf("syntax tree打印完毕!\n\n");}
    ;
RETYPE:VOID {$$=newast("RETYPE",1,$1);printf("规约 RETYPE\n");}
    |TYPE {$$=newast("RETYPE",1,$1);printf("规约 RETYPE\n");}
    ;
Block:BLB Stmts BRB {$$=newast("Block",3,$1,$2,$3);printf("规约 block\n");}
    ;
Block_Stmt:Block {$$=newast("Block_Stmt",1,$1);printf("规约 Block_Stmt\n");}
    |Stmt {$$=newast("Block_Stmt",1,$1);printf("规约 Block_Stmt\n");}
    ;
Stmts:Stmt Stmts {$$=newast("Stmts",2,$1,$2);printf("规约 Stmts\n");}
    | {$$=newast("Stmts",0,-1);printf("规约 Stmts\n");}
    ;
Stmt:IF LB Bool_expr RB Block_Stmt %prec IFX {$$=newast("Stmt",5,$1,$2,$3,$4,$5);printf("规约 Stmt\n");}
    |IF LB Bool_expr RB Block_Stmt ELSE Block_Stmt {$$=newast("Stmt",7,$1,$2,$3,$4,$5,$6,$7);printf("规约 Stmt\n");}
    |RETURN Expr SEM {$$=newast("Stmt",3,$1,$2,$3);printf("规约 Stmt\n");}
    |WHILE LB Bool_expr RB Block_Stmt {$$=newast("Stmt",5,$1,$2,$3,$4,$5);printf("规约 Stmt\n");}
    |DO Block WHILE LB Bool_expr RB SEM {$$=newast("Stmt",7,$1,$2,$3,$4,$5,$6,$7);printf("规约 Stmt\n");}
    |FOR LB For_First SEM For_Second SEM For_Third RB Block_Stmt {$$=newast("Stmt",9,$1,$2,$3,$4,$5,$6,$7,$8,$9);printf("规约 Stmt\n");}
    |Declaration_stmt {$$=newast("Stmt",1,$1);printf("规约 Stmt\n");}
    |Assignment_Stmt {$$=newast("Stmt",1,$1);printf("规约 Stmt\n");}
    |Func_print LB Expr RB SEM {$$=newast("Stmt",5,$1,$2,$3,$4,$5);printf("规约 Stmt\n");}
    |Func_scan LB ID RB SEM {$$=newast("Stmt",5,$1,$2,$3,$4,$5);printf("规约 Stmt\n");}
    |Self_add SEM {$$=newast("Stmt",1,$1);printf("规约 Stmt\n");}
    |Self_dec SEM {$$=newast("Stmt",1,$1);printf("规约 Stmt\n");}
    ;
Self_add:ID ADD ADD {$$=newast("Self_add",3,$1,$2,$3);printf("规约 Self_add\n");}
    ;
Self_dec:ID DEC DEC {$$=newast("Self_dec",3,$1,$2,$3);printf("规约 Self_dec\n");}
    ;
Assignment_Stmt:Declarator EQ Expr SEM {$$=newast("Assignment_Stmt",4,$1,$2,$3,$4);printf("规约 Assignment_Stmt\n");}
    ;
Assignment_list:Initializer {$$=newast("Assignment_list",1,$1);printf("规约 Assignment_list\n");}
    |Assignment_list COMMA Initializer {$$=newast("Assignment_list",3,$1,$2,$3);printf("规约 Assignment_list\n");}
;
direct_declarator:ID {$$=newast("direct_declarator",1,$1);printf("规约 direct_declarator\n");}
    |direct_declarator MLB MRB {$$=newast("direct_declarator",3,$1,$2,$3);printf("规约 direct_declarator\n");}
    |direct_declarator MLB NUMBER MRB {$$=newast("direct_declarator",4,$1,$2,$3,$4);printf("规约 direct_declarator\n");}
    ;
Declarator:STAR direct_declarator {$$=newast("Declarator",2,$1,$2);printf("规约 Declarator\n");}
    |direct_declarator {$$=newast("Declarator",1,$1);printf("规约 Declarator\n");}
    ;
Initial_declaration_list:Init_declarator {$$=newast("Initial_declaration_list",1,$1);printf("规约 Initial_declaration_list\n");}
    |Initial_declaration_list COMMA Init_declarator {$$=newast("Initial_declaration_list",3,$1,$2,$3);printf("规约 Initial_declaration_list\n");}
    ;
Init_declarator:Declarator {$$=newast("Init_declarator",1,$1);printf("规约 Init_declarator\n");}
    |Initializer {$$=newast("Init_declarator",1,$1);printf("规约 Init_declarator\n");}
    ;
Initializer:Declarator EQ Expr {$$=newast("Initializer",3,$1,$2,$3);printf("规约 Initializer\n");}
    |Self_add {$$=newast("Initializer",1,$1);printf("规约 Initializer\n");}
    |Self_dec {$$=newast("Initializer",1,$1);printf("规约 Initializer\n");}
    ;
Declaration_stmt:TYPE Initial_declaration_list SEM {$$=newast("Declaration_stmt",3,$1,$2,$3);printf("规约 Declaration_stmt\n");}
    ;
For_First:TYPE Assignment_list {$$=newast("For_First",2,$1,$2);printf("规约 For_First\n");}
    |Assignment_list {$$=newast("For_First",1,$1);printf("规约 For_First\n");}
    | {$$=newast("For_First",0,-1);printf("规约 For_First\n");}
    ;
For_Second:Bool_expr {$$=newast("For_Second",1,$1);printf("规约 For_Second\n");}
    | {$$=newast("For_Second",0,-1);printf("规约 For_Second\n");}
    ;
For_Third:Assignment_list {$$=newast("For_Third",1,$1);printf("规约 For_Third\n");}
    | {$$=newast("For_Third",0,-1);printf("规约 For_Third\n");}
    ;
logical_and_expr:Bool {$$=newast("logical_and_expr",1,$1);printf("规约 logical_and_expr\n");}
    |logical_and_expr AND Bool {$$=newast("logical_and_expr",3,$1,$2,$3);printf("规约 logical_and_expr\n");}
    ;
logical_or_expr:logical_and_expr {$$=newast("logical_or_expr",1,$1);printf("规约 logical_or_expr\n");}
    |logical_or_expr OR logical_and_expr {$$=newast("logical_or_expr",3,$1,$2,$3);printf("规约 logical_or_expr\n");}
    ;
Bool_expr:logical_or_expr {$$=newast("Bool_expr",1,$1);printf("规约 Bool_expr\n");}
    ;
Bool:Expr LT Expr {$$=newast("Bool",3,$1,$2,$3);printf("规约 Bool\n");}
    |Expr LE Expr {$$=newast("Bool",3,$1,$2,$3);printf("规约 Bool\n");}
    |Expr GT Expr {$$=newast("Bool",3,$1,$2,$3);printf("规约 Bool\n");}
    |Expr GE Expr {$$=newast("Bool",3,$1,$2,$3);printf("规约 Bool\n");}
    |Expr EQUEL Expr {$$=newast("Bool",3,$1,$2,$3);printf("规约 Bool\n");}
    |Expr NE Expr {$$=newast("Bool",3,$1,$2,$3);printf("规约 Bool\n");}
    |Expr {$$=newast("Bool",1,$1);printf("规约 Bool\n");}
    ;
unary_expr:Factor {$$=newast("unary_expr",1,$1);printf("规约 unary_expr\n");}
	| unary_operator unary_expr {$$=newast("unary_expr",2,$1,$2);printf("规约 unary_expr\n");}
	;
unary_operator:ADD %prec UPLUS {$$=newast("unary_operator",1,$1);printf("规约 unary_operator\n");}
	|DEC %prec UMINUS {$$=newast("unary_operator",1,$1);printf("规约 unary_operator\n");}
    |NOT {$$=newast("unary_operator",1,$1);printf("规约 unary_operator\n");}
    |SINGNALAND {$$=newast("unary_operator",1,$1);printf("规约 unary_operator\n");}
    |STAR {$$=newast("unary_operator",1,$1);printf("规约 unary_operator\n");}
	;
Expr:Expr ADD Term {$$=newast("Expr",3,$1,$2,$3);printf("规约 Expr\n");}
    |Expr DEC Term {$$=newast("Expr",3,$1,$2,$3);printf("规约 Expr\n");}
    |Term {$$=newast("Expr",1,$1);printf("规约 Expr\n");}
    ;
Term:Term STAR unary_expr {$$=newast("Term",3,$1,$2,$3);printf("规约 Term\n");}
    |Term DIV unary_expr {$$=newast("Term",3,$1,$2,$3);printf("规约 Term\n");}
    |Term MOD unary_expr {$$=newast("Term",3,$1,$2,$3);printf("规约 Term\n");}
    |POW {$$=newast("Term",1,$1);printf("规约 Term\n");}
    ;
POW:unary_expr {$$=newast("POW",1,$1);printf("规约 POW\n");}
    | POW EXP unary_expr {$$=newast("POW",3,$1,$2,$3);printf("规约 POW\n");}
    ;
Factor:LB Expr RB {$$=newast("Factor",3,$1,$2,$3);printf("规约 Factor\n");}
    |Declarator {$$=newast("Factor",1,$1);printf("规约 Factor\n");}
    |NUMBER {$$=newast("Factor",1,$1);printf("规约 Factor\n");}
    ;
%%

%{
#include<unistd.h>
#include<stdio.h>   
#include "test.h"
%}

%union{
struct ast* a;
double d;
}
/*declare tokens*/
%token <a> LT LE GT GE EQ ADD DEC MUL DIV SEM LB RB BLB BRB COMMA ID NUMBER delim whitespace Func_print Func_scan
EQUEL MOD EXP NE AND OR NOT WHILE DO IF THEN ELSE FOR NEWLINE ERRORCHAR VOID MAIN TYPE RETURN IFX
%type  <a> Program Block Stmts Stmt Assignment_list Assignment Declaration_stmt Bool Expr Term Factor RETYPE Block_Stmt
Else_If Else_If_List For_First For_Second For_Third Assignment_Stmt Init_declarator Initial_declaration_list Self_add Self_dec
/*priority*/
%right EQ
%left OR
%left AND
%left LT LE GT GE EQUEL NE
%left DEC ADD
%left DIV MUL MOD
%left EXP
%right NOT 
%left LB RB BLB BRB
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
Else_If:ELSE IF LB Bool RB Block_Stmt {$$=newast("Else_If",6,$1,$2,$3,$4,$5,$6);printf("规约 Else_If\n");}
    ;
Else_If_List:Else_If_List Else_If{$$=newast("Else_If_List",2,$1,$2);printf("规约 Else_If_List\n");}
    |Else_If {$$=newast("Else_If_List",1,$1);printf("规约 Else_If_List\n");}
    ;
Stmt:IF LB Bool RB Block_Stmt ELSE Block_Stmt {$$=newast("Stmt",7,$1,$2,$3,$4,$5,$6,$7);printf("规约 Stmt\n");}
    |RETURN Expr SEM {$$=newast("Stmt",3,$1,$2,$3);printf("规约 Stmt\n");}
    |IF LB Bool RB Block_Stmt Else_If_List {$$=newast("Stmt",6,$1,$2,$3,$4,$5,$6);printf("规约 Stmt\n");}
    |IF LB Bool RB Block_Stmt Else_If_List ELSE Block_Stmt {$$=newast("Stmt",8,$1,$2,$3,$4,$5,$6,$7,$8);printf("规约 Stmt\n");}
    |IF LB Bool RB Block_Stmt %prec IFX {$$=newast("Stmt",5,$1,$2,$3,$4,$5);printf("规约 Stmt\n");}
    |WHILE LB Bool RB Block_Stmt {$$=newast("Stmt",5,$1,$2,$3,$4,$5);printf("规约 Stmt\n");}
    |DO Block WHILE LB Bool RB SEM {$$=newast("Stmt",7,$1,$2,$3,$4,$5,$6,$7);printf("规约 Stmt\n");}
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
Assignment_Stmt:ID EQ Expr SEM {$$=newast("Assignment_Stmt",4,$1,$2,$3,$4);printf("规约 Assignment_Stmt\n");}
    ;
Initial_declaration_list:Init_declarator {$$=newast("Initial_declaration_list",1,$1);printf("规约 Initial_declaration_list\n");}
    |Initial_declaration_list COMMA Init_declarator {$$=newast("Initial_declaration_list",3,$1,$2,$3);printf("规约 Initial_declaration_list\n");}
    ;
Init_declarator:ID {$$=newast("Init_declarator",1,$1);printf("规约 Init_declarator\n");}
    |Assignment {$$=newast("Init_declarator",1,$1);printf("规约 Init_declarator\n");}
    ;
Assignment_list:Assignment {$$=newast("Assignment_list",1,$1);printf("规约 Assignment_list\n");}
    |Assignment_list COMMA Assignment {$$=newast("Assignment_list",3,$1,$2,$3);printf("规约 Assignment_list\n");}
    ;
Assignment:ID EQ Expr {$$=newast("Assignment",3,$1,$2,$3);printf("规约 Assignment\n");}
    |Self_add {$$=newast("Assignment",1,$1);printf("规约 Assignment\n");}
    |Self_dec {$$=newast("Assignment",1,$1);printf("规约 Assignment\n");}
    ;
Declaration_stmt:TYPE Initial_declaration_list SEM {$$=newast("Declaration_stmt",3,$1,$2,$3);printf("规约 Declaration_stmt\n");}
    |TYPE Assignment_list SEM {$$=newast("Declaration_stmt",3,$1,$2,$3);printf("规约 Declaration_stmt\n");}
    ;
For_First:TYPE Assignment_list {$$=newast("For_First",2,$1,$2);printf("规约 For_First\n");}
    |Assignment_list {$$=newast("For_First",1,$1);printf("规约 For_First\n");}
    | {$$=newast("For_First",0,-1);printf("规约 For_First\n");}
    ;
For_Second:Bool {$$=newast("For_Second",1,$1);printf("规约 For_Second\n");}
    | {$$=newast("For_Second",0,-1);printf("规约 For_Second\n");}
    ;
For_Third:Assignment_list {$$=newast("For_Third",1,$1);printf("规约 For_Third\n");}
    | {$$=newast("For_Third",0,-1);printf("规约 For_Third\n");}
    ;
Bool:Expr LT Expr {$$=newast("Bool",3,$1,$2,$3);printf("规约 Bool\n");}
    |Expr LE Expr {$$=newast("Bool",3,$1,$2,$3);printf("规约 Bool\n");}
    |Expr GT Expr {$$=newast("Bool",3,$1,$2,$3);printf("规约 Bool\n");}
    |Expr GE Expr {$$=newast("Bool",3,$1,$2,$3);printf("规约 Bool\n");}
    |Expr EQUEL Expr {$$=newast("Bool",3,$1,$2,$3);printf("规约 Bool\n");}
    |Expr {$$=newast("Bool",1,$1);printf("规约 Bool\n");}
    ;
Expr:Expr ADD Term {$$=newast("Expr",3,$1,$2,$3);printf("规约 Expr\n");}
    |Expr DEC Term {$$=newast("Expr",3,$1,$2,$3);printf("规约 Expr\n");}
    |Term {$$=newast("Expr",1,$1);printf("规约 Expr\n");}
    ;
Term:Term MUL Factor {$$=newast("Term",3,$1,$2,$3);printf("规约 Term\n");}
    |Term DIV Factor {$$=newast("Term",3,$1,$2,$3);printf("规约 Term\n");}
    |Factor {$$=newast("Term",1,$1);printf("规约 Term\n");}
    ;
Factor:LB Expr RB {$$=newast("Factor",3,$1,$2,$3);printf("规约 Factor\n");}
    |ID {$$=newast("Factor",1,$1);printf("规约 Factor\n");}
    |NUMBER {$$=newast("Factor",1,$1);printf("规约 Factor\n");}
    |DEC NUMBER {$$=newast("Factor",2,$1,$2);printf("规约 Factor\n");}
    ;
%%

%{
#include "stdio.h"
#include "stdlib.h"
# include "test.h"
#include "test.tab.h"
%}
%option yylineno
LT <
LE <=
GT >
GE >=
EQUEL ==
EQ =
ADD \+
DEC -
STAR \*
DIV \/
SEM ;
LB \(
RB \)
MLB \[
MRB \]
BLB \{
BRB \}
MOD %
EXP \^
NE !=
AND &&
OR \|\|
NOT !
SINGNALAND &
WHILE while
DO do
IF if
Func_print print_int
Func_scan scan_int
THEN then
ELSE else
RETURN return
FOR for
NEWLINE \n
ERRORCHAR .
COMMA ,
VOID void
MAIN main
TYPE int
delim   [ \t\n]
whitespace  {delim}+
digit   [0-9]
letter  [A-Za-z_]
ID  {letter}({letter}|{digit})*
NUMBER {digit}+
tips  [/][\*]([^\*]|([\*])*[^\*/])*([\*])*[\*][/]
single_tips [/][/]([^a]|[a])*[\n]

%%
{NEWLINE} {}
{whitespace} {;}
{tips} {;}
{single_tips} {;}
{COMMA} {yylval.a=newast("COMMA",0,yylineno);return COMMA;}
{WHILE} {yylval.a=newast("WHILE",0,yylineno);return WHILE;}
{DO} {yylval.a=newast("DO",0,yylineno);return DO;}
{Func_print} {yylval.a=newast("Func_print",0,yylineno);return Func_print;}
{Func_scan} {yylval.a=newast("Func_scan",0,yylineno);return Func_scan;}
{IF} {yylval.a=newast("IF",0,yylineno);return IF;}
{THEN} {yylval.a=newast("THEN",0,yylineno);return THEN;}
{ELSE} {yylval.a=newast("ELSE",0,yylineno);return ELSE;}
{FOR} {yylval.a=newast("FOR",0,yylineno);return FOR;}
{VOID} {yylval.a=newast("VOID",0,yylineno);return VOID;}
{MAIN} {yylval.a=newast("MAIN",0,yylineno);return MAIN;}
int {yylval.a=newast("TYPE",0,yylineno);return TYPE;}
{NUMBER} {yylval.a=newast("NUMBER",0,yylineno);return NUMBER;}
{RETURN} {yylval.a=newast("RETURN",0,yylineno);return RETURN;}
{LT} {yylval.a=newast("LT",0,yylineno);return LT;}
{LE} {yylval.a=newast("LE",0,yylineno);return LE;}
{GT} {yylval.a=newast("GT",0,yylineno);return GT;}
{GE} {yylval.a=newast("GE",0,yylineno);return GE;}
{EQUEL} {yylval.a=newast("EQUEL",0,yylineno);return EQUEL;}
{EQ} {yylval.a=newast("EQ",0,yylineno);return EQ;}
{ADD} {yylval.a=newast("ADD",0,yylineno);return ADD;}
{DEC} {yylval.a=newast("DEC",0,yylineno);return DEC;}
{STAR} {yylval.a=newast("STAR",0,yylineno);return STAR;}
{DIV} {yylval.a=newast("DIV",0,yylineno);return DIV;}
{SEM} {yylval.a=newast("SEM",0,yylineno);return SEM;}
{LB} {yylval.a=newast("LB",0,yylineno);return LB;}
{RB} {yylval.a=newast("RB",0,yylineno);return RB;}
{MLB} {yylval.a=newast("MLB",0,yylineno);return MLB;}
{MRB} {yylval.a=newast("MRB",0,yylineno);return MRB;}
{BLB} {yylval.a=newast("BLB",0,yylineno);return BLB;}
{BRB} {yylval.a=newast("BRB",0,yylineno);return BRB;}
{MOD} {yylval.a=newast("MOD",0,yylineno);return MOD;}
{EXP} {yylval.a=newast("EXP",0,yylineno);return EXP;}
{NE} {yylval.a=newast("NE",0,yylineno);return NE;}
{AND} {yylval.a=newast("AND",0,yylineno);return AND;}
{OR} {yylval.a=newast("OR",0,yylineno);return OR;}
{NOT} {yylval.a=newast("NOT",0,yylineno);return NOT;}
{SINGNALAND} {yylval.a=newast("SINGNALAND",0,yylineno);return SINGNALAND;}
{ID} {yylval.a=newast("ID",0,yylineno);return ID;}
{ERRORCHAR} {printf("Error type A at line %d: Mystirious charachter '%s'\n",yylineno,yytext);}

%%
int yywrap(){    
    return 1;
}
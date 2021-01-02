%x COMMENT
%{
#include "stdio.h"
#include "stdlib.h"
# include "AST.h"
#include "yacc.tab.h"
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
ws    {delim}+
PRINT print_int

%%
"/*"           { BEGIN(COMMENT) ; }
<COMMENT>"*/"  { BEGIN(INITIAL); }
<COMMENT>{ws}   {printf("inside commenet ws\n");}
<COMMENT>([^*]|\en)+|.
<COMMENT><<EOF>>    {printf("Unterminated comment\n"); return 0;}
\/\/.*$  {}
{NEWLINE} {}
{whitespace} {;}
{COMMA} {return COMMA;}
{WHILE} {return WHILE;}
{DO} {return DO;}
{IF} {return IF;}
{THEN} {return THEN;}
{ELSE} {return ELSE;}
{FOR} {return FOR;}
print_int {return PRINT;}
{VOID} {yylval.str=strdup(yytext);return VOID;}
{MAIN} {yylval.str=strdup(yytext);return MAIN;}
int { yylval.str=strdup(yytext); return(TYPE);}
{NUMBER} {yylval.str=strdup(yytext);return NUMBER;}
{RETURN} {return RETURN;}
{LT} {yylval.str=strdup(yytext);return LT;}
{LE} {yylval.str=strdup(yytext);return LE;}
{GT} {yylval.str=strdup(yytext);return GT;}
{GE} {yylval.str=strdup(yytext);return GE;}
{EQUEL} {yylval.str=strdup(yytext);return EQUEL;}
{EQ} {return EQ;}
{ADD} {return ADD;}
{DEC} {return DEC;}
{STAR} {return STAR;}
{DIV} {return DIV;}
{SEM} {return SEM;}
{LB} {return LB;}
{RB} {return RB;}
{MLB} {return MLB;}
{MRB} {return MRB;}
{BLB} {return BLB;}
{BRB} {return BRB;}
{MOD} {return MOD;}
{EXP} {return EXP;}
{NE} {yylval.str=strdup(yytext);return NE;}
{AND} {return AND;}
{OR} {return OR;}
{NOT} {return NOT;}
{SINGNALAND} {return SINGNALAND;}
{ID} {yylval.str=strdup(yytext);return ID;}
{ERRORCHAR} {printf("Error type A at line %d: Mystirious charachter '%s'\n",yylineno,yytext);}

%%
int yywrap(){    
    return 1;
}

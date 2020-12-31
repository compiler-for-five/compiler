/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 1 "yacc.y"

#include<unistd.h>
#include<stdio.h>   
#include <stdlib.h>
#include <stdarg.h>
#include "AST.h"
#include "symbol.h"
#include <string.h>
#include "InterMediate.h"
#include "AsmGenerator.h"
int yyerror(char *s);
int yylex();
extern FILE * yyin;
extern int yyparse(void);
AST* root;
#line 18 "yacc.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
struct AST* a;
char* str;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 49 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define SEM 257
#define COMMA 258
#define delim 259
#define whitespace 260
#define WHILE 261
#define DO 262
#define IF 263
#define THEN 264
#define ELSE 265
#define FOR 266
#define NEWLINE 267
#define ERRORCHAR 268
#define RETURN 269
#define IFX 270
#define SINGNALAND 271
#define TYPE 272
#define VOID 273
#define ID 274
#define NUMBER 275
#define MAIN 276
#define EQ 277
#define OR 278
#define AND 279
#define LT 280
#define LE 281
#define GT 282
#define GE 283
#define EQUEL 284
#define NE 285
#define DEC 286
#define ADD 287
#define DIV 288
#define STAR 289
#define MOD 290
#define EXP 291
#define NOT 292
#define LB 293
#define RB 294
#define MLB 295
#define MRB 296
#define BLB 297
#define BRB 298
#define UMINUS 299
#define UPLUS 300
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    2,    1,    1,    3,   12,   12,    4,    4,    5,
    5,    5,    5,    5,    5,    5,    5,    5,    5,   16,
   19,   19,   19,   19,   18,   18,   17,   17,    6,    7,
   13,   13,   13,   13,   14,   14,   15,   15,   24,   24,
   25,   25,   23,    8,    8,    8,    8,    8,    8,    8,
   20,   20,   21,   21,   21,   21,   21,    9,    9,    9,
   10,   10,   10,   10,   22,   22,   11,   11,   11,   11,
};
static const YYINT yylen[] = {                            2,
    1,    5,    1,    1,    3,    1,    1,    2,    0,    5,
    7,    3,    5,    7,    9,    1,    1,    5,    5,    4,
    2,    1,    3,    4,    1,    3,    1,    1,    3,    3,
    1,    4,    3,    0,    1,    0,    3,    0,    1,    3,
    1,    3,    1,    3,    3,    3,    3,    3,    3,    1,
    1,    2,    1,    1,    1,    1,    1,    3,    3,    1,
    3,    3,    3,    1,    1,    3,    3,    1,    1,    4,
};
static const YYINT yydefred[] = {                         0,
    4,    3,    0,    0,    1,    0,    0,    0,    9,    2,
    0,    0,    0,    0,    0,    0,   56,    0,    0,   69,
   54,   53,   57,   55,    0,    5,    8,   16,    0,    0,
   51,   17,   65,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   28,   25,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   52,    0,   39,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   12,    0,
   21,   30,    0,    0,    0,    0,    0,   67,    0,    0,
    0,   62,   61,   63,   66,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   23,   26,    0,    0,    0,   70,   20,    0,    0,    0,
    0,    0,    0,    6,    7,   13,   40,    0,    0,    0,
    0,    0,    0,   35,   24,   19,   18,    0,    0,    0,
    0,   14,   11,    0,    0,    0,    0,    0,   15,
};
static const YYINT yydgoto[] = {                          3,
    4,    5,  114,   11,  115,   44,   28,   59,   60,   30,
   31,  116,   68,  123,  135,   32,   45,   46,   47,   33,
   34,   35,   61,   62,   63,
};
static const YYINT yysindex[] = {                       -64,
    0,    0,    0, -270,    0, -261, -243, -274,    0,    0,
 -245, -234, -274, -228, -221,   50,    0, -267, -222,    0,
    0,    0,    0,    0,   50,    0,    0,    0, -171, -278,
    0,    0,    0,   50, -205,   50, -150,   50,   42, -246,
 -226, -178, -155,    0,    0, -174, -153,   70,   50, -230,
   50,   50,   50,   50,   50,   50,    0,   50,    0,  -67,
 -167, -135, -117, -113, -116, -267, -165,  -73,    0, -271,
    0,    0, -267,   50, -106, -104, -173,    0, -183, -278,
 -278,    0,    0,    0,    0,   50,   50,   50,   50,   50,
   50,   18,   50,   50,   50,   18,  -85,   50,   50,  -75,
    0,    0,  -34,  -46,  -21,    0,    0,  -34,  -34,  -34,
  -34,  -34,  -34,    0,    0,    0,    0, -135,  -71,  -25,
   50,  -34,  -13,    0,    0,    0,    0,   -2,   18,  -34,
   50,    0,    0, -100,  -48,   50,   18,  -34,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -131,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -115,
    0,    0,    0,    0, -149,    0,    0,    0,    7, -189,
    0, -238,    0,    0,    0,    0,    1,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -224,
    0, -244, -248,    0,    0,    0,   16,    0,    0,    0,
    0,    0,    0,    0, -138,    0,    0,    0,    0,  -84,
  -53,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   21,    0,
    0,    0,    3,    0,    0,    0,    0, -212, -103,  -72,
  -22,   -8,   -3,    0,    0,    0,    0, -242,    0,  -24,
    0,   25,    0,    0,    0,    0,    0,    0,    0,   26,
   -9,    0,    0,    0,    0,    0,    0,   -6,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,   -5,    0,  283,    0,    0,  202,  -11,  214,
    0,  -94,    0,    0,    0,    0,  223,    0,  234,  243,
    0,    0,  -37,  208,    0,
};
#define YYTABLESIZE 363
static const YYINT yytable[] = {                         29,
   65,  120,   10,  100,   41,    6,   42,   37,   43,   54,
   55,   56,   41,   50,   42,   12,   13,   14,   22,   22,
   15,   43,    9,   16,  101,   17,   18,   67,   19,   20,
   69,    7,   50,   41,  133,   42,   76,   77,   22,   79,
   21,   22,  139,   23,   44,   43,   24,   25,   49,   41,
    8,   42,   26,   50,   50,   52,   53,  119,   36,   52,
   53,  124,  103,   78,   38,   44,   44,   68,   68,   50,
   48,   39,   49,  107,  108,  109,  110,  111,  112,  113,
   29,   44,   72,   73,   29,   58,  122,   68,   68,   68,
   68,   68,   68,   68,   68,   68,   68,   68,   68,   68,
   68,   68,   52,   53,   68,   51,   68,   64,   64,  130,
   64,   98,   52,   53,   52,   53,   70,   29,   71,  134,
   52,   53,  106,   74,  138,   29,   92,   64,   64,   64,
   64,   64,   64,   64,   64,   64,   64,   64,   64,   64,
   64,   60,   60,   93,   64,   68,   64,   68,   68,   68,
   68,   68,   68,   45,   68,   68,   68,   68,   68,   68,
   94,   60,   60,   60,   60,   60,   60,   60,   60,   60,
   60,   60,   59,   59,   45,   45,  136,   96,   60,   95,
   60,   52,   53,   99,   46,   52,   53,  104,   49,  105,
   45,  121,   59,   59,   59,   59,   59,   59,   59,   59,
   59,   59,   59,   58,   58,   46,   46,    1,    2,   59,
  126,   59,   86,   87,   88,   89,   90,   91,   52,   53,
  125,   46,  128,   58,   58,   58,   58,   58,   58,   58,
   58,   58,   58,   58,   47,  127,   10,   10,   10,  129,
   58,   10,   58,  131,   10,  137,   10,   10,   48,   10,
   10,   52,   53,   49,  132,   47,   47,   27,   27,   29,
   29,   10,   10,   34,   10,   80,   81,   10,   10,   48,
   48,   47,   31,   10,   49,   49,   57,   36,   12,   13,
   14,   33,   32,   15,   38,   48,   16,   37,   17,   18,
   49,   19,   20,   27,  117,  102,   82,   83,   84,   97,
   85,  118,    0,   21,   22,    0,   23,    0,    0,   24,
   25,    0,   17,   66,    9,   40,   20,    0,    0,    0,
   17,    0,    0,   40,   20,    0,    0,   21,   22,    0,
   23,    0,    0,   24,   25,   21,   22,    0,   23,    0,
   17,   24,   25,   75,   20,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   21,   22,    0,   23,    0,
    0,   24,   25,
};
static const YYINT yycheck[] = {                         11,
   38,   96,    8,  275,   16,  276,  274,   13,  257,  288,
  289,  290,  257,   25,  257,  261,  262,  263,  257,  258,
  266,  289,  297,  269,  296,  271,  272,   39,  274,  275,
  257,  293,  257,  278,  129,  278,   48,   49,  277,   51,
  286,  287,  137,  289,  257,  294,  292,  293,  295,  294,
  294,  294,  298,  278,  279,  286,  287,   95,  293,  286,
  287,   99,   74,  294,  293,  278,  279,  257,  258,  294,
  293,  293,  295,  257,   86,   87,   88,   89,   90,   91,
   92,  294,  257,  258,   96,  291,   98,  277,  278,  279,
  280,  281,  282,  283,  284,  285,  286,  287,  288,  289,
  290,  291,  286,  287,  294,  277,  296,  257,  258,  121,
  261,  277,  286,  287,  286,  287,  295,  129,  274,  131,
  286,  287,  296,  277,  136,  137,  294,  277,  278,  279,
  280,  281,  282,  283,  284,  285,  286,  287,  288,  289,
  290,  257,  258,  279,  294,  277,  296,  286,  287,  288,
  289,  290,  291,  257,  286,  287,  288,  289,  290,  291,
  278,  277,  278,  279,  280,  281,  282,  283,  284,  285,
  286,  287,  257,  258,  278,  279,  277,  294,  294,  293,
  296,  286,  287,  257,  257,  286,  287,  294,  295,  294,
  294,  277,  277,  278,  279,  280,  281,  282,  283,  284,
  285,  286,  287,  257,  258,  278,  279,  272,  273,  294,
  257,  296,  280,  281,  282,  283,  284,  285,  286,  287,
  296,  294,  294,  277,  278,  279,  280,  281,  282,  283,
  284,  285,  286,  287,  257,  257,  261,  262,  263,  265,
  294,  266,  296,  257,  269,  294,  271,  272,  257,  274,
  275,  286,  287,  257,  257,  278,  279,  257,  258,  257,
  258,  286,  287,  257,  289,   52,   53,  292,  293,  278,
  279,  294,  257,  298,  278,  279,   34,  257,  261,  262,
  263,  257,  257,  266,  294,  294,  269,  294,  271,  272,
  294,  274,  275,   11,   93,   73,   54,   55,   56,   66,
   58,   94,   -1,  286,  287,   -1,  289,   -1,   -1,  292,
  293,   -1,  271,  272,  297,  274,  275,   -1,   -1,   -1,
  271,   -1,   -1,  274,  275,   -1,   -1,  286,  287,   -1,
  289,   -1,   -1,  292,  293,  286,  287,   -1,  289,   -1,
  271,  292,  293,  274,  275,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  286,  287,   -1,  289,   -1,
   -1,  292,  293,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 300
#define YYUNDFTOKEN 328
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"SEM","COMMA","delim",
"whitespace","WHILE","DO","IF","THEN","ELSE","FOR","NEWLINE","ERRORCHAR",
"RETURN","IFX","SINGNALAND","TYPE","VOID","ID","NUMBER","MAIN","EQ","OR","AND",
"LT","LE","GT","GE","EQUEL","NE","DEC","ADD","DIV","STAR","MOD","EXP","NOT",
"LB","RB","MLB","MRB","BLB","BRB","UMINUS","UPLUS",0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : Result",
"Result : Program",
"Program : RETYPE MAIN LB RB Block",
"RETYPE : VOID",
"RETYPE : TYPE",
"Block : BLB Stmts BRB",
"Block_Stmt : Block",
"Block_Stmt : Stmt",
"Stmts : Stmts Stmt",
"Stmts :",
"Stmt : IF LB Bool_expr RB Block_Stmt",
"Stmt : IF LB Bool_expr RB Block_Stmt ELSE Block_Stmt",
"Stmt : RETURN Expr SEM",
"Stmt : WHILE LB Bool_expr RB Block_Stmt",
"Stmt : DO Block WHILE LB Bool_expr RB SEM",
"Stmt : FOR LB For_First SEM For_Second SEM For_Third RB Block_Stmt",
"Stmt : Declaration_stmt",
"Stmt : Assignment_Stmt",
"Stmt : ID LB Expr RB SEM",
"Stmt : ID LB ID RB SEM",
"Assignment_Stmt : Expr EQ Expr SEM",
"Declarator : STAR ID",
"Declarator : ID",
"Declarator : ID MLB MRB",
"Declarator : ID MLB NUMBER MRB",
"Initial_declaration_list : Init_declarator",
"Initial_declaration_list : Initial_declaration_list COMMA Init_declarator",
"Init_declarator : Declarator",
"Init_declarator : Initializer",
"Initializer : Declarator EQ Expr",
"Declaration_stmt : TYPE Initial_declaration_list SEM",
"For_First : Expr",
"For_First : TYPE Declarator EQ Expr",
"For_First : Expr EQ Expr",
"For_First :",
"For_Second : Bool_expr",
"For_Second :",
"For_Third : Expr EQ Expr",
"For_Third :",
"logical_and_expr : Bool",
"logical_and_expr : logical_and_expr AND Bool",
"logical_or_expr : logical_and_expr",
"logical_or_expr : logical_or_expr OR logical_and_expr",
"Bool_expr : logical_or_expr",
"Bool : Expr LT Expr",
"Bool : Expr LE Expr",
"Bool : Expr GT Expr",
"Bool : Expr GE Expr",
"Bool : Expr EQUEL Expr",
"Bool : Expr NE Expr",
"Bool : Expr",
"unary_expr : Factor",
"unary_expr : unary_operator unary_expr",
"unary_operator : ADD",
"unary_operator : DEC",
"unary_operator : NOT",
"unary_operator : SINGNALAND",
"unary_operator : STAR",
"Expr : Expr ADD Term",
"Expr : Expr DEC Term",
"Expr : Term",
"Term : Term STAR unary_expr",
"Term : Term DIV unary_expr",
"Term : Term MOD unary_expr",
"Term : POW",
"POW : unary_expr",
"POW : POW EXP unary_expr",
"Factor : LB Expr RB",
"Factor : ID",
"Factor : NUMBER",
"Factor : ID MLB Expr MRB",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 490 "yacc.y"

#line 417 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 45 "yacc.y"
	{
        root = new RootASTNode();
        root->add_child_node(yystack.l_mark[0].a);
        root->print_tree(root, 0);
        SymbolTable* symbolTable = new SymbolTable(NULL, true);
        /*table->printSymbolTable();*/
        /*SymbolTable* table = NULL;*/
        SymbolTable* table = symbolTable->buildSymbolTable(root);
        table->printSymbolTable();
        InterMediate* mediate = new InterMediate((RootASTNode*)root, table);  
        mediate->Generate(mediate->getRoot(), mediate->getTable());
        mediate->printQuads();
        AsmGenerator* asmgenerator = new AsmGenerator(mediate->getQuads(), mediate->getTempVars(), mediate->getTable());
        asmgenerator->generate();
        std::cout << asmgenerator->getAsmCode();


    }
break;
case 2:
#line 65 "yacc.y"
	{
        DefFunASTNode* temp = new DefFunASTNode(yystack.l_mark[-3].str, NULL, NULL);
        temp->setFunBody(yystack.l_mark[0].a);
        temp->setRevType(yystack.l_mark[-4].str);
        yyval.a = temp;
    }
break;
case 3:
#line 73 "yacc.y"
	{
        yyval.str = strdup(yystack.l_mark[0].str);
    }
break;
case 4:
#line 77 "yacc.y"
	{
        yyval.str = strdup(yystack.l_mark[0].str);
    }
break;
case 5:
#line 82 "yacc.y"
	{
        AST* compStmt = new StmtASTNode(StmtType::compStmt);
        compStmt->add_child_node(yystack.l_mark[-1].a);
        yyval.a = compStmt;
    }
break;
case 6:
#line 89 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 7:
#line 93 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 8:
#line 98 "yacc.y"
	{
        if (yystack.l_mark[-1].a == NULL) yyval.a = yystack.l_mark[0].a;
        else {
            yystack.l_mark[-1].a->get_last_peer_node()->add_peer_node(yystack.l_mark[0].a);
        }
    }
break;
case 9:
#line 105 "yacc.y"
	{
        yyval.a = NULL;
    }
break;
case 10:
#line 110 "yacc.y"
	{
        yyval.a = new SelectASTNode((char*)"", SelectType::_if, yystack.l_mark[0].a, yystack.l_mark[-2].a);
    }
break;
case 11:
#line 114 "yacc.y"
	{
        yyval.a = new SelectASTNode((char*)"", SelectType::_if, yystack.l_mark[-2].a, yystack.l_mark[-4].a, yystack.l_mark[0].a);
    }
break;
case 12:
#line 118 "yacc.y"
	{
        AST* temp = new StmtASTNode(StmtType::returnStmt);
        temp->add_child_node(yystack.l_mark[-1].a);
        yyval.a = temp;
    }
break;
case 13:
#line 124 "yacc.y"
	{
        yyval.a = new LoopASTNode((char*)"", LoopType::_while, yystack.l_mark[0].a, yystack.l_mark[-2].a, true);
    }
break;
case 14:
#line 128 "yacc.y"
	{
        yyval.a = new LoopASTNode((char*)"", LoopType::_while, yystack.l_mark[-5].a, yystack.l_mark[-2].a, true);
    }
break;
case 15:
#line 132 "yacc.y"
	{
        yyval.a = new LoopASTNode((char*)"", LoopType::_for, yystack.l_mark[0].a, yystack.l_mark[-6].a, yystack.l_mark[-4].a, yystack.l_mark[-2].a);
    }
break;
case 16:
#line 136 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 17:
#line 140 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 18:
#line 144 "yacc.y"
	{
        yyval.a = new CallFunASTNode(yystack.l_mark[-4].str, yystack.l_mark[-2].a);
    }
break;
case 19:
#line 148 "yacc.y"
	{
        yyval.a = new CallFunASTNode(yystack.l_mark[-4].str, yystack.l_mark[-2].str);
    }
break;
case 20:
#line 153 "yacc.y"
	{
        AST* temp = NULL;
        if (yystack.l_mark[-3].a->nodeType == ASTNodeType::op) {
            OperatorASTNode* left = (OperatorASTNode*)yystack.l_mark[-3].a;
            if (left->type == opType::GetArrayValue) {
                temp = new OperatorASTNode((char*)"=", opType::AssignArray);
            } else {
                temp = new OperatorASTNode((char*)"=", opType::Assignop);
            }
        }
        else {
            temp = new OperatorASTNode((char*)"=", opType::Assignop);
        }
        temp->add_child_node(yystack.l_mark[-3].a);
        yystack.l_mark[-3].a->add_peer_node(yystack.l_mark[-1].a);
        yystack.l_mark[-1].a->set_parent(temp);
        yyval.a = temp;
    }
break;
case 21:
#line 173 "yacc.y"
	{
        DefVarASTNode* var = new DefVarASTNode((char*)yystack.l_mark[0].str);
        var->set_type((char*)("integer pointer"));
        yyval.a = var;
    }
break;
case 22:
#line 179 "yacc.y"
	{
        yyval.a = new DefVarASTNode(yystack.l_mark[0].str);
    }
break;
case 23:
#line 183 "yacc.y"
	{
        DefVarASTNode* var = new DefVarASTNode((char*)yystack.l_mark[-2].str);
        var->set_type((char*)("array"));
        var->set_array_length(NULL);
        yyval.a = var;
    }
break;
case 24:
#line 190 "yacc.y"
	{
        DefVarASTNode* var = new DefVarASTNode((char*)yystack.l_mark[-3].str);
        var->set_type((char*)("array"));
        var->set_array_length(yystack.l_mark[-1].str);
        yyval.a = var;
    }
break;
case 25:
#line 198 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 26:
#line 202 "yacc.y"
	{
        yystack.l_mark[-2].a->get_last_peer_node()->add_peer_node(yystack.l_mark[0].a);
        yyval.a = yystack.l_mark[-2].a;
    }
break;
case 27:
#line 208 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 28:
#line 212 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 29:
#line 217 "yacc.y"
	{
        yystack.l_mark[-2].a->add_child_node(yystack.l_mark[0].a);
        yyval.a = yystack.l_mark[-2].a;
    }
break;
case 30:
#line 223 "yacc.y"
	{
        DefVarASTNode* temp = (DefVarASTNode*)yystack.l_mark[-1].a;
        if(temp->type == symbolType::unset)
            temp->set_type(yystack.l_mark[-2].str);
        yyval.a = temp;
    }
break;
case 31:
#line 231 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 32:
#line 235 "yacc.y"
	{
        DefVarASTNode* temp = (DefVarASTNode*)yystack.l_mark[-2].a;
        if(temp->type == symbolType::unset)
            temp->set_type(yystack.l_mark[-3].str);
        yystack.l_mark[-2].a->add_child_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 33:
#line 243 "yacc.y"
	{
        AST* temp = NULL;
        if (yystack.l_mark[-2].a->nodeType == ASTNodeType::op) {
            OperatorASTNode* left = (OperatorASTNode*)yystack.l_mark[-2].a;
            if (left->type == opType::GetArrayValue) {
                temp = new OperatorASTNode((char*)"=", opType::AssignArray);
            } else {
                temp = new OperatorASTNode((char*)"=", opType::Assignop);
            }
        }
        else {
            temp = new OperatorASTNode((char*)"=", opType::Assignop);
        }
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yystack.l_mark[0].a->set_parent(temp);
        yyval.a = temp;
    }
break;
case 34:
#line 262 "yacc.y"
	{
        yyval.a = NULL;
    }
break;
case 35:
#line 267 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 36:
#line 271 "yacc.y"
	{
        yyval.a = NULL;
    }
break;
case 37:
#line 276 "yacc.y"
	{
        AST* temp = NULL;
        if (yystack.l_mark[-2].a->nodeType == ASTNodeType::op) {
            OperatorASTNode* left = (OperatorASTNode*)yystack.l_mark[-2].a;
            if (left->type == opType::GetArrayValue) {
                temp = new OperatorASTNode((char*)"=", opType::AssignArray);
            } else {
                temp = new OperatorASTNode((char*)"=", opType::Assignop);
            }
        }
        else {
            temp = new OperatorASTNode((char*)"=", opType::Assignop);
        }
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yystack.l_mark[0].a->set_parent(temp);
        yyval.a = temp;
    }
break;
case 38:
#line 295 "yacc.y"
	{
        yyval.a = NULL;
    }
break;
case 39:
#line 300 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 40:
#line 304 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"&&", opType::And);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 41:
#line 312 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 42:
#line 316 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"||", opType::Or);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 43:
#line 324 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 44:
#line 329 "yacc.y"
	{
        AST* temp = new OperatorASTNode(yystack.l_mark[-1].str, opType::Relop);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 45:
#line 336 "yacc.y"
	{
        AST* temp = new OperatorASTNode(yystack.l_mark[-1].str, opType::Relop);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 46:
#line 343 "yacc.y"
	{
        AST* temp = new OperatorASTNode(yystack.l_mark[-1].str, opType::Relop);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 47:
#line 350 "yacc.y"
	{
        AST* temp = new OperatorASTNode(yystack.l_mark[-1].str, opType::Relop);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 48:
#line 357 "yacc.y"
	{
        AST* temp = new OperatorASTNode(yystack.l_mark[-1].str, opType::Relop);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 49:
#line 364 "yacc.y"
	{
        AST* temp = new OperatorASTNode(yystack.l_mark[-1].str, opType::Relop);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 50:
#line 371 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 51:
#line 376 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 52:
#line 380 "yacc.y"
	{
        AST* temp = yystack.l_mark[-1].a;
        temp->add_child_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 53:
#line 387 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"+", opType::Orgative);
        yyval.a = temp;
    }
break;
case 54:
#line 392 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"-", opType::Negative);
        yyval.a = temp;
    }
break;
case 55:
#line 397 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"!", opType::Not);
        yyval.a = temp;
    }
break;
case 56:
#line 402 "yacc.y"
	{
        AST* op = new OperatorASTNode((char*)"&", opType::SingalAnd);
        yyval.a = op;
    }
break;
case 57:
#line 407 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"*", opType::GetValue);
        yyval.a = temp;
    }
break;
case 58:
#line 413 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"+", opType::Plus);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 59:
#line 420 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"-", opType::Minus);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 60:
#line 427 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 61:
#line 432 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"*", opType::Times);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 62:
#line 439 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"/", opType::Div);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 63:
#line 446 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"%", opType::Mod);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 64:
#line 453 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 65:
#line 458 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 66:
#line 462 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"^", opType::Power);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 67:
#line 470 "yacc.y"
	{
        yyval.a = yystack.l_mark[-1].a;
    }
break;
case 68:
#line 474 "yacc.y"
	{
        yyval.a = new VarASTNode(yystack.l_mark[0].str);
    }
break;
case 69:
#line 478 "yacc.y"
	{
        yyval.a = new LiteralASTNode(yystack.l_mark[0].str);
    }
break;
case 70:
#line 482 "yacc.y"
	{
        AST* op = new OperatorASTNode((char*)"[]", opType::GetArrayValue);
        AST* var = new VarASTNode((char*)yystack.l_mark[-3].str);
        op->add_child_node(var);
        var->add_peer_node(yystack.l_mark[-1].a);
        yyval.a = op;
    }
break;
#line 1179 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}

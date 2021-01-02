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
#define PRINT 277
#define EQ 278
#define OR 279
#define AND 280
#define LT 281
#define LE 282
#define GT 283
#define GE 284
#define EQUEL 285
#define NE 286
#define DEC 287
#define ADD 288
#define DIV 289
#define STAR 290
#define MOD 291
#define EXP 292
#define NOT 293
#define LB 294
#define RB 295
#define MLB 296
#define MRB 297
#define BLB 298
#define BRB 299
#define UMINUS 300
#define UPLUS 301
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    2,    1,    1,    3,   12,   12,    4,    4,    5,
    5,    5,    5,    5,    5,    5,    5,    5,   16,   19,
   19,   19,   19,   18,   18,   17,   17,    6,    7,   13,
   13,   13,   13,   14,   14,   15,   15,   24,   24,   25,
   25,   23,    8,    8,    8,    8,    8,    8,    8,   20,
   20,   21,   21,   21,   21,   21,    9,    9,    9,   10,
   10,   10,   10,   22,   22,   11,   11,   11,   11,
};
static const YYINT yylen[] = {                            2,
    1,    5,    1,    1,    3,    1,    1,    2,    0,    5,
    7,    5,    3,    5,    7,    9,    1,    1,    4,    2,
    1,    3,    4,    1,    3,    1,    1,    3,    3,    1,
    4,    3,    0,    1,    0,    3,    0,    1,    3,    1,
    3,    1,    3,    3,    3,    3,    3,    3,    1,    1,
    2,    1,    1,    1,    1,    1,    3,    3,    1,    3,
    3,    3,    1,    1,    3,    3,    1,    1,    4,
};
static const YYINT yydefred[] = {                         0,
    4,    3,    0,    0,    1,    0,    0,    0,    9,    2,
    0,    0,    0,    0,    0,    0,   55,    0,    0,   68,
    0,   53,   52,   56,   54,    0,    5,    8,   17,    0,
    0,   50,   18,   64,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   27,   24,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   51,    0,   38,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   13,    0,
   20,   29,    0,    0,    0,    0,   66,    0,    0,    0,
   61,   60,   62,   65,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   22,
   25,    0,   69,    0,   19,    0,    0,    0,    0,    0,
    0,    6,    7,   14,   39,    0,    0,    0,    0,    0,
    0,   34,   23,   12,    0,    0,    0,    0,   15,   11,
    0,    0,    0,    0,    0,   16,
};
static const YYINT yydgoto[] = {                          3,
    4,    5,  112,   11,  113,   44,   29,   59,   60,   31,
   32,  114,   68,  121,  132,   33,   45,   46,   47,   34,
   35,   36,   61,   62,   63,
};
static const YYINT yysindex[] = {                      -255,
    0,    0,    0, -272,    0, -274, -265, -275,    0,    0,
  -54, -209, -275, -192, -180,   28,    0, -271, -178,    0,
 -170,    0,    0,    0,    0,   28,    0,    0,    0, -167,
 -221,    0,    0,    0,   28, -146,   28, -117,   28, -262,
 -249, -144, -120,    0,    0, -186, -122,   28, -115, -105,
   28,   28,   28,   28,   28,   28,    0,   28,    0,   47,
 -134, -100,  -91,  -89, -106, -271, -162,  -65,    0, -261,
    0,    0, -271,   28, -137,  -85,    0, -223, -221, -221,
    0,    0,    0,    0,   28,   28,   28,   28,   28,   28,
   19,   28,   28,   28,   19,  -64,   28,   28,  -81,    0,
    0, -205,    0,  -35,    0, -205, -205, -205, -205, -205,
 -205,    0,    0,    0,    0, -100,  -76,  -41,   28, -205,
  -31,    0,    0,    0,  -30,   19, -205,   28,    0,    0,
 -130,  -63,   28,   19, -205,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -191,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -148,    0,    0,    0,    0, -236,    0,    0,    0,  -27,
    0, -251,    0,    0,    0,    0, -145,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -222,
    0, -176, -233,    0,    0,    0,  -26,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -116,  -84,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -22,    0,    0,
    0,  -73,    0,    0,    0, -152, -104, -102,  -51,  -32,
  -19,    0,    0,    0,    0, -150,    0,  -20,    0,   -7,
    0,    0,    0,    0,    0,    0,   -4,  -58,    0,    0,
    0,    0,    0,    0,  -39,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,    3,    0,  247,    0,    0,  167,  -11,  134,
    0,  -93,    0,    0,    0,    0,  189,    0,  198,  269,
    0,    0,  -38,  172,    0,
};
#define YYTABLESIZE 335
static const YYINT yytable[] = {                         30,
   65,  118,   42,    6,   41,   21,   21,   69,   17,   66,
   10,   19,   20,   99,   50,   38,    1,    2,   43,    7,
   63,   63,    9,   42,   22,   23,   21,   24,   67,    8,
   25,   26,  130,  105,   49,  100,   75,   52,   53,   78,
  136,   63,   63,   63,   63,   63,   63,   63,   63,   63,
   63,   63,   63,   63,   63,  117,   49,   49,   63,  122,
   63,   42,  102,   52,   53,   67,   67,   54,   55,   56,
   72,   73,   49,  106,  107,  108,  109,  110,  111,   30,
   40,   52,   53,   30,   37,  120,   67,   67,   67,   67,
   67,   67,   67,   67,   67,   67,   67,   67,   67,   67,
   67,   39,   40,   67,   43,   67,   41,  127,   59,   59,
   51,   26,   26,   40,   30,   97,  131,   48,   40,   52,
   53,  135,   30,   49,   52,   53,   43,   43,   41,   59,
   59,   59,   59,   59,   59,   59,   59,   59,   59,   59,
   58,   58,   43,   64,   41,   58,   59,  133,   59,   52,
   53,   70,   44,   71,   45,   74,   52,   53,   76,  103,
   91,   58,   58,   58,   58,   58,   58,   58,   58,   58,
   58,   58,   57,   57,   44,   44,   45,   45,   58,   92,
   58,   52,   53,   28,   28,   79,   80,   93,   95,   77,
   44,   98,   45,   57,   57,   57,   57,   57,   57,   57,
   57,   57,   57,   57,   94,   46,   12,   13,   14,  104,
   57,   15,   57,  119,   16,  123,   17,   18,  125,   19,
   20,  124,   21,  126,   47,  128,  129,   46,   46,   33,
   30,  134,   22,   23,   35,   24,   37,   48,   25,   26,
   10,   10,   10,   46,   27,   10,   47,   47,   10,   32,
   10,   10,   31,   10,   10,   36,   10,   28,  115,   48,
   48,  101,   47,   96,  116,    0,   10,   10,    0,   10,
    0,    0,   10,   10,    0,   48,    0,    0,   10,   12,
   13,   14,    0,    0,   15,    0,    0,   16,    0,   17,
   18,    0,   19,   20,    0,   21,    0,    0,   17,    0,
    0,   19,   20,   57,    0,   22,   23,    0,   24,    0,
    0,   25,   26,    0,   22,   23,    9,   24,    0,    0,
   25,   26,   81,   82,   83,    0,   84,   85,   86,   87,
   88,   89,   90,   52,   53,
};
static const YYINT yycheck[] = {                         11,
   39,   95,  274,  276,   16,  257,  258,  257,  271,  272,
    8,  274,  275,  275,   26,   13,  272,  273,  290,  294,
  257,  258,  298,  257,  287,  288,  278,  290,   40,  295,
  293,  294,  126,  257,  257,  297,   48,  287,  288,   51,
  134,  278,  279,  280,  281,  282,  283,  284,  285,  286,
  287,  288,  289,  290,  291,   94,  279,  280,  295,   98,
  297,  295,   74,  287,  288,  257,  258,  289,  290,  291,
  257,  258,  295,   85,   86,   87,   88,   89,   90,   91,
  257,  287,  288,   95,  294,   97,  278,  279,  280,  281,
  282,  283,  284,  285,  286,  287,  288,  289,  290,  291,
  292,  294,  279,  295,  257,  297,  257,  119,  257,  258,
  278,  257,  258,  294,  126,  278,  128,  296,  295,  287,
  288,  133,  134,  294,  287,  288,  279,  280,  279,  278,
  279,  280,  281,  282,  283,  284,  285,  286,  287,  288,
  257,  258,  295,  261,  295,  292,  295,  278,  297,  287,
  288,  296,  257,  274,  257,  278,  287,  288,  274,  297,
  295,  278,  279,  280,  281,  282,  283,  284,  285,  286,
  287,  288,  257,  258,  279,  280,  279,  280,  295,  280,
  297,  287,  288,  257,  258,   52,   53,  279,  295,  295,
  295,  257,  295,  278,  279,  280,  281,  282,  283,  284,
  285,  286,  287,  288,  294,  257,  261,  262,  263,  295,
  295,  266,  297,  278,  269,  297,  271,  272,  295,  274,
  275,  257,  277,  265,  257,  257,  257,  279,  280,  257,
  257,  295,  287,  288,  257,  290,  295,  257,  293,  294,
  261,  262,  263,  295,  299,  266,  279,  280,  269,  257,
  271,  272,  257,  274,  275,  295,  277,   11,   92,  279,
  280,   73,  295,   66,   93,   -1,  287,  288,   -1,  290,
   -1,   -1,  293,  294,   -1,  295,   -1,   -1,  299,  261,
  262,  263,   -1,   -1,  266,   -1,   -1,  269,   -1,  271,
  272,   -1,  274,  275,   -1,  277,   -1,   -1,  271,   -1,
   -1,  274,  275,   35,   -1,  287,  288,   -1,  290,   -1,
   -1,  293,  294,   -1,  287,  288,  298,  290,   -1,   -1,
  293,  294,   54,   55,   56,   -1,   58,  281,  282,  283,
  284,  285,  286,  287,  288,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 301
#define YYUNDFTOKEN 329
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
"RETURN","IFX","SINGNALAND","TYPE","VOID","ID","NUMBER","MAIN","PRINT","EQ",
"OR","AND","LT","LE","GT","GE","EQUEL","NE","DEC","ADD","DIV","STAR","MOD",
"EXP","NOT","LB","RB","MLB","MRB","BLB","BRB","UMINUS","UPLUS",0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
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
"Stmt : PRINT LB ID RB SEM",
"Stmt : RETURN Expr SEM",
"Stmt : WHILE LB Bool_expr RB Block_Stmt",
"Stmt : DO Block WHILE LB Bool_expr RB SEM",
"Stmt : FOR LB For_First SEM For_Second SEM For_Third RB Block_Stmt",
"Stmt : Declaration_stmt",
"Stmt : Assignment_Stmt",
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
#line 485 "yacc.y"

#line 411 "y.tab.c"

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
        root = yystack.l_mark[0].a;
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
#line 64 "yacc.y"
	{
        RootASTNode* temp = new RootASTNode();
        temp->add_child_node(yystack.l_mark[0].a);
        temp->return_type = yystack.l_mark[-4].str;
        yyval.a = temp;
    }
break;
case 3:
#line 72 "yacc.y"
	{
        yyval.str = strdup(yystack.l_mark[0].str);
    }
break;
case 4:
#line 76 "yacc.y"
	{
        yyval.str = strdup(yystack.l_mark[0].str);
    }
break;
case 5:
#line 81 "yacc.y"
	{
        AST* compStmt = new StmtASTNode(StmtType::compStmt);
        compStmt->add_child_node(yystack.l_mark[-1].a);
        yyval.a = compStmt;
    }
break;
case 6:
#line 88 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 7:
#line 92 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 8:
#line 97 "yacc.y"
	{
        if (yystack.l_mark[-1].a == NULL) yyval.a = yystack.l_mark[0].a;
        else {
            yystack.l_mark[-1].a->get_last_peer_node()->add_peer_node(yystack.l_mark[0].a);
        }
    }
break;
case 9:
#line 104 "yacc.y"
	{
        yyval.a = NULL;
    }
break;
case 10:
#line 109 "yacc.y"
	{
        yyval.a = new SelectASTNode((char*)"", SelectType::_if, yystack.l_mark[0].a, yystack.l_mark[-2].a);
    }
break;
case 11:
#line 113 "yacc.y"
	{
        yyval.a = new SelectASTNode((char*)"", SelectType::_if, yystack.l_mark[-2].a, yystack.l_mark[-4].a, yystack.l_mark[0].a);
    }
break;
case 12:
#line 117 "yacc.y"
	{
        yyval.a = new PrintASTNode((char*)yystack.l_mark[-2].str);
    }
break;
case 13:
#line 121 "yacc.y"
	{
        AST* temp = new StmtASTNode(StmtType::returnStmt);
        temp->add_child_node(yystack.l_mark[-1].a);
        yyval.a = temp;
    }
break;
case 14:
#line 127 "yacc.y"
	{
        yyval.a = new LoopASTNode((char*)"", LoopType::_while, yystack.l_mark[0].a, yystack.l_mark[-2].a, true);
    }
break;
case 15:
#line 131 "yacc.y"
	{
        yyval.a = new LoopASTNode((char*)"", LoopType::_while, yystack.l_mark[-5].a, yystack.l_mark[-2].a, true);
    }
break;
case 16:
#line 135 "yacc.y"
	{
        yyval.a = new LoopASTNode((char*)"", LoopType::_for, yystack.l_mark[0].a, yystack.l_mark[-6].a, yystack.l_mark[-4].a, yystack.l_mark[-2].a);
    }
break;
case 17:
#line 139 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 18:
#line 143 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 19:
#line 148 "yacc.y"
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
case 20:
#line 168 "yacc.y"
	{
        DefVarASTNode* var = new DefVarASTNode((char*)yystack.l_mark[0].str);
        var->set_type((char*)("integer pointer"));
        yyval.a = var;
    }
break;
case 21:
#line 174 "yacc.y"
	{
        yyval.a = new DefVarASTNode(yystack.l_mark[0].str);
    }
break;
case 22:
#line 178 "yacc.y"
	{
        DefVarASTNode* var = new DefVarASTNode((char*)yystack.l_mark[-2].str);
        var->set_type((char*)("array"));
        var->set_array_length(NULL);
        yyval.a = var;
    }
break;
case 23:
#line 185 "yacc.y"
	{
        DefVarASTNode* var = new DefVarASTNode((char*)yystack.l_mark[-3].str);
        var->set_type((char*)("array"));
        var->set_array_length(yystack.l_mark[-1].str);
        yyval.a = var;
    }
break;
case 24:
#line 193 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 25:
#line 197 "yacc.y"
	{
        yystack.l_mark[-2].a->get_last_peer_node()->add_peer_node(yystack.l_mark[0].a);
        yyval.a = yystack.l_mark[-2].a;
    }
break;
case 26:
#line 203 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 27:
#line 207 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 28:
#line 212 "yacc.y"
	{
        yystack.l_mark[-2].a->add_child_node(yystack.l_mark[0].a);
        yyval.a = yystack.l_mark[-2].a;
    }
break;
case 29:
#line 218 "yacc.y"
	{
        DefVarASTNode* temp = (DefVarASTNode*)yystack.l_mark[-1].a;
        if(temp->type == symbolType::unset)
            temp->set_type(yystack.l_mark[-2].str);
        yyval.a = temp;
    }
break;
case 30:
#line 226 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 31:
#line 230 "yacc.y"
	{
        DefVarASTNode* temp = (DefVarASTNode*)yystack.l_mark[-2].a;
        if(temp->type == symbolType::unset)
            temp->set_type(yystack.l_mark[-3].str);
        yystack.l_mark[-2].a->add_child_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 32:
#line 238 "yacc.y"
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
case 33:
#line 257 "yacc.y"
	{
        yyval.a = NULL;
    }
break;
case 34:
#line 262 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 35:
#line 266 "yacc.y"
	{
        yyval.a = NULL;
    }
break;
case 36:
#line 271 "yacc.y"
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
case 37:
#line 290 "yacc.y"
	{
        yyval.a = NULL;
    }
break;
case 38:
#line 295 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 39:
#line 299 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"&&", opType::And);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 40:
#line 307 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 41:
#line 311 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"||", opType::Or);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 42:
#line 319 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 43:
#line 324 "yacc.y"
	{
        AST* temp = new OperatorASTNode(yystack.l_mark[-1].str, opType::Relop);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 44:
#line 331 "yacc.y"
	{
        AST* temp = new OperatorASTNode(yystack.l_mark[-1].str, opType::Relop);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 45:
#line 338 "yacc.y"
	{
        AST* temp = new OperatorASTNode(yystack.l_mark[-1].str, opType::Relop);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 46:
#line 345 "yacc.y"
	{
        AST* temp = new OperatorASTNode(yystack.l_mark[-1].str, opType::Relop);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 47:
#line 352 "yacc.y"
	{
        AST* temp = new OperatorASTNode(yystack.l_mark[-1].str, opType::Relop);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 48:
#line 359 "yacc.y"
	{
        AST* temp = new OperatorASTNode(yystack.l_mark[-1].str, opType::Relop);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 49:
#line 366 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 50:
#line 371 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 51:
#line 375 "yacc.y"
	{
        AST* temp = yystack.l_mark[-1].a;
        temp->add_child_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 52:
#line 382 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"+", opType::Orgative);
        yyval.a = temp;
    }
break;
case 53:
#line 387 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"-", opType::Negative);
        yyval.a = temp;
    }
break;
case 54:
#line 392 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"!", opType::Not);
        yyval.a = temp;
    }
break;
case 55:
#line 397 "yacc.y"
	{
        AST* op = new OperatorASTNode((char*)"&", opType::SingalAnd);
        yyval.a = op;
    }
break;
case 56:
#line 402 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"*", opType::GetValue);
        yyval.a = temp;
    }
break;
case 57:
#line 408 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"+", opType::Plus);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 58:
#line 415 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"-", opType::Minus);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 59:
#line 422 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 60:
#line 427 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"*", opType::Times);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 61:
#line 434 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"/", opType::Div);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 62:
#line 441 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"%", opType::Mod);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 63:
#line 448 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 64:
#line 453 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 65:
#line 457 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"^", opType::Power);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 66:
#line 465 "yacc.y"
	{
        yyval.a = yystack.l_mark[-1].a;
    }
break;
case 67:
#line 469 "yacc.y"
	{
        yyval.a = new VarASTNode(yystack.l_mark[0].str);
    }
break;
case 68:
#line 473 "yacc.y"
	{
        yyval.a = new LiteralASTNode(yystack.l_mark[0].str);
    }
break;
case 69:
#line 477 "yacc.y"
	{
        AST* op = new OperatorASTNode((char*)"[]", opType::GetArrayValue);
        AST* var = new VarASTNode((char*)yystack.l_mark[-3].str);
        op->add_child_node(var);
        var->add_peer_node(yystack.l_mark[-1].a);
        yyval.a = op;
    }
break;
#line 1166 "y.tab.c"
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

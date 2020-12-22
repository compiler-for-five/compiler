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

#line 2 "yacc.y"
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
#line 15 "yacc.y"
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
#line 45 "y.tab.c"

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
    5,    5,    5,    5,    5,    5,    5,    5,    5,   17,
   13,   13,   20,   20,   20,   21,   21,   19,   19,   18,
   18,    6,    7,   14,   14,   14,   15,   15,   16,   16,
   26,   26,   27,   27,   25,    8,    8,    8,    8,    8,
    8,    8,   22,   22,   23,   23,   23,   23,   23,    9,
    9,    9,   10,   10,   10,   10,   24,   24,   11,   11,
   11,
};
static const YYINT yylen[] = {                            2,
    1,    5,    1,    1,    3,    1,    1,    2,    0,    5,
    7,    3,    5,    7,    9,    1,    1,    5,    5,    4,
    1,    3,    1,    3,    4,    2,    1,    1,    3,    1,
    1,    3,    3,    2,    1,    0,    1,    0,    1,    0,
    1,    3,    1,    3,    1,    3,    3,    3,    3,    3,
    3,    1,    1,    2,    1,    1,    1,    1,    1,    3,
    3,    1,    3,    3,    3,    1,    1,    3,    3,    1,
    1,
};
static const YYINT yydefred[] = {                         0,
    4,    3,    0,    0,    1,    0,    0,    0,    9,    2,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    5,
    8,   16,   17,    0,    0,    0,    0,    0,    0,   58,
   23,   71,   56,   55,    0,   57,    0,    0,    0,   53,
   70,   67,    0,    0,   31,   28,    0,    0,    0,    0,
    0,    0,   41,    0,    0,    0,    0,    0,    0,    0,
   21,    0,    0,    0,    0,   12,    0,    0,    0,    0,
    0,   54,    0,   33,    0,    0,    0,    0,    0,   24,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   69,    0,    0,   64,   63,
   65,   68,   29,    0,    0,    0,   25,   20,    0,    0,
    0,    0,    0,    0,    6,    7,   13,   42,    0,    0,
    0,   22,    0,   37,   19,   18,    0,    0,    0,   14,
   11,    0,    0,    0,   15,
};
static const YYINT yydgoto[] = {                          3,
    4,    5,  115,   11,  116,   61,   22,   53,   54,   39,
   40,  117,   62,   63,  123,  133,   23,   46,   47,   24,
   41,   42,   43,   44,   55,   56,   57,
};
static const YYINT yysindex[] = {                      -218,
    0,    0,    0, -268,    0, -278, -270, -261,    0,    0,
 -252, -266, -261, -259, -230,  -35, -102, -179, -217,    0,
    0,    0,    0, -220,  -66,  -35,  -86,  -35,   -6,    0,
    0,    0,    0,    0, -217,    0,  -35, -226,    5,    0,
    0,    0,  -35,  -64,    0,    0,  -44,  -30,  -12, -220,
 -263,  -35,    0,    4, -104,  -19,  -17,  -24,  -21, -102,
    0,   14,   19,  -30, -174,    0,  -35,  -35,  -35,  -35,
  -35,    0,  -35,    0, -102,  -35,   -2,  -68,  -18,    0,
  -98,  -35,  -35,  -35,  -35,  -35,  -35,  -41,  -35,  -35,
  -35,  -41,   14, -102,  -35,    0,    5,    5,    0,    0,
    0,    0,    0,  -63,   22,   25,    0,    0,  -63,  -63,
  -63,  -63,  -63,  -63,    0,    0,    0,    0,  -19,    2,
   32,    0,   41,    0,    0,    0,   42,  -41, -102,    0,
    0,   14,    6,  -41,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -245,    0,    0,
    0,    0,    0, -192,    0,    0,    0,    0,   44,    0,
    0,    0,    0,    0,  -22,    0,    0,    0, -118,    0,
    0,    0,    0, -136,    0,    0,    0,  -23,    0, -153,
    0,    0,    0, -253,    0, -238, -241,    0,    0,    0,
    0,   45,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -180,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   46,    0,   47,    0, -101,  -84,    0,    0,
    0,    0,    0, -210,    0,    0,    0,    0, -250, -236,
 -227, -178,  -87,  -49,    0,    0,    0,    0, -175,    0,
  -57,    0,    0,    0,    0,    0,    0,    0,   11,    0,
    0,   12,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,  242,    0,  296,  -16,    0,  219,  -14,  170,
    0,  -89,  -55,    0,    0,    0,    0,  234,    0,  136,
  -11,  173,    0,    0,  -15,  220,    0,
};
#define YYTABLESIZE 310
static const YYINT yytable[] = {                         25,
   45,   38,  121,   52,   93,   48,   46,    6,   12,   13,
   14,   79,   59,   15,    7,   45,   16,   64,   43,   17,
   47,   18,   65,    8,   52,   52,   26,   46,   46,   48,
   66,   23,   80,   28,   78,    9,   19,   81,  131,   43,
   52,   47,   47,   46,  135,   20,   32,   32,   64,   23,
   48,   48,   45,    1,    2,   43,   31,   47,   45,   67,
   68,  104,   29,   48,   27,   27,   48,  109,  110,  111,
  112,  113,  114,  132,   51,  120,   25,  122,   49,  124,
   25,   44,   64,   32,   27,   27,   27,   27,   27,   27,
   27,   27,   27,   27,   27,   27,   27,   27,   27,   49,
   49,   27,   44,   26,   26,   23,   23,   23,   23,   23,
   23,   67,   68,   49,   23,   49,   25,   64,   44,   96,
   66,   66,   25,   26,   26,   26,   26,   26,   26,   26,
   26,   26,   26,   26,   26,   26,   26,   26,   62,   62,
   26,   66,   66,   66,   66,   66,   66,   66,   66,   66,
   66,   66,   66,   66,   50,   61,   61,   66,  108,   62,
   62,   62,   62,   62,   62,   62,   62,   62,   62,   50,
   50,   31,   60,   60,   58,   62,   61,   61,   61,   61,
   61,   61,   61,   61,   61,   61,   19,   67,   68,   88,
   50,   50,   61,   60,   60,   60,   60,   60,   60,   60,
   60,   60,   60,   10,   10,   10,   50,   51,   10,   60,
   52,   10,   74,   75,   10,   72,   10,   67,   68,   12,
   13,   14,   67,   68,   15,  106,   73,   16,   51,   51,
   17,   10,   18,   30,   30,   30,   97,   98,   31,   32,
   10,   99,  100,  101,   51,  102,   76,   19,   59,   10,
   33,   34,   59,   35,   27,    9,   36,   37,   30,   89,
   90,   77,   32,   59,   59,   60,   59,   31,   91,   59,
   59,   94,   92,   33,   34,   95,   35,  107,  125,   36,
   37,  126,   19,   82,   83,   84,   85,   86,   87,   67,
   68,  105,   69,   70,   71,  127,  128,  129,  130,  134,
   36,   35,   34,   38,   40,   39,   21,  118,  103,  119,
};
static const YYINT yycheck[] = {                         11,
   17,   16,   92,  257,   60,   17,  257,  276,  261,  262,
  263,  275,   28,  266,  293,  257,  269,   29,  257,  272,
  257,  274,   37,  294,  278,  279,  293,  278,  279,  257,
  257,  277,  296,  293,   49,  297,  289,   52,  128,  278,
  294,  278,  279,  294,  134,  298,  257,  258,   60,  295,
  278,  279,  294,  272,  273,  294,  274,  294,   75,  286,
  287,   76,  293,   75,  257,  258,  294,   82,   83,   84,
   85,   86,   87,  129,  295,   91,   88,   94,  257,   95,
   92,  257,   94,  294,  277,  278,  279,  280,  281,  282,
  283,  284,  285,  286,  287,  288,  289,  290,  291,  278,
  279,  294,  278,  257,  258,  286,  287,  288,  289,  290,
  291,  286,  287,  293,  295,  294,  128,  129,  294,  294,
  257,  258,  134,  277,  278,  279,  280,  281,  282,  283,
  284,  285,  286,  287,  288,  289,  290,  291,  257,  258,
  294,  278,  279,  280,  281,  282,  283,  284,  285,  286,
  287,  288,  289,  290,   19,  257,  258,  294,  257,  278,
  279,  280,  281,  282,  283,  284,  285,  286,  287,  257,
   35,  274,  257,  258,  261,  294,  278,  279,  280,  281,
  282,  283,  284,  285,  286,  287,  289,  286,  287,  294,
  278,  279,  294,  278,  279,  280,  281,  282,  283,  284,
  285,  286,  287,  261,  262,  263,  294,  257,  266,  294,
  277,  269,  257,  258,  272,   43,  274,  286,  287,  261,
  262,  263,  286,  287,  266,  294,  291,  269,  278,  279,
  272,  289,  274,  257,  258,  271,   67,   68,  274,  275,
  298,   69,   70,   71,  294,   73,  277,  289,  271,    8,
  286,  287,  275,  289,   13,  297,  292,  293,  271,  279,
  278,  274,  275,  286,  287,  272,  289,  274,  293,  292,
  293,  258,  294,  286,  287,  257,  289,  296,  257,  292,
  293,  257,  289,  280,  281,  282,  283,  284,  285,  286,
  287,  294,  288,  289,  290,  294,  265,  257,  257,  294,
  257,  257,  257,  257,  294,  294,   11,   89,   75,   90,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 300
#define YYUNDFTOKEN 330
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
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
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
"Assignment_Stmt : Declarator EQ Expr SEM",
"Assignment_list : Initializer",
"Assignment_list : Assignment_list COMMA Initializer",
"direct_declarator : ID",
"direct_declarator : direct_declarator MLB MRB",
"direct_declarator : direct_declarator MLB NUMBER MRB",
"Declarator : STAR direct_declarator",
"Declarator : direct_declarator",
"Initial_declaration_list : Init_declarator",
"Initial_declaration_list : Initial_declaration_list COMMA Init_declarator",
"Init_declarator : Declarator",
"Init_declarator : Initializer",
"Initializer : Declarator EQ Expr",
"Declaration_stmt : TYPE Initial_declaration_list SEM",
"For_First : TYPE Assignment_list",
"For_First : Assignment_list",
"For_First :",
"For_Second : Bool_expr",
"For_Second :",
"For_Third : Assignment_list",
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
"Factor : Declarator",
"Factor : NUMBER",

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
#line 42 "yacc.y"
	{
        root = new RootASTNode();
        root->add_child_node(yystack.l_mark[0].a);
        root->print_tree(root, 0);
    }
break;
case 2:
#line 49 "yacc.y"
	{
        DefFunASTNode* temp = new DefFunASTNode(yystack.l_mark[-3].str, NULL, NULL);
        temp->setFunBody(yystack.l_mark[0].a);
        temp->setRevType(yystack.l_mark[-4].str);
        yyval.a = temp;
    }
break;
case 3:
#line 57 "yacc.y"
	{
        yyval.str = strdup(yystack.l_mark[0].str);
    }
break;
case 4:
#line 61 "yacc.y"
	{
        yyval.str = strdup(yystack.l_mark[0].str);
    }
break;
case 5:
#line 66 "yacc.y"
	{
        AST* compStmt = new StmtASTNode(StmtType::compStmt);
        compStmt->add_child_node(yystack.l_mark[-1].a);
        yyval.a = compStmt;
    }
break;
case 6:
#line 73 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 7:
#line 77 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 8:
#line 82 "yacc.y"
	{
        if (yystack.l_mark[-1].a == NULL) yyval.a = yystack.l_mark[0].a;
        else {
            yystack.l_mark[-1].a->get_last_peer_node()->add_peer_node(yystack.l_mark[0].a);
        }
    }
break;
case 9:
#line 89 "yacc.y"
	{
        yyval.a = NULL;
    }
break;
case 10:
#line 94 "yacc.y"
	{
        yyval.a = new SelectASTNode((char*)"", SelectType::_if, yystack.l_mark[0].a, yystack.l_mark[-2].a);
    }
break;
case 11:
#line 98 "yacc.y"
	{
        yyval.a = new SelectASTNode((char*)"", SelectType::_if, yystack.l_mark[-2].a, yystack.l_mark[-4].a, yystack.l_mark[0].a);
    }
break;
case 12:
#line 102 "yacc.y"
	{
        AST* temp = new StmtASTNode(StmtType::returnStmt);
        temp->add_child_node(yystack.l_mark[-1].a);
        yyval.a = temp;
    }
break;
case 13:
#line 108 "yacc.y"
	{
        yyval.a = new LoopASTNode((char*)"", LoopType::_while, yystack.l_mark[0].a, yystack.l_mark[-2].a, true);
    }
break;
case 14:
#line 112 "yacc.y"
	{
        yyval.a = new LoopASTNode((char*)"", LoopType::_while, yystack.l_mark[-5].a, yystack.l_mark[-2].a, true);
    }
break;
case 15:
#line 116 "yacc.y"
	{
        yyval.a = new LoopASTNode((char*)"", LoopType::_for, yystack.l_mark[0].a, yystack.l_mark[-6].a, yystack.l_mark[-4].a, yystack.l_mark[-2].a);
    }
break;
case 16:
#line 120 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 17:
#line 124 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 18:
#line 128 "yacc.y"
	{
        yyval.a = new CallFunASTNode(yystack.l_mark[-4].str, yystack.l_mark[-2].a);
    }
break;
case 19:
#line 132 "yacc.y"
	{
        yyval.a = new CallFunASTNode(yystack.l_mark[-4].str, yystack.l_mark[-2].str);
    }
break;
case 20:
#line 137 "yacc.y"
	{
        yystack.l_mark[-3].a->add_child_node(yystack.l_mark[-1].a);
        yyval.a = yystack.l_mark[-3].a;
    }
break;
case 21:
#line 143 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 22:
#line 147 "yacc.y"
	{
        yystack.l_mark[-2].a->get_last_peer_node()->add_peer_node(yystack.l_mark[0].a);
        yyval.a = yystack.l_mark[-2].a;
    }
break;
case 23:
#line 153 "yacc.y"
	{
        yyval.a = new DefVarASTNode(yystack.l_mark[0].str);
    }
break;
case 24:
#line 157 "yacc.y"
	{
        DefVarASTNode* var = new DefVarASTNode((char*)yystack.l_mark[-2].a);
        var->set_type((char*)("array"));
        var->set_array_length(NULL);
        yyval.a = var;
    }
break;
case 25:
#line 164 "yacc.y"
	{
        DefVarASTNode* var = new DefVarASTNode((char*)yystack.l_mark[-3].a);
        var->set_type((char*)("array"));
        var->set_array_length(yystack.l_mark[-1].str);
        yyval.a = var;
    }
break;
case 26:
#line 172 "yacc.y"
	{
        AST* op = new OperatorASTNode((char*)"*", opType::GetValue);
        AST* var = new DefVarASTNode((char*)yystack.l_mark[0].a);
        op->add_child_node(var);
        yyval.a = op;
    }
break;
case 27:
#line 179 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 28:
#line 184 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 29:
#line 188 "yacc.y"
	{
        yystack.l_mark[-2].a->get_last_peer_node()->add_peer_node(yystack.l_mark[0].a);
        yyval.a = yystack.l_mark[-2].a;
    }
break;
case 30:
#line 194 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 31:
#line 198 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 32:
#line 203 "yacc.y"
	{
        yystack.l_mark[-2].a->add_child_node(yystack.l_mark[0].a);
        yyval.a = yystack.l_mark[-2].a;
    }
break;
case 33:
#line 209 "yacc.y"
	{
        DefVarASTNode* temp = (DefVarASTNode*)yystack.l_mark[-1].a;
        temp->set_type(yystack.l_mark[-2].str);
        yyval.a = temp;
    }
break;
case 34:
#line 216 "yacc.y"
	{
        DefVarASTNode* temp = (DefVarASTNode*)yystack.l_mark[0].a;
        yystack.l_mark[-1].str = strdup(yystack.l_mark[-1].str);
        temp->set_type(yystack.l_mark[-1].str);
        yyval.a = temp;
    }
break;
case 35:
#line 223 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 36:
#line 227 "yacc.y"
	{
        yyval.a = NULL;
    }
break;
case 37:
#line 232 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 38:
#line 236 "yacc.y"
	{
        yyval.a = NULL;
    }
break;
case 39:
#line 241 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 40:
#line 245 "yacc.y"
	{
        yyval.a = NULL;
    }
break;
case 41:
#line 250 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 42:
#line 254 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"&&", opType::And);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 43:
#line 262 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 44:
#line 266 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"||", opType::Or);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 45:
#line 274 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 46:
#line 279 "yacc.y"
	{
        AST* temp = new OperatorASTNode(yystack.l_mark[-1].str, opType::Relop);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 47:
#line 286 "yacc.y"
	{
        AST* temp = new OperatorASTNode(yystack.l_mark[-1].str, opType::Relop);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 48:
#line 293 "yacc.y"
	{
        AST* temp = new OperatorASTNode(yystack.l_mark[-1].str, opType::Relop);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 49:
#line 300 "yacc.y"
	{
        AST* temp = new OperatorASTNode(yystack.l_mark[-1].str, opType::Relop);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 50:
#line 307 "yacc.y"
	{
        AST* temp = new OperatorASTNode(yystack.l_mark[-1].str, opType::Relop);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 51:
#line 314 "yacc.y"
	{
        AST* temp = new OperatorASTNode(yystack.l_mark[-1].str, opType::Relop);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 52:
#line 321 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 53:
#line 326 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 54:
#line 330 "yacc.y"
	{
        AST* temp = yystack.l_mark[-1].a;
        temp->add_child_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 55:
#line 337 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"+", opType::Orgative);
        yyval.a = temp;
    }
break;
case 56:
#line 342 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"-", opType::Negative);
        yyval.a = temp;
    }
break;
case 57:
#line 347 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"!", opType::Not);
        yyval.a = temp;
    }
break;
case 58:
#line 352 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"&", opType::SingalAnd);
        yyval.a = temp;
    }
break;
case 59:
#line 357 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"*", opType::GetValue);
        yyval.a = temp;
    }
break;
case 60:
#line 363 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"+", opType::Plus);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 61:
#line 370 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"-", opType::Minus);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 62:
#line 377 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 63:
#line 382 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"*", opType::Times);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 64:
#line 389 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"/", opType::Div);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 65:
#line 396 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"%", opType::Mod);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 66:
#line 403 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 67:
#line 408 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 68:
#line 412 "yacc.y"
	{
        AST* temp = new OperatorASTNode((char*)"^", opType::Power);
        temp->add_child_node(yystack.l_mark[-2].a);
        yystack.l_mark[-2].a->add_peer_node(yystack.l_mark[0].a);
        yyval.a = temp;
    }
break;
case 69:
#line 420 "yacc.y"
	{
        yyval.a = yystack.l_mark[-1].a;
    }
break;
case 70:
#line 424 "yacc.y"
	{
        yyval.a = yystack.l_mark[0].a;
    }
break;
case 71:
#line 428 "yacc.y"
	{
        yyval.a = new LiteralASTNode(yystack.l_mark[0].str);
    }
break;
#line 1108 "y.tab.c"
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

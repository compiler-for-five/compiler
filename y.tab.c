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

#line 2 "test.y"
#include<unistd.h>
#include<stdio.h>   
#include "test.h"
#line 7 "test.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
struct ast* a;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 36 "y.tab.c"

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

#define LT 257
#define LE 258
#define GT 259
#define GE 260
#define EQ 261
#define ADD 262
#define DEC 263
#define STAR 264
#define DIV 265
#define SEM 266
#define LB 267
#define RB 268
#define MLB 269
#define MRB 270
#define BLB 271
#define BRB 272
#define COMMA 273
#define ID 274
#define NUMBER 275
#define delim 276
#define whitespace 277
#define Func_print 278
#define Func_scan 279
#define EQUEL 280
#define MOD 281
#define EXP 282
#define NE 283
#define AND 284
#define OR 285
#define NOT 286
#define WHILE 287
#define DO 288
#define IF 289
#define THEN 290
#define ELSE 291
#define FOR 292
#define NEWLINE 293
#define ERRORCHAR 294
#define VOID 295
#define MAIN 296
#define TYPE 297
#define RETURN 298
#define IFX 299
#define SINGNALAND 300
#define UMINUS 301
#define UPLUS 302
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,   10,   10,    1,   11,   11,    2,    2,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
   27,   28,   16,   12,   12,   19,   19,   19,   20,   20,
   18,   18,   17,   17,    4,    4,    4,    5,   13,   13,
   13,   14,   14,   15,   15,   25,   25,   26,   26,   24,
    6,    6,    6,    6,    6,    6,    6,   21,   21,   22,
   22,   22,   22,   22,    7,    7,    7,    8,    8,    8,
    8,   23,   23,    9,    9,    9,
};
static const YYINT yylen[] = {                            2,
    5,    1,    1,    3,    1,    1,    2,    0,    5,    7,
    3,    5,    7,    9,    1,    1,    5,    5,    2,    2,
    3,    3,    4,    1,    3,    1,    3,    4,    2,    1,
    1,    3,    1,    1,    3,    1,    1,    3,    2,    1,
    0,    1,    0,    1,    0,    1,    3,    1,    3,    1,
    3,    3,    3,    3,    3,    3,    1,    1,    2,    1,
    1,    1,    1,    1,    3,    3,    1,    3,    3,    3,
    1,    1,    3,    3,    1,    1,
};
static const YYINT yydefred[] = {                         0,
    2,    3,    0,    0,    0,    0,    0,    0,    1,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   15,   16,    0,    0,    0,    0,   26,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   34,   31,    0,
    0,   36,   37,   60,   61,    0,    0,   76,   62,   63,
    0,    0,   58,   75,   72,    0,    0,    4,    7,    0,
    0,   19,   20,   21,   22,    0,    0,   46,    0,    0,
    0,    0,    0,    0,    0,   24,    0,    0,    0,   38,
    0,    0,    0,    0,    0,   11,    0,    0,    0,   59,
    0,   27,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   32,    0,   74,    0,    0,   68,   69,   70,   73,   28,
   23,   17,   18,    0,    0,    0,    0,    0,    0,    5,
    6,   12,   47,    0,    0,    0,   25,    0,   42,    0,
    0,    0,   13,   10,    0,    0,    0,   14,
};
static const YYINT yydgoto[] = {                          3,
  130,   20,  131,   76,   22,   68,   69,   52,   53,    4,
  132,   77,   78,  138,  146,   23,   39,   40,   24,   54,
   55,   56,   57,   70,   71,   72,   26,   27,
};
static const YYINT yysindex[] = {                      -235,
    0,    0,    0, -284, -230, -220, -215, -106,    0, -183,
 -181, -167, -160, -158, -215, -135, -116, -229, -248, -148,
 -106,    0,    0, -109,  -87, -102,  -82,    0, -109,  -73,
  -60, -248,  -84, -248,  -79, -248, -225,    0,    0, -242,
  -50,    0,    0,    0,    0, -183, -248,    0,    0,    0,
  -56, -175,    0,    0,    0, -248,  -77,    0,    0, -173,
 -248,    0,    0,    0,    0, -115,  -54,    0, -140,  -31,
  -72,  -51,  -26,  -28, -229,    0,  -30,  -24,  -50,    0,
 -229, -248,  -83, -248, -248,    0, -248, -248, -248,    0,
 -248,    0,   -9,  -27,  -22,  -11, -248, -248, -248, -248,
 -248, -248, -143, -248, -248, -248, -143,  -30, -229, -248,
    0, -125,    0, -175, -175,    0,    0,    0,    0,    0,
    0,    0,    0, -125, -125, -125, -125, -125, -125,    0,
    0,    0,    0,  -72,   -5,  -25,    0,   -1,    0,    2,
 -143, -229,    0,    0,  -30,    5, -143,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,   -2,    0,    0,
    3,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   -2,    0,    0,  -64,    0,    0,    0,    0,  -35,    0,
    0,    0,    0,    0,    0,    0,   18,    0,    0,    0,
 -196,    0,    0,    0,    0, -159,    0,    0,    0,    0,
    0,   23,    0,    0,    0,    0,   -6,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -243,    0,
 -257, -156,    0,    0,    0,    0,   21,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   22,    0,   24,
    0, -197,    0,   52,   81,    0,    0,    0,    0,    0,
    0,    0,    0, -234, -205, -170, -155, -107,  -97,    0,
    0,    0,    0,  -53,    0, -122,    0,    0,    0,    0,
    0,   25,    0,    0,   26,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
   29,  250,    9,  -15,    0,  188,  -14,   78,    0,    0,
 -101,  -67,    0,    0,    0,    0,  214,    0,   -3,   -8,
  -34,    0,    0,  -32,  192,    0,  -17,  -16,
};
#define YYTABLESIZE 366
static const YYINT yytable[] = {                         25,
   42,   43,   38,   74,   51,  136,   29,  108,   48,   41,
   48,    5,   25,   44,   45,   46,   21,   66,   47,   42,
   43,   90,   57,   80,   57,   28,   48,   48,   79,   21,
   81,   51,   83,   51,   10,    9,    6,   49,   10,  144,
   57,   57,   29,   35,   11,  148,   94,    7,   11,   51,
   51,   50,  116,  117,  118,    8,  119,   42,   43,    1,
   52,    2,   52,   42,   43,   38,   79,  112,   35,   33,
   35,   75,   41,  135,  145,   35,   33,  139,   52,   52,
   30,   31,  124,  125,  126,  127,  128,  129,   87,   88,
   28,   42,   43,  137,   25,   53,   92,   53,   25,   32,
   79,   93,   64,   64,   64,   89,   33,   64,   34,   50,
   54,   50,   54,   53,   53,   64,   97,   98,   99,  100,
   10,   84,   85,   58,   42,   43,   64,    8,   54,   54,
   11,   36,   25,   79,   12,   13,   84,   85,   25,  101,
   64,    9,  102,   14,   15,   16,   84,   85,   17,    9,
   37,    9,   95,   18,   19,    9,    9,   10,   55,   60,
   55,  114,  115,   62,    9,    9,    9,   11,   56,    9,
   56,   12,   13,   61,    9,    9,   55,   55,   84,   85,
   14,   15,   16,   63,  113,   17,   56,   56,   64,   67,
   18,   19,   30,   30,   30,   30,   30,   30,   30,   30,
   30,   30,   65,   30,   91,   84,   85,   73,   30,   86,
   82,  104,   49,   96,   49,   30,   30,   30,   30,   30,
   30,   29,   29,   29,   29,   29,   29,   29,   29,   29,
   29,   49,   29,  105,   84,   85,  103,   29,  121,  107,
  106,  110,  109,  122,   29,   29,   29,   29,   29,   29,
   71,   71,   71,   71,  123,   71,   71,   71,   71,   71,
  120,   71,  140,   26,  142,  141,   71,  143,   26,    8,
   59,   26,  147,   71,   71,   26,   71,   71,   71,   67,
   67,   67,   67,   41,   67,   67,   40,   39,   67,   43,
   67,  133,   45,   44,  111,   67,  134,    0,    0,    0,
    0,    0,   67,    0,    0,   67,   67,   67,   65,   65,
   65,   65,    0,   65,   65,    0,    0,   65,    0,   65,
    0,    0,    0,    0,   65,    0,    0,    0,    0,    0,
    0,   65,    0,    0,   65,   65,   65,   66,   66,   66,
   66,    0,   66,   66,    0,    0,   66,    0,   66,    0,
    0,    0,    0,   66,    0,    0,    0,    0,    0,    0,
   66,    0,    0,   66,   66,   66,
};
static const YYINT yycheck[] = {                          8,
   18,   18,   18,   36,   19,  107,   10,   75,  266,   18,
  268,  296,   21,  262,  263,  264,    8,   32,  267,   37,
   37,   56,  266,  266,  268,  274,  275,  285,   37,   21,
  273,  266,   47,  268,  264,    7,  267,  286,  264,  141,
  284,  285,   46,   15,  274,  147,   61,  268,  274,  284,
  285,  300,   87,   88,   89,  271,   91,   75,   75,  295,
  266,  297,  268,   81,   81,   81,   75,   82,  266,  266,
  268,  297,   81,  106,  142,  273,  273,  110,  284,  285,
  262,  263,   97,   98,   99,  100,  101,  102,  264,  265,
  274,  109,  109,  109,  103,  266,  270,  268,  107,  267,
  109,  275,  262,  263,  264,  281,  267,  267,  267,  266,
  266,  268,  268,  284,  285,  275,  257,  258,  259,  260,
  264,  262,  263,  272,  142,  142,  286,  271,  284,  285,
  274,  267,  141,  142,  278,  279,  262,  263,  147,  280,
  300,  264,  283,  287,  288,  289,  262,  263,  292,  272,
  267,  274,  268,  297,  298,  278,  279,  264,  266,  269,
  268,   84,   85,  266,  287,  288,  289,  274,  266,  292,
  268,  278,  279,  261,  297,  298,  284,  285,  262,  263,
  287,  288,  289,  266,  268,  292,  284,  285,  262,  274,
  297,  298,  257,  258,  259,  260,  261,  262,  263,  264,
  265,  266,  263,  268,  282,  262,  263,  287,  273,  266,
  261,  284,  266,  268,  268,  280,  281,  282,  283,  284,
  285,  257,  258,  259,  260,  261,  262,  263,  264,  265,
  266,  285,  268,  285,  262,  263,  268,  273,  266,  268,
  267,  266,  273,  266,  280,  281,  282,  283,  284,  285,
  257,  258,  259,  260,  266,  262,  263,  264,  265,  266,
  270,  268,  268,  261,  266,  291,  273,  266,  266,  272,
   21,  269,  268,  280,  281,  273,  283,  284,  285,  257,
  258,  259,  260,  266,  262,  263,  266,  266,  266,  266,
  268,  104,  268,  268,   81,  273,  105,   -1,   -1,   -1,
   -1,   -1,  280,   -1,   -1,  283,  284,  285,  257,  258,
  259,  260,   -1,  262,  263,   -1,   -1,  266,   -1,  268,
   -1,   -1,   -1,   -1,  273,   -1,   -1,   -1,   -1,   -1,
   -1,  280,   -1,   -1,  283,  284,  285,  257,  258,  259,
  260,   -1,  262,  263,   -1,   -1,  266,   -1,  268,   -1,
   -1,   -1,   -1,  273,   -1,   -1,   -1,   -1,   -1,   -1,
  280,   -1,   -1,  283,  284,  285,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 302
#define YYUNDFTOKEN 333
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"LT","LE","GT","GE","EQ","ADD",
"DEC","STAR","DIV","SEM","LB","RB","MLB","MRB","BLB","BRB","COMMA","ID",
"NUMBER","delim","whitespace","Func_print","Func_scan","EQUEL","MOD","EXP","NE",
"AND","OR","NOT","WHILE","DO","IF","THEN","ELSE","FOR","NEWLINE","ERRORCHAR",
"VOID","MAIN","TYPE","RETURN","IFX","SINGNALAND","UMINUS","UPLUS",0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : Program",
"Program : RETYPE MAIN LB RB Block",
"RETYPE : VOID",
"RETYPE : TYPE",
"Block : BLB Stmts BRB",
"Block_Stmt : Block",
"Block_Stmt : Stmt",
"Stmts : Stmt Stmts",
"Stmts :",
"Stmt : IF LB Bool_expr RB Block_Stmt",
"Stmt : IF LB Bool_expr RB Block_Stmt ELSE Block_Stmt",
"Stmt : RETURN Expr SEM",
"Stmt : WHILE LB Bool_expr RB Block_Stmt",
"Stmt : DO Block WHILE LB Bool_expr RB SEM",
"Stmt : FOR LB For_First SEM For_Second SEM For_Third RB Block_Stmt",
"Stmt : Declaration_stmt",
"Stmt : Assignment_Stmt",
"Stmt : Func_print LB Expr RB SEM",
"Stmt : Func_scan LB ID RB SEM",
"Stmt : Self_add SEM",
"Stmt : Self_dec SEM",
"Self_add : ID ADD ADD",
"Self_dec : ID DEC DEC",
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
"Initializer : Self_add",
"Initializer : Self_dec",
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
#line 30 "test.y"
	{yyval.a=newast("Program",5,yystack.l_mark[-4].a,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);check(yyval.a);printf("\n打印syntax tree:\n");eval(yyval.a,0);printf("syntax tree打印完毕!\n\n");}
break;
case 2:
#line 32 "test.y"
	{yyval.a=newast("RETYPE",1,yystack.l_mark[0].a);printf("规约 RETYPE\n");}
break;
case 3:
#line 33 "test.y"
	{yyval.a=newast("RETYPE",1,yystack.l_mark[0].a);printf("规约 RETYPE\n");}
break;
case 4:
#line 35 "test.y"
	{yyval.a=newast("Block",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 block\n");}
break;
case 5:
#line 37 "test.y"
	{yyval.a=newast("Block_Stmt",1,yystack.l_mark[0].a);printf("规约 Block_Stmt\n");}
break;
case 6:
#line 38 "test.y"
	{yyval.a=newast("Block_Stmt",1,yystack.l_mark[0].a);printf("规约 Block_Stmt\n");}
break;
case 7:
#line 40 "test.y"
	{yyval.a=newast("Stmts",2,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Stmts\n");}
break;
case 8:
#line 41 "test.y"
	{yyval.a=newast("Stmts",0,-1);printf("规约 Stmts\n");}
break;
case 9:
#line 43 "test.y"
	{yyval.a=newast("Stmt",5,yystack.l_mark[-4].a,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 10:
#line 44 "test.y"
	{yyval.a=newast("Stmt",7,yystack.l_mark[-6].a,yystack.l_mark[-5].a,yystack.l_mark[-4].a,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 11:
#line 45 "test.y"
	{yyval.a=newast("Stmt",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 12:
#line 46 "test.y"
	{yyval.a=newast("Stmt",5,yystack.l_mark[-4].a,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 13:
#line 47 "test.y"
	{yyval.a=newast("Stmt",7,yystack.l_mark[-6].a,yystack.l_mark[-5].a,yystack.l_mark[-4].a,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 14:
#line 48 "test.y"
	{yyval.a=newast("Stmt",9,yystack.l_mark[-8].a,yystack.l_mark[-7].a,yystack.l_mark[-6].a,yystack.l_mark[-5].a,yystack.l_mark[-4].a,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 15:
#line 49 "test.y"
	{yyval.a=newast("Stmt",1,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 16:
#line 50 "test.y"
	{yyval.a=newast("Stmt",1,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 17:
#line 51 "test.y"
	{yyval.a=newast("Stmt",5,yystack.l_mark[-4].a,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 18:
#line 52 "test.y"
	{yyval.a=newast("Stmt",5,yystack.l_mark[-4].a,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 19:
#line 53 "test.y"
	{yyval.a=newast("Stmt",1,yystack.l_mark[-1].a);printf("规约 Stmt\n");}
break;
case 20:
#line 54 "test.y"
	{yyval.a=newast("Stmt",1,yystack.l_mark[-1].a);printf("规约 Stmt\n");}
break;
case 21:
#line 56 "test.y"
	{yyval.a=newast("Self_add",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Self_add\n");}
break;
case 22:
#line 58 "test.y"
	{yyval.a=newast("Self_dec",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Self_dec\n");}
break;
case 23:
#line 60 "test.y"
	{yyval.a=newast("Assignment_Stmt",4,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Assignment_Stmt\n");}
break;
case 24:
#line 62 "test.y"
	{yyval.a=newast("Assignment_list",1,yystack.l_mark[0].a);printf("规约 Assignment_list\n");}
break;
case 25:
#line 63 "test.y"
	{yyval.a=newast("Assignment_list",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Assignment_list\n");}
break;
case 26:
#line 65 "test.y"
	{yyval.a=newast("direct_declarator",1,yystack.l_mark[0].a);printf("规约 direct_declarator\n");}
break;
case 27:
#line 66 "test.y"
	{yyval.a=newast("direct_declarator",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 direct_declarator\n");}
break;
case 28:
#line 67 "test.y"
	{yyval.a=newast("direct_declarator",4,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 direct_declarator\n");}
break;
case 29:
#line 69 "test.y"
	{yyval.a=newast("Declarator",2,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Declarator\n");}
break;
case 30:
#line 70 "test.y"
	{yyval.a=newast("Declarator",1,yystack.l_mark[0].a);printf("规约 Declarator\n");}
break;
case 31:
#line 72 "test.y"
	{yyval.a=newast("Initial_declaration_list",1,yystack.l_mark[0].a);printf("规约 Initial_declaration_list\n");}
break;
case 32:
#line 73 "test.y"
	{yyval.a=newast("Initial_declaration_list",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Initial_declaration_list\n");}
break;
case 33:
#line 75 "test.y"
	{yyval.a=newast("Init_declarator",1,yystack.l_mark[0].a);printf("规约 Init_declarator\n");}
break;
case 34:
#line 76 "test.y"
	{yyval.a=newast("Init_declarator",1,yystack.l_mark[0].a);printf("规约 Init_declarator\n");}
break;
case 35:
#line 78 "test.y"
	{yyval.a=newast("Initializer",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Initializer\n");}
break;
case 36:
#line 79 "test.y"
	{yyval.a=newast("Initializer",1,yystack.l_mark[0].a);printf("规约 Initializer\n");}
break;
case 37:
#line 80 "test.y"
	{yyval.a=newast("Initializer",1,yystack.l_mark[0].a);printf("规约 Initializer\n");}
break;
case 38:
#line 82 "test.y"
	{yyval.a=newast("Declaration_stmt",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Declaration_stmt\n");}
break;
case 39:
#line 84 "test.y"
	{yyval.a=newast("For_First",2,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 For_First\n");}
break;
case 40:
#line 85 "test.y"
	{yyval.a=newast("For_First",1,yystack.l_mark[0].a);printf("规约 For_First\n");}
break;
case 41:
#line 86 "test.y"
	{yyval.a=newast("For_First",0,-1);printf("规约 For_First\n");}
break;
case 42:
#line 88 "test.y"
	{yyval.a=newast("For_Second",1,yystack.l_mark[0].a);printf("规约 For_Second\n");}
break;
case 43:
#line 89 "test.y"
	{yyval.a=newast("For_Second",0,-1);printf("规约 For_Second\n");}
break;
case 44:
#line 91 "test.y"
	{yyval.a=newast("For_Third",1,yystack.l_mark[0].a);printf("规约 For_Third\n");}
break;
case 45:
#line 92 "test.y"
	{yyval.a=newast("For_Third",0,-1);printf("规约 For_Third\n");}
break;
case 46:
#line 94 "test.y"
	{yyval.a=newast("logical_and_expr",1,yystack.l_mark[0].a);printf("规约 logical_and_expr\n");}
break;
case 47:
#line 95 "test.y"
	{yyval.a=newast("logical_and_expr",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 logical_and_expr\n");}
break;
case 48:
#line 97 "test.y"
	{yyval.a=newast("logical_or_expr",1,yystack.l_mark[0].a);printf("规约 logical_or_expr\n");}
break;
case 49:
#line 98 "test.y"
	{yyval.a=newast("logical_or_expr",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 logical_or_expr\n");}
break;
case 50:
#line 100 "test.y"
	{yyval.a=newast("Bool_expr",1,yystack.l_mark[0].a);printf("规约 Bool_expr\n");}
break;
case 51:
#line 102 "test.y"
	{yyval.a=newast("Bool",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Bool\n");}
break;
case 52:
#line 103 "test.y"
	{yyval.a=newast("Bool",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Bool\n");}
break;
case 53:
#line 104 "test.y"
	{yyval.a=newast("Bool",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Bool\n");}
break;
case 54:
#line 105 "test.y"
	{yyval.a=newast("Bool",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Bool\n");}
break;
case 55:
#line 106 "test.y"
	{yyval.a=newast("Bool",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Bool\n");}
break;
case 56:
#line 107 "test.y"
	{yyval.a=newast("Bool",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Bool\n");}
break;
case 57:
#line 108 "test.y"
	{yyval.a=newast("Bool",1,yystack.l_mark[0].a);printf("规约 Bool\n");}
break;
case 58:
#line 110 "test.y"
	{yyval.a=newast("unary_expr",1,yystack.l_mark[0].a);printf("规约 unary_expr\n");}
break;
case 59:
#line 111 "test.y"
	{yyval.a=newast("unary_expr",2,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 unary_expr\n");}
break;
case 60:
#line 113 "test.y"
	{yyval.a=newast("unary_operator",1,yystack.l_mark[0].a);printf("规约 unary_operator\n");}
break;
case 61:
#line 114 "test.y"
	{yyval.a=newast("unary_operator",1,yystack.l_mark[0].a);printf("规约 unary_operator\n");}
break;
case 62:
#line 115 "test.y"
	{yyval.a=newast("unary_operator",1,yystack.l_mark[0].a);printf("规约 unary_operator\n");}
break;
case 63:
#line 116 "test.y"
	{yyval.a=newast("unary_operator",1,yystack.l_mark[0].a);printf("规约 unary_operator\n");}
break;
case 64:
#line 117 "test.y"
	{yyval.a=newast("unary_operator",1,yystack.l_mark[0].a);printf("规约 unary_operator\n");}
break;
case 65:
#line 119 "test.y"
	{yyval.a=newast("Expr",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Expr\n");}
break;
case 66:
#line 120 "test.y"
	{yyval.a=newast("Expr",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Expr\n");}
break;
case 67:
#line 121 "test.y"
	{yyval.a=newast("Expr",1,yystack.l_mark[0].a);printf("规约 Expr\n");}
break;
case 68:
#line 123 "test.y"
	{yyval.a=newast("Term",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Term\n");}
break;
case 69:
#line 124 "test.y"
	{yyval.a=newast("Term",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Term\n");}
break;
case 70:
#line 125 "test.y"
	{yyval.a=newast("Term",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Term\n");}
break;
case 71:
#line 126 "test.y"
	{yyval.a=newast("Term",1,yystack.l_mark[0].a);printf("规约 Term\n");}
break;
case 72:
#line 128 "test.y"
	{yyval.a=newast("POW",1,yystack.l_mark[0].a);printf("规约 POW\n");}
break;
case 73:
#line 129 "test.y"
	{yyval.a=newast("POW",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 POW\n");}
break;
case 74:
#line 131 "test.y"
	{yyval.a=newast("Factor",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Factor\n");}
break;
case 75:
#line 132 "test.y"
	{yyval.a=newast("Factor",1,yystack.l_mark[0].a);printf("规约 Factor\n");}
break;
case 76:
#line 133 "test.y"
	{yyval.a=newast("Factor",1,yystack.l_mark[0].a);printf("规约 Factor\n");}
break;
#line 920 "y.tab.c"
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

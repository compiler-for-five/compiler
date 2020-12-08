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
double d;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 37 "y.tab.c"

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
#define MUL 264
#define DIV 265
#define SEM 266
#define LB 267
#define RB 268
#define BLB 269
#define BRB 270
#define COMMA 271
#define ID 272
#define NUMBER 273
#define delim 274
#define whitespace 275
#define Func_print 276
#define Func_scan 277
#define EQUEL 278
#define MOD 279
#define EXP 280
#define NE 281
#define AND 282
#define OR 283
#define NOT 284
#define WHILE 285
#define DO 286
#define IF 287
#define THEN 288
#define ELSE 289
#define FOR 290
#define NEWLINE 291
#define ERRORCHAR 292
#define VOID 293
#define MAIN 294
#define TYPE 295
#define RETURN 296
#define IFX 297
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,   11,   11,    1,   12,   12,    2,    2,   13,   14,
   14,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,   21,   22,   18,   20,   20,
   19,   19,    4,    4,    5,    5,    5,    6,    6,   15,
   15,   15,   16,   16,   17,   17,    7,    7,    7,    7,
    7,    7,    8,    8,    8,    9,    9,    9,   10,   10,
   10,   10,
};
static const YYINT yylen[] = {                            2,
    5,    1,    1,    3,    1,    1,    2,    0,    6,    2,
    1,    7,    3,    6,    8,    5,    5,    7,    9,    1,
    1,    5,    5,    2,    2,    3,    3,    4,    1,    3,
    1,    1,    1,    3,    3,    1,    1,    3,    3,    2,
    1,    0,    1,    0,    1,    0,    3,    3,    3,    3,
    3,    1,    3,    3,    1,    3,    3,    1,    3,    1,
    1,    2,
};
static const YYINT yydefred[] = {                         0,
    2,    3,    0,    0,    0,    0,    0,    0,    1,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   20,   21,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   32,   29,    0,   36,   37,
    0,    0,   60,   61,    0,    0,   58,    4,    7,   24,
   25,    0,   26,   27,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   33,    0,    0,   39,    0,   38,    0,
   62,    0,    0,    0,   13,    0,    0,   28,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   34,   32,   30,   59,    0,    0,   56,   57,   22,
   23,    5,    6,   17,    0,    0,    0,    0,    0,    0,
    0,   43,    0,    0,    0,   11,    0,    0,   18,    0,
   12,    0,   10,    0,    0,    0,   15,    0,    0,   19,
    0,    0,
};
static const YYINT yydgoto[] = {                          3,
  102,   19,  103,   35,   64,   21,   57,   58,   46,   47,
    4,  104,  116,  117,   65,  113,  125,   22,   37,   38,
   23,   24,
};
static const YYINT yysindex[] = {                      -251,
    0,    0,    0, -274, -232, -244, -214, -125,    0, -148,
 -205, -179, -167, -214, -138, -118, -122, -236, -114, -125,
    0,    0, -109, -107, -236,  -96,  -95, -236, -105, -236,
 -116, -236, -269, -135, -260,    0,    0, -243,    0,    0,
  -97, -236,    0,    0, -184, -196,    0,    0,    0,    0,
    0, -176,    0,    0, -249,  -89,  -88,  -34,  -83,  -86,
 -135,  -87,  -84,    0,  -78, -236,    0,  -87,    0, -122,
    0, -204, -236, -236,    0, -236, -236,    0,  -70,  -69,
 -247, -236, -236, -236, -236, -236, -236, -247,  -84, -236,
 -171,    0,    0,    0,    0, -196, -196,    0,    0,    0,
    0,    0,    0,    0, -171, -171, -171, -171, -171,  -67,
  -90,    0,  -64,  -62, -192,    0,  -76,  -87,    0,  -53,
    0, -192,    0,  -84,  -63, -236,    0, -247,  -52,    0,
 -247,  -90,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,  -49,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -49,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -48, -200,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -85,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -185,    0,    0,
    0,    0,  -47,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -44,  -36,
 -201,    0,    0,    0,    0,  -68,  -51,    0,    0,    0,
    0,    0,    0,    0, -169, -160, -150, -127, -120,    0,
 -165,    0,    0,    0,    0,    0, -153,  -37,    0,    0,
    0,    0,    0,  -35,    0,    0,    0,    0,    0,    0,
    0, -132,
};
static const YYINT yygindex[] = {                         0,
   -2,  212,    1,  -29,   -7,    0,  -30,  -10,   36,   59,
    0,  -81,  117,    0,    0,    0,    0,    0,  165,    0,
  -17,  -16,
};
#define YYTABLESIZE 244
static const YYINT yytable[] = {                         39,
   40,   60,   61,   63,    9,   67,  111,   45,   20,   36,
   68,   31,   73,   74,   52,   39,   40,   55,   79,    5,
   20,    8,   69,    7,   10,   62,   41,   70,   11,   12,
   42,   72,   89,  121,    6,   43,   44,   13,   14,   15,
  127,    1,   16,    2,   39,   40,  130,   17,   18,  132,
   39,   40,   39,   40,    8,   91,  110,   73,   74,  112,
   92,   28,   93,   95,   35,   31,   35,   76,   77,   35,
   31,  105,  106,  107,  108,  109,    8,   73,   74,   10,
   52,   75,   52,   11,   12,   73,   74,   29,  124,   78,
   73,   74,   13,   14,  120,  129,   47,   16,   47,   30,
   39,   40,   17,   18,   16,   48,   16,   48,   96,   97,
   16,   16,   25,   26,   27,   49,   14,   49,   14,   16,
   16,   16,   14,   14,   16,   66,   26,   27,   32,   16,
   16,   14,   14,   14,   98,   99,   14,    9,   50,    9,
   50,   14,   14,    9,    9,   51,   10,   51,   33,   34,
   11,   12,    9,    9,    9,   48,   50,    9,   51,   13,
   14,   15,    9,    9,   16,   53,   56,   54,   59,   17,
   18,   55,   55,   55,   55,   71,   55,   55,   80,   81,
   55,   88,   55,   87,   61,   55,   68,   90,   53,   53,
   53,   53,   55,   53,   53,  100,  101,   53,  115,   53,
  114,  118,   53,  119,  128,   54,   54,   54,   54,   53,
   54,   54,  122,  126,   54,  131,   54,   42,   41,   54,
    8,   40,   82,   83,   84,   85,   54,   73,   74,   44,
   46,   49,   45,  123,   94,    0,    0,    0,    0,    0,
    0,    0,    0,   86,
};
static const YYINT yycheck[] = {                         17,
   17,   32,  272,   33,    7,  266,   88,   18,    8,   17,
  271,   14,  262,  263,   25,   33,   33,   28,  268,  294,
   20,  269,  266,  268,  272,  295,  263,  271,  276,  277,
  267,   42,   62,  115,  267,  272,  273,  285,  286,  287,
  122,  293,  290,  295,   62,   62,  128,  295,  296,  131,
   68,   68,   70,   70,  269,   66,   87,  262,  263,   90,
   68,  267,   70,  268,  266,  266,  268,  264,  265,  271,
  271,   82,   83,   84,   85,   86,  269,  262,  263,  272,
  266,  266,  268,  276,  277,  262,  263,  267,  118,  266,
  262,  263,  285,  286,  287,  126,  266,  290,  268,  267,
  118,  118,  295,  296,  270,  266,  272,  268,   73,   74,
  276,  277,  261,  262,  263,  266,  270,  268,  272,  285,
  286,  287,  276,  277,  290,  261,  262,  263,  267,  295,
  296,  285,  286,  287,   76,   77,  290,  270,  266,  272,
  268,  295,  296,  276,  277,  266,  272,  268,  267,  272,
  276,  277,  285,  286,  287,  270,  266,  290,  266,  285,
  286,  287,  295,  296,  290,  262,  272,  263,  285,  295,
  296,  257,  258,  259,  260,  273,  262,  263,  268,  268,
  266,  268,  268,  267,  272,  271,  271,  266,  257,  258,
  259,  260,  278,  262,  263,  266,  266,  266,  289,  268,
  268,  266,  271,  266,  268,  257,  258,  259,  260,  278,
  262,  263,  289,  267,  266,  268,  268,  266,  266,  271,
  270,  266,  257,  258,  259,  260,  278,  262,  263,  266,
  268,   20,  268,  117,   70,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  278,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 297
#define YYUNDFTOKEN 322
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
"DEC","MUL","DIV","SEM","LB","RB","BLB","BRB","COMMA","ID","NUMBER","delim",
"whitespace","Func_print","Func_scan","EQUEL","MOD","EXP","NE","AND","OR","NOT",
"WHILE","DO","IF","THEN","ELSE","FOR","NEWLINE","ERRORCHAR","VOID","MAIN",
"TYPE","RETURN","IFX",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"illegal-symbol",
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
"Else_If : ELSE IF LB Bool RB Block_Stmt",
"Else_If_List : Else_If_List Else_If",
"Else_If_List : Else_If",
"Stmt : IF LB Bool RB Block_Stmt ELSE Block_Stmt",
"Stmt : RETURN Expr SEM",
"Stmt : IF LB Bool RB Block_Stmt Else_If_List",
"Stmt : IF LB Bool RB Block_Stmt Else_If_List ELSE Block_Stmt",
"Stmt : IF LB Bool RB Block_Stmt",
"Stmt : WHILE LB Bool RB Block_Stmt",
"Stmt : DO Block WHILE LB Bool RB SEM",
"Stmt : FOR LB For_First SEM For_Second SEM For_Third RB Block_Stmt",
"Stmt : Declaration_stmt",
"Stmt : Assignment_Stmt",
"Stmt : Func_print LB Expr RB SEM",
"Stmt : Func_scan LB ID RB SEM",
"Stmt : Self_add SEM",
"Stmt : Self_dec SEM",
"Self_add : ID ADD ADD",
"Self_dec : ID DEC DEC",
"Assignment_Stmt : ID EQ Expr SEM",
"Initial_declaration_list : Init_declarator",
"Initial_declaration_list : Initial_declaration_list COMMA Init_declarator",
"Init_declarator : ID",
"Init_declarator : Assignment",
"Assignment_list : Assignment",
"Assignment_list : Assignment_list COMMA Assignment",
"Assignment : ID EQ Expr",
"Assignment : Self_add",
"Assignment : Self_dec",
"Declaration_stmt : TYPE Initial_declaration_list SEM",
"Declaration_stmt : TYPE Assignment_list SEM",
"For_First : TYPE Assignment_list",
"For_First : Assignment_list",
"For_First :",
"For_Second : Bool",
"For_Second :",
"For_Third : Assignment_list",
"For_Third :",
"Bool : Expr LT Expr",
"Bool : Expr LE Expr",
"Bool : Expr GT Expr",
"Bool : Expr GE Expr",
"Bool : Expr EQUEL Expr",
"Bool : Expr",
"Expr : Expr ADD Term",
"Expr : Expr DEC Term",
"Expr : Term",
"Term : Term MUL Factor",
"Term : Term DIV Factor",
"Term : Factor",
"Factor : LB Expr RB",
"Factor : ID",
"Factor : NUMBER",
"Factor : DEC NUMBER",

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
#line 29 "test.y"
	{yyval.a=newast("Program",5,yystack.l_mark[-4].a,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);check(yyval.a);printf("\n打印syntax tree:\n");eval(yyval.a,0);printf("syntax tree打印完毕!\n\n");}
break;
case 2:
#line 31 "test.y"
	{yyval.a=newast("RETYPE",1,yystack.l_mark[0].a);printf("规约 RETYPE\n");}
break;
case 3:
#line 32 "test.y"
	{yyval.a=newast("RETYPE",1,yystack.l_mark[0].a);printf("规约 RETYPE\n");}
break;
case 4:
#line 34 "test.y"
	{yyval.a=newast("Block",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 block\n");}
break;
case 5:
#line 36 "test.y"
	{yyval.a=newast("Block_Stmt",1,yystack.l_mark[0].a);printf("规约 Block_Stmt\n");}
break;
case 6:
#line 37 "test.y"
	{yyval.a=newast("Block_Stmt",1,yystack.l_mark[0].a);printf("规约 Block_Stmt\n");}
break;
case 7:
#line 39 "test.y"
	{yyval.a=newast("Stmts",2,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Stmts\n");}
break;
case 8:
#line 40 "test.y"
	{yyval.a=newast("Stmts",0,-1);printf("规约 Stmts\n");}
break;
case 9:
#line 42 "test.y"
	{yyval.a=newast("Else_If",6,yystack.l_mark[-5].a,yystack.l_mark[-4].a,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Else_If\n");}
break;
case 10:
#line 44 "test.y"
	{yyval.a=newast("Else_If_List",2,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Else_If_List\n");}
break;
case 11:
#line 45 "test.y"
	{yyval.a=newast("Else_If_List",1,yystack.l_mark[0].a);printf("规约 Else_If_List\n");}
break;
case 12:
#line 47 "test.y"
	{yyval.a=newast("Stmt",7,yystack.l_mark[-6].a,yystack.l_mark[-5].a,yystack.l_mark[-4].a,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 13:
#line 48 "test.y"
	{yyval.a=newast("Stmt",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 14:
#line 49 "test.y"
	{yyval.a=newast("Stmt",6,yystack.l_mark[-5].a,yystack.l_mark[-4].a,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 15:
#line 50 "test.y"
	{yyval.a=newast("Stmt",8,yystack.l_mark[-7].a,yystack.l_mark[-6].a,yystack.l_mark[-5].a,yystack.l_mark[-4].a,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 16:
#line 51 "test.y"
	{yyval.a=newast("Stmt",5,yystack.l_mark[-4].a,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 17:
#line 52 "test.y"
	{yyval.a=newast("Stmt",5,yystack.l_mark[-4].a,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 18:
#line 53 "test.y"
	{yyval.a=newast("Stmt",7,yystack.l_mark[-6].a,yystack.l_mark[-5].a,yystack.l_mark[-4].a,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 19:
#line 54 "test.y"
	{yyval.a=newast("Stmt",9,yystack.l_mark[-8].a,yystack.l_mark[-7].a,yystack.l_mark[-6].a,yystack.l_mark[-5].a,yystack.l_mark[-4].a,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 20:
#line 55 "test.y"
	{yyval.a=newast("Stmt",1,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 21:
#line 56 "test.y"
	{yyval.a=newast("Stmt",1,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 22:
#line 57 "test.y"
	{yyval.a=newast("Stmt",5,yystack.l_mark[-4].a,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 23:
#line 58 "test.y"
	{yyval.a=newast("Stmt",5,yystack.l_mark[-4].a,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Stmt\n");}
break;
case 24:
#line 59 "test.y"
	{yyval.a=newast("Stmt",1,yystack.l_mark[-1].a);printf("规约 Stmt\n");}
break;
case 25:
#line 60 "test.y"
	{yyval.a=newast("Stmt",1,yystack.l_mark[-1].a);printf("规约 Stmt\n");}
break;
case 26:
#line 62 "test.y"
	{yyval.a=newast("Self_add",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Self_add\n");}
break;
case 27:
#line 64 "test.y"
	{yyval.a=newast("Self_dec",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Self_dec\n");}
break;
case 28:
#line 66 "test.y"
	{yyval.a=newast("Assignment_Stmt",4,yystack.l_mark[-3].a,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Assignment_Stmt\n");}
break;
case 29:
#line 68 "test.y"
	{yyval.a=newast("Initial_declaration_list",1,yystack.l_mark[0].a);printf("规约 Initial_declaration_list\n");}
break;
case 30:
#line 69 "test.y"
	{yyval.a=newast("Initial_declaration_list",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Initial_declaration_list\n");}
break;
case 31:
#line 71 "test.y"
	{yyval.a=newast("Init_declarator",1,yystack.l_mark[0].a);printf("规约 Init_declarator\n");}
break;
case 32:
#line 72 "test.y"
	{yyval.a=newast("Init_declarator",1,yystack.l_mark[0].a);printf("规约 Init_declarator\n");}
break;
case 33:
#line 74 "test.y"
	{yyval.a=newast("Assignment_list",1,yystack.l_mark[0].a);printf("规约 Assignment_list\n");}
break;
case 34:
#line 75 "test.y"
	{yyval.a=newast("Assignment_list",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Assignment_list\n");}
break;
case 35:
#line 77 "test.y"
	{yyval.a=newast("Assignment",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Assignment\n");}
break;
case 36:
#line 78 "test.y"
	{yyval.a=newast("Assignment",1,yystack.l_mark[0].a);printf("规约 Assignment\n");}
break;
case 37:
#line 79 "test.y"
	{yyval.a=newast("Assignment",1,yystack.l_mark[0].a);printf("规约 Assignment\n");}
break;
case 38:
#line 81 "test.y"
	{yyval.a=newast("Declaration_stmt",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Declaration_stmt\n");}
break;
case 39:
#line 82 "test.y"
	{yyval.a=newast("Declaration_stmt",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Declaration_stmt\n");}
break;
case 40:
#line 84 "test.y"
	{yyval.a=newast("For_First",2,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 For_First\n");}
break;
case 41:
#line 85 "test.y"
	{yyval.a=newast("For_First",1,yystack.l_mark[0].a);printf("规约 For_First\n");}
break;
case 42:
#line 86 "test.y"
	{yyval.a=newast("For_First",0,-1);printf("规约 For_First\n");}
break;
case 43:
#line 88 "test.y"
	{yyval.a=newast("For_Second",1,yystack.l_mark[0].a);printf("规约 For_Second\n");}
break;
case 44:
#line 89 "test.y"
	{yyval.a=newast("For_Second",0,-1);printf("规约 For_Second\n");}
break;
case 45:
#line 91 "test.y"
	{yyval.a=newast("For_Third",1,yystack.l_mark[0].a);printf("规约 For_Third\n");}
break;
case 46:
#line 92 "test.y"
	{yyval.a=newast("For_Third",0,-1);printf("规约 For_Third\n");}
break;
case 47:
#line 94 "test.y"
	{yyval.a=newast("Bool",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Bool\n");}
break;
case 48:
#line 95 "test.y"
	{yyval.a=newast("Bool",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Bool\n");}
break;
case 49:
#line 96 "test.y"
	{yyval.a=newast("Bool",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Bool\n");}
break;
case 50:
#line 97 "test.y"
	{yyval.a=newast("Bool",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Bool\n");}
break;
case 51:
#line 98 "test.y"
	{yyval.a=newast("Bool",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Bool\n");}
break;
case 52:
#line 99 "test.y"
	{yyval.a=newast("Bool",1,yystack.l_mark[0].a);printf("规约 Bool\n");}
break;
case 53:
#line 101 "test.y"
	{yyval.a=newast("Expr",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Expr\n");}
break;
case 54:
#line 102 "test.y"
	{yyval.a=newast("Expr",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Expr\n");}
break;
case 55:
#line 103 "test.y"
	{yyval.a=newast("Expr",1,yystack.l_mark[0].a);printf("规约 Expr\n");}
break;
case 56:
#line 105 "test.y"
	{yyval.a=newast("Term",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Term\n");}
break;
case 57:
#line 106 "test.y"
	{yyval.a=newast("Term",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Term\n");}
break;
case 58:
#line 107 "test.y"
	{yyval.a=newast("Term",1,yystack.l_mark[0].a);printf("规约 Term\n");}
break;
case 59:
#line 109 "test.y"
	{yyval.a=newast("Factor",3,yystack.l_mark[-2].a,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Factor\n");}
break;
case 60:
#line 110 "test.y"
	{yyval.a=newast("Factor",1,yystack.l_mark[0].a);printf("规约 Factor\n");}
break;
case 61:
#line 111 "test.y"
	{yyval.a=newast("Factor",1,yystack.l_mark[0].a);printf("规约 Factor\n");}
break;
case 62:
#line 112 "test.y"
	{yyval.a=newast("Factor",2,yystack.l_mark[-1].a,yystack.l_mark[0].a);printf("规约 Factor\n");}
break;
#line 817 "y.tab.c"
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

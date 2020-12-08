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
extern YYSTYPE yylval;

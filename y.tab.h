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
extern YYSTYPE yylval;

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
extern YYSTYPE yylval;

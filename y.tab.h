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

/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "yacc.y"

#include<unistd.h>
#include<stdio.h>   
#include <stdlib.h>
#include <stdarg.h>
#include "AST.h"
#include "symbol.h"
#include <string.h>
#include "MiddleCode.h"
#include "GoalCode.h"
int yyerror(char *s);
int yylex();
extern FILE * yyin;
extern int yyparse(void);
AST* root;

#line 87 "yacc.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_YACC_TAB_H_INCLUDED
# define YY_YY_YACC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SEM = 258,
    COMMA = 259,
    delim = 260,
    whitespace = 261,
    WHILE = 262,
    DO = 263,
    IF = 264,
    THEN = 265,
    ELSE = 266,
    FOR = 267,
    NEWLINE = 268,
    ERRORCHAR = 269,
    RETURN = 270,
    IFX = 271,
    SINGNALAND = 272,
    TYPE = 273,
    VOID = 274,
    ID = 275,
    NUMBER = 276,
    MAIN = 277,
    PRINT = 278,
    EQ = 279,
    OR = 280,
    AND = 281,
    LT = 282,
    LE = 283,
    GT = 284,
    GE = 285,
    EQUEL = 286,
    NE = 287,
    DEC = 288,
    ADD = 289,
    DIV = 290,
    STAR = 291,
    MOD = 292,
    EXP = 293,
    NOT = 294,
    LB = 295,
    RB = 296,
    MLB = 297,
    MRB = 298,
    BLB = 299,
    BRB = 300,
    UMINUS = 301,
    UPLUS = 302
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "yacc.y"

struct AST* a;
char* str;

#line 192 "yacc.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   162

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  138

#define YYUNDEFTOK  2
#define YYMAXUTOK   302


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    44,    44,    67,    75,    79,    84,    91,    95,   100,
     108,   112,   116,   120,   124,   130,   134,   138,   142,   146,
     151,   171,   177,   181,   188,   196,   200,   206,   210,   215,
     221,   229,   233,   241,   261,   265,   270,   274,   294,   298,
     302,   310,   314,   322,   327,   334,   341,   348,   355,   362,
     369,   374,   378,   385,   390,   395,   400,   405,   411,   418,
     425,   430,   437,   444,   451,   456,   460,   468,   472,   476,
     480
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SEM", "COMMA", "delim", "whitespace",
  "WHILE", "DO", "IF", "THEN", "ELSE", "FOR", "NEWLINE", "ERRORCHAR",
  "RETURN", "IFX", "SINGNALAND", "TYPE", "VOID", "ID", "NUMBER", "MAIN",
  "PRINT", "EQ", "OR", "AND", "LT", "LE", "GT", "GE", "EQUEL", "NE", "DEC",
  "ADD", "DIV", "STAR", "MOD", "EXP", "NOT", "LB", "RB", "MLB", "MRB",
  "BLB", "BRB", "UMINUS", "UPLUS", "$accept", "Result", "Program",
  "RETYPE", "Block", "Block_Stmt", "Stmts", "Stmt", "Assignment_Stmt",
  "Declarator", "Initial_declaration_list", "Init_declarator",
  "Initializer", "Declaration_stmt", "For_First", "For_Second",
  "For_Third", "logical_and_expr", "logical_or_expr", "Bool_expr", "Bool",
  "unary_expr", "unary_operator", "Expr", "Term", "POW", "Factor", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

#define YYPACT_NINF (-88)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      39,   -88,   -88,    21,   -88,    12,   -88,   -16,    11,   -34,
     -88,   -88,    -1,    20,   -34,    28,    43,    71,   -88,    10,
      44,   -88,    50,   -88,   -88,   -88,   -88,    71,   -88,   -88,
     -88,   -88,   -88,    71,    31,    66,    55,   -88,    71,    64,
      71,    33,     9,    67,    80,    82,    93,   -88,   -88,    71,
      94,    29,   -88,    71,    71,    71,    71,    71,    71,    71,
      90,   100,    77,   -88,   109,    86,    87,    10,   128,    61,
     -88,     2,   -88,    71,   -88,    10,   -30,   103,   -88,    15,
      66,    66,   -88,   -88,   -88,   -88,    71,    71,   112,    71,
      71,    71,    71,    71,    71,    71,   112,   110,    71,    71,
     104,   -88,    41,   -88,   -88,   146,   -88,   -88,    90,   -88,
     -88,   -88,    41,    41,    41,    41,    41,    41,   113,   139,
      71,   150,   -88,    41,   -88,   -88,   152,   112,    41,    71,
     -88,   -88,   116,    65,   112,    71,   -88,    41
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     5,     4,     0,     2,     0,     1,     0,     0,     0,
      10,     3,     0,     0,     0,     0,     0,     0,    56,     0,
      68,    69,     0,    54,    53,    57,    55,     0,     6,     9,
      19,    18,    65,     0,     0,    60,    64,    51,     0,     0,
       0,    34,     0,    22,     0,    27,     0,    25,    28,     0,
       0,     0,    52,     0,     0,     0,     0,     0,     0,     0,
      41,    43,     0,    39,    50,     0,     0,     0,     0,    31,
      14,     0,    21,     0,    30,     0,     0,     0,    67,     0,
      59,    58,    62,    61,    63,    66,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,     0,
       0,    23,    29,    26,    70,     0,    20,    40,    42,     7,
      15,     8,    44,    45,    46,    47,    48,    49,     0,    11,
       0,     0,    35,    33,    24,    13,     0,     0,    32,    38,
      16,    12,     0,     0,     0,     0,    17,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -88,   -88,   -88,   -88,    22,   -87,   -88,   147,   -88,    91,
     -88,    85,   -88,   -88,   -88,   -88,   -88,    74,   -88,   -39,
      76,   -31,   -88,   -12,    58,   -88,   -88
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,   109,   110,    12,   111,    30,    45,
      46,    47,    48,    31,    68,   121,   132,    60,    61,    62,
      63,    32,    33,    64,    35,    36,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      34,    66,    52,    54,    55,    42,    13,    14,    15,   119,
      10,    16,    70,   104,    17,    51,    18,    19,   106,    20,
      21,     6,    22,   100,     8,    82,    83,    84,    85,    69,
      43,    11,    23,    24,     7,    25,    39,    76,    26,    27,
     131,    79,    54,    55,    28,   101,    44,   136,    54,    55,
      18,    67,     9,    20,    21,    53,   118,     1,     2,   122,
      38,   102,    54,    55,    54,    55,    23,    24,    40,    25,
      78,    65,    26,    27,    54,    55,    34,   112,   113,   114,
     115,   116,   117,    41,    34,    99,    49,   123,    18,   135,
      50,    20,    21,    59,    54,    55,    74,    75,    54,    55,
      72,    56,    57,    58,    23,    24,    73,    25,   128,    71,
      26,    27,    80,    81,    77,    34,    86,   133,    88,    13,
      14,    15,    34,   137,    16,    87,    95,    17,    96,    18,
      19,    98,    20,    21,   120,    22,    89,    90,    91,    92,
      93,    94,    54,    55,   105,    23,    24,   124,    25,   125,
     127,    26,    27,   129,   126,   130,    10,   134,    97,    29,
     103,   108,   107
};

static const yytype_uint8 yycheck[] =
{
      12,    40,    33,    33,    34,    17,     7,     8,     9,    96,
      44,    12,     3,    43,    15,    27,    17,    18,     3,    20,
      21,     0,    23,    21,    40,    56,    57,    58,    59,    41,
      20,     9,    33,    34,    22,    36,    14,    49,    39,    40,
     127,    53,    33,    34,    45,    43,    36,   134,    33,    34,
      17,    18,    41,    20,    21,    24,    95,    18,    19,    98,
      40,    73,    33,    34,    33,    34,    33,    34,    40,    36,
      41,     7,    39,    40,    33,    34,    88,    89,    90,    91,
      92,    93,    94,    40,    96,    24,    42,    99,    17,    24,
      40,    20,    21,    38,    33,    34,     3,     4,    33,    34,
      20,    35,    36,    37,    33,    34,    24,    36,   120,    42,
      39,    40,    54,    55,    20,   127,    26,   129,    41,     7,
       8,     9,   134,   135,    12,    25,    40,    15,    41,    17,
      18,     3,    20,    21,    24,    23,    27,    28,    29,    30,
      31,    32,    33,    34,    41,    33,    34,    43,    36,     3,
      11,    39,    40,     3,    41,     3,    44,    41,    67,    12,
      75,    87,    86
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    19,    49,    50,    51,     0,    22,    40,    41,
      44,    52,    54,     7,     8,     9,    12,    15,    17,    18,
      20,    21,    23,    33,    34,    36,    39,    40,    45,    55,
      56,    61,    69,    70,    71,    72,    73,    74,    40,    52,
      40,    40,    71,    20,    36,    57,    58,    59,    60,    42,
      40,    71,    69,    24,    33,    34,    35,    36,    37,    38,
      65,    66,    67,    68,    71,     7,    67,    18,    62,    71,
       3,    42,    20,    24,     3,     4,    71,    20,    41,    71,
      72,    72,    69,    69,    69,    69,    26,    25,    41,    27,
      28,    29,    30,    31,    32,    40,    41,    57,     3,    24,
      21,    43,    71,    59,    43,    41,     3,    68,    65,    52,
      53,    55,    71,    71,    71,    71,    71,    71,    67,    53,
      24,    63,    67,    71,    43,     3,    41,    11,    71,     3,
       3,    53,    64,    71,    41,    24,    53,    71
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    51,    51,    52,    53,    53,    54,
      54,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      56,    57,    57,    57,    57,    58,    58,    59,    59,    60,
      61,    62,    62,    62,    62,    63,    63,    64,    64,    65,
      65,    66,    66,    67,    68,    68,    68,    68,    68,    68,
      68,    69,    69,    70,    70,    70,    70,    70,    71,    71,
      71,    72,    72,    72,    72,    73,    73,    74,    74,    74,
      74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     5,     1,     1,     3,     1,     1,     2,
       0,     5,     7,     5,     3,     5,     7,     9,     1,     1,
       4,     2,     1,     3,     4,     1,     3,     1,     1,     3,
       3,     1,     4,     3,     0,     1,     0,     3,     0,     1,
       3,     1,     3,     1,     3,     3,     3,     3,     3,     3,
       1,     1,     2,     1,     1,     1,     1,     1,     3,     3,
       1,     3,     3,     3,     1,     1,     3,     3,     1,     1,
       4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 45 "yacc.y"
    {
        root = (yyvsp[0].a);
        cout<<"语法树："<<endl;
        root->print_tree(root, 0);
        cout<<endl;
        SymbolTable* symbolTable = new SymbolTable(NULL, true);
        SymbolTable* table = symbolTable->buildSymbolTable(root);
        cout<<"符号表："<<endl;
        table->printSymbolTable();
        cout<<endl;
        MiddleCode* mediate = new MiddleCode((RootASTNode*)root, table);  
        mediate->Generate(mediate->getRoot(), mediate->getTable());
        cout<<"四元式："<<endl;
        mediate->printQuads();
        cout<<endl;
        GoalCode* asmgenerator = new GoalCode(mediate->getQuads(), mediate->getTempVars(), mediate->getTable());
        asmgenerator->generate();
        cout << asmgenerator->getAsmCode();


    }
#line 1488 "yacc.tab.c"
    break;

  case 3:
#line 68 "yacc.y"
    {
        RootASTNode* temp = new RootASTNode();
        temp->add_child_node((yyvsp[0].a));
        temp->return_type = (yyvsp[-4].str);
        (yyval.a) = temp;
    }
#line 1499 "yacc.tab.c"
    break;

  case 4:
#line 76 "yacc.y"
    {
        (yyval.str) = strdup((yyvsp[0].str));
    }
#line 1507 "yacc.tab.c"
    break;

  case 5:
#line 80 "yacc.y"
    {
        (yyval.str) = strdup((yyvsp[0].str));
    }
#line 1515 "yacc.tab.c"
    break;

  case 6:
#line 85 "yacc.y"
    {
        AST* compStmt = new StmtASTNode(StmtType::compStmt);
        compStmt->add_child_node((yyvsp[-1].a));
        (yyval.a) = compStmt;
    }
#line 1525 "yacc.tab.c"
    break;

  case 7:
#line 92 "yacc.y"
    {
        (yyval.a) = (yyvsp[0].a);
    }
#line 1533 "yacc.tab.c"
    break;

  case 8:
#line 96 "yacc.y"
    {
        (yyval.a) = (yyvsp[0].a);
    }
#line 1541 "yacc.tab.c"
    break;

  case 9:
#line 101 "yacc.y"
    {
        if ((yyvsp[-1].a) == NULL) (yyval.a) = (yyvsp[0].a);
        else {
            (yyvsp[-1].a)->get_last_peer_node()->add_peer_node((yyvsp[0].a));
        }
    }
#line 1552 "yacc.tab.c"
    break;

  case 10:
#line 108 "yacc.y"
    {
        (yyval.a) = NULL;
    }
#line 1560 "yacc.tab.c"
    break;

  case 11:
#line 113 "yacc.y"
    {
        (yyval.a) = new SelectASTNode((char*)"", SelectType::_if, (yyvsp[0].a), (yyvsp[-2].a));
    }
#line 1568 "yacc.tab.c"
    break;

  case 12:
#line 117 "yacc.y"
    {
        (yyval.a) = new SelectASTNode((char*)"", SelectType::_if, (yyvsp[-2].a), (yyvsp[-4].a), (yyvsp[0].a));
    }
#line 1576 "yacc.tab.c"
    break;

  case 13:
#line 121 "yacc.y"
    {
        (yyval.a) = new PrintASTNode((char*)(yyvsp[-2].str));
    }
#line 1584 "yacc.tab.c"
    break;

  case 14:
#line 125 "yacc.y"
    {
        AST* temp = new StmtASTNode(StmtType::returnStmt);
        temp->add_child_node((yyvsp[-1].a));
        (yyval.a) = temp;
    }
#line 1594 "yacc.tab.c"
    break;

  case 15:
#line 131 "yacc.y"
    {
        (yyval.a) = new LoopASTNode((char*)"", LoopType::_while, (yyvsp[0].a), (yyvsp[-2].a), true);
    }
#line 1602 "yacc.tab.c"
    break;

  case 16:
#line 135 "yacc.y"
    {
        (yyval.a) = new LoopASTNode((char*)"", LoopType::_while, (yyvsp[-5].a), (yyvsp[-2].a), true);
    }
#line 1610 "yacc.tab.c"
    break;

  case 17:
#line 139 "yacc.y"
    {
        (yyval.a) = new LoopASTNode((char*)"", LoopType::_for, (yyvsp[0].a), (yyvsp[-6].a), (yyvsp[-4].a), (yyvsp[-2].a));
    }
#line 1618 "yacc.tab.c"
    break;

  case 18:
#line 143 "yacc.y"
    {
        (yyval.a) = (yyvsp[0].a);
    }
#line 1626 "yacc.tab.c"
    break;

  case 19:
#line 147 "yacc.y"
    {
        (yyval.a) = (yyvsp[0].a);
    }
#line 1634 "yacc.tab.c"
    break;

  case 20:
#line 152 "yacc.y"
    {
        AST* temp = NULL;
        if ((yyvsp[-3].a)->nodeType == ASTNodeType::op) {
            OperatorASTNode* left = (OperatorASTNode*)(yyvsp[-3].a);
            if (left->type == opType::GetArrayValue) {
                temp = new OperatorASTNode((char*)"=", opType::AssignArray);
            } else {
                temp = new OperatorASTNode((char*)"=", opType::Assignop);
            }
        }
        else {
            temp = new OperatorASTNode((char*)"=", opType::Assignop);
        }
        temp->add_child_node((yyvsp[-3].a));
        (yyvsp[-3].a)->add_peer_node((yyvsp[-1].a));
        (yyvsp[-1].a)->set_parent(temp);
        (yyval.a) = temp;
    }
#line 1657 "yacc.tab.c"
    break;

  case 21:
#line 172 "yacc.y"
    {
        DefVarASTNode* var = new DefVarASTNode((char*)(yyvsp[0].str));
        var->set_type((char*)("integer pointer"));
        (yyval.a) = var;
    }
#line 1667 "yacc.tab.c"
    break;

  case 22:
#line 178 "yacc.y"
    {
        (yyval.a) = new DefVarASTNode((yyvsp[0].str));
    }
#line 1675 "yacc.tab.c"
    break;

  case 23:
#line 182 "yacc.y"
    {
        DefVarASTNode* var = new DefVarASTNode((char*)(yyvsp[-2].str));
        var->set_type((char*)("array"));
        var->set_array_length(NULL);
        (yyval.a) = var;
    }
#line 1686 "yacc.tab.c"
    break;

  case 24:
#line 189 "yacc.y"
    {
        DefVarASTNode* var = new DefVarASTNode((char*)(yyvsp[-3].str));
        var->set_type((char*)("array"));
        var->set_array_length((yyvsp[-1].str));
        (yyval.a) = var;
    }
#line 1697 "yacc.tab.c"
    break;

  case 25:
#line 197 "yacc.y"
    {
        (yyval.a) = (yyvsp[0].a);
    }
#line 1705 "yacc.tab.c"
    break;

  case 26:
#line 201 "yacc.y"
    {
        (yyvsp[-2].a)->get_last_peer_node()->add_peer_node((yyvsp[0].a));
        (yyval.a) = (yyvsp[-2].a);
    }
#line 1714 "yacc.tab.c"
    break;

  case 27:
#line 207 "yacc.y"
    {
        (yyval.a) = (yyvsp[0].a);
    }
#line 1722 "yacc.tab.c"
    break;

  case 28:
#line 211 "yacc.y"
    {
        (yyval.a) = (yyvsp[0].a);
    }
#line 1730 "yacc.tab.c"
    break;

  case 29:
#line 216 "yacc.y"
    {
        (yyvsp[-2].a)->add_child_node((yyvsp[0].a));
        (yyval.a) = (yyvsp[-2].a);
    }
#line 1739 "yacc.tab.c"
    break;

  case 30:
#line 222 "yacc.y"
    {
        DefVarASTNode* temp = (DefVarASTNode*)(yyvsp[-1].a);
        if(temp->type == symbolType::unset)
            temp->set_type((yyvsp[-2].str));
        (yyval.a) = temp;
    }
#line 1750 "yacc.tab.c"
    break;

  case 31:
#line 230 "yacc.y"
    {
        (yyval.a) = (yyvsp[0].a);
    }
#line 1758 "yacc.tab.c"
    break;

  case 32:
#line 234 "yacc.y"
    {
        DefVarASTNode* temp = (DefVarASTNode*)(yyvsp[-2].a);
        if(temp->type == symbolType::unset)
            temp->set_type((yyvsp[-3].str));
        (yyvsp[-2].a)->add_child_node((yyvsp[0].a));
        (yyval.a) = temp;
    }
#line 1770 "yacc.tab.c"
    break;

  case 33:
#line 242 "yacc.y"
    {
        AST* temp = NULL;
        if ((yyvsp[-2].a)->nodeType == ASTNodeType::op) {
            OperatorASTNode* left = (OperatorASTNode*)(yyvsp[-2].a);
            if (left->type == opType::GetArrayValue) {
                temp = new OperatorASTNode((char*)"=", opType::AssignArray);
            } else {
                temp = new OperatorASTNode((char*)"=", opType::Assignop);
            }
        }
        else {
            temp = new OperatorASTNode((char*)"=", opType::Assignop);
        }
        temp->add_child_node((yyvsp[-2].a));
        (yyvsp[-2].a)->add_peer_node((yyvsp[0].a));
        (yyvsp[0].a)->set_parent(temp);
        (yyval.a) = temp;
    }
#line 1793 "yacc.tab.c"
    break;

  case 34:
#line 261 "yacc.y"
    {
        (yyval.a) = NULL;
    }
#line 1801 "yacc.tab.c"
    break;

  case 35:
#line 266 "yacc.y"
    {
        (yyval.a) = (yyvsp[0].a);
    }
#line 1809 "yacc.tab.c"
    break;

  case 36:
#line 270 "yacc.y"
    {
        (yyval.a) = NULL;
    }
#line 1817 "yacc.tab.c"
    break;

  case 37:
#line 275 "yacc.y"
    {
        AST* temp = NULL;
        if ((yyvsp[-2].a)->nodeType == ASTNodeType::op) {
            OperatorASTNode* left = (OperatorASTNode*)(yyvsp[-2].a);
            if (left->type == opType::GetArrayValue) {
                temp = new OperatorASTNode((char*)"=", opType::AssignArray);
            } else {
                temp = new OperatorASTNode((char*)"=", opType::Assignop);
            }
        }
        else {
            temp = new OperatorASTNode((char*)"=", opType::Assignop);
        }
        temp->add_child_node((yyvsp[-2].a));
        (yyvsp[-2].a)->add_peer_node((yyvsp[0].a));
        (yyvsp[0].a)->set_parent(temp);
        (yyval.a) = temp;
    }
#line 1840 "yacc.tab.c"
    break;

  case 38:
#line 294 "yacc.y"
    {
        (yyval.a) = NULL;
    }
#line 1848 "yacc.tab.c"
    break;

  case 39:
#line 299 "yacc.y"
    {
        (yyval.a) = (yyvsp[0].a);
    }
#line 1856 "yacc.tab.c"
    break;

  case 40:
#line 303 "yacc.y"
    {
        AST* temp = new OperatorASTNode((char*)"&&", opType::And);
        temp->add_child_node((yyvsp[-2].a));
        (yyvsp[-2].a)->add_peer_node((yyvsp[0].a));
        (yyval.a) = temp;
    }
#line 1867 "yacc.tab.c"
    break;

  case 41:
#line 311 "yacc.y"
    {
        (yyval.a) = (yyvsp[0].a);
    }
#line 1875 "yacc.tab.c"
    break;

  case 42:
#line 315 "yacc.y"
    {
        AST* temp = new OperatorASTNode((char*)"||", opType::Or);
        temp->add_child_node((yyvsp[-2].a));
        (yyvsp[-2].a)->add_peer_node((yyvsp[0].a));
        (yyval.a) = temp;
    }
#line 1886 "yacc.tab.c"
    break;

  case 43:
#line 323 "yacc.y"
    {
        (yyval.a) = (yyvsp[0].a);
    }
#line 1894 "yacc.tab.c"
    break;

  case 44:
#line 328 "yacc.y"
    {
        AST* temp = new OperatorASTNode((yyvsp[-1].str), opType::Relop);
        temp->add_child_node((yyvsp[-2].a));
        (yyvsp[-2].a)->add_peer_node((yyvsp[0].a));
        (yyval.a) = temp;
    }
#line 1905 "yacc.tab.c"
    break;

  case 45:
#line 335 "yacc.y"
    {
        AST* temp = new OperatorASTNode((yyvsp[-1].str), opType::Relop);
        temp->add_child_node((yyvsp[-2].a));
        (yyvsp[-2].a)->add_peer_node((yyvsp[0].a));
        (yyval.a) = temp;
    }
#line 1916 "yacc.tab.c"
    break;

  case 46:
#line 342 "yacc.y"
    {
        AST* temp = new OperatorASTNode((yyvsp[-1].str), opType::Relop);
        temp->add_child_node((yyvsp[-2].a));
        (yyvsp[-2].a)->add_peer_node((yyvsp[0].a));
        (yyval.a) = temp;
    }
#line 1927 "yacc.tab.c"
    break;

  case 47:
#line 349 "yacc.y"
    {
        AST* temp = new OperatorASTNode((yyvsp[-1].str), opType::Relop);
        temp->add_child_node((yyvsp[-2].a));
        (yyvsp[-2].a)->add_peer_node((yyvsp[0].a));
        (yyval.a) = temp;
    }
#line 1938 "yacc.tab.c"
    break;

  case 48:
#line 356 "yacc.y"
    {
        AST* temp = new OperatorASTNode((yyvsp[-1].str), opType::Relop);
        temp->add_child_node((yyvsp[-2].a));
        (yyvsp[-2].a)->add_peer_node((yyvsp[0].a));
        (yyval.a) = temp;
    }
#line 1949 "yacc.tab.c"
    break;

  case 49:
#line 363 "yacc.y"
    {
        AST* temp = new OperatorASTNode((yyvsp[-1].str), opType::Relop);
        temp->add_child_node((yyvsp[-2].a));
        (yyvsp[-2].a)->add_peer_node((yyvsp[0].a));
        (yyval.a) = temp;
    }
#line 1960 "yacc.tab.c"
    break;

  case 50:
#line 370 "yacc.y"
    {
        (yyval.a) = (yyvsp[0].a);
    }
#line 1968 "yacc.tab.c"
    break;

  case 51:
#line 375 "yacc.y"
    {
        (yyval.a) = (yyvsp[0].a);
    }
#line 1976 "yacc.tab.c"
    break;

  case 52:
#line 379 "yacc.y"
    {
        AST* temp = (yyvsp[-1].a);
        temp->add_child_node((yyvsp[0].a));
        (yyval.a) = temp;
    }
#line 1986 "yacc.tab.c"
    break;

  case 53:
#line 386 "yacc.y"
    {
        AST* temp = new OperatorASTNode((char*)"+", opType::Orgative);
        (yyval.a) = temp;
    }
#line 1995 "yacc.tab.c"
    break;

  case 54:
#line 391 "yacc.y"
    {
        AST* temp = new OperatorASTNode((char*)"-", opType::Negative);
        (yyval.a) = temp;
    }
#line 2004 "yacc.tab.c"
    break;

  case 55:
#line 396 "yacc.y"
    {
        AST* temp = new OperatorASTNode((char*)"!", opType::Not);
        (yyval.a) = temp;
    }
#line 2013 "yacc.tab.c"
    break;

  case 56:
#line 401 "yacc.y"
    {
        AST* op = new OperatorASTNode((char*)"&", opType::SingalAnd);
        (yyval.a) = op;
    }
#line 2022 "yacc.tab.c"
    break;

  case 57:
#line 406 "yacc.y"
    {
        AST* temp = new OperatorASTNode((char*)"*", opType::GetValue);
        (yyval.a) = temp;
    }
#line 2031 "yacc.tab.c"
    break;

  case 58:
#line 412 "yacc.y"
    {
        AST* temp = new OperatorASTNode((char*)"+", opType::Plus);
        temp->add_child_node((yyvsp[-2].a));
        (yyvsp[-2].a)->add_peer_node((yyvsp[0].a));
        (yyval.a) = temp;
    }
#line 2042 "yacc.tab.c"
    break;

  case 59:
#line 419 "yacc.y"
    {
        AST* temp = new OperatorASTNode((char*)"-", opType::Minus);
        temp->add_child_node((yyvsp[-2].a));
        (yyvsp[-2].a)->add_peer_node((yyvsp[0].a));
        (yyval.a) = temp;
    }
#line 2053 "yacc.tab.c"
    break;

  case 60:
#line 426 "yacc.y"
    {
        (yyval.a) = (yyvsp[0].a);
    }
#line 2061 "yacc.tab.c"
    break;

  case 61:
#line 431 "yacc.y"
    {
        AST* temp = new OperatorASTNode((char*)"*", opType::Times);
        temp->add_child_node((yyvsp[-2].a));
        (yyvsp[-2].a)->add_peer_node((yyvsp[0].a));
        (yyval.a) = temp;
    }
#line 2072 "yacc.tab.c"
    break;

  case 62:
#line 438 "yacc.y"
    {
        AST* temp = new OperatorASTNode((char*)"/", opType::Div);
        temp->add_child_node((yyvsp[-2].a));
        (yyvsp[-2].a)->add_peer_node((yyvsp[0].a));
        (yyval.a) = temp;
    }
#line 2083 "yacc.tab.c"
    break;

  case 63:
#line 445 "yacc.y"
    {
        AST* temp = new OperatorASTNode((char*)"%", opType::Mod);
        temp->add_child_node((yyvsp[-2].a));
        (yyvsp[-2].a)->add_peer_node((yyvsp[0].a));
        (yyval.a) = temp;
    }
#line 2094 "yacc.tab.c"
    break;

  case 64:
#line 452 "yacc.y"
    {
        (yyval.a) = (yyvsp[0].a);
    }
#line 2102 "yacc.tab.c"
    break;

  case 65:
#line 457 "yacc.y"
    {
        (yyval.a) = (yyvsp[0].a);
    }
#line 2110 "yacc.tab.c"
    break;

  case 66:
#line 461 "yacc.y"
    {
        AST* temp = new OperatorASTNode((char*)"^", opType::Power);
        temp->add_child_node((yyvsp[-2].a));
        (yyvsp[-2].a)->add_peer_node((yyvsp[0].a));
        (yyval.a) = temp;
    }
#line 2121 "yacc.tab.c"
    break;

  case 67:
#line 469 "yacc.y"
    {
        (yyval.a) = (yyvsp[-1].a);
    }
#line 2129 "yacc.tab.c"
    break;

  case 68:
#line 473 "yacc.y"
    {
        (yyval.a) = new VarASTNode((yyvsp[0].str));
    }
#line 2137 "yacc.tab.c"
    break;

  case 69:
#line 477 "yacc.y"
    {
        (yyval.a) = new LiteralASTNode((yyvsp[0].str));
    }
#line 2145 "yacc.tab.c"
    break;

  case 70:
#line 481 "yacc.y"
    {
        AST* op = new OperatorASTNode((char*)"[]", opType::GetArrayValue);
        AST* var = new VarASTNode((char*)(yyvsp[-3].str));
        op->add_child_node(var);
        var->add_peer_node((yyvsp[-1].a));
        (yyval.a) = op;
    }
#line 2157 "yacc.tab.c"
    break;


#line 2161 "yacc.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 489 "yacc.y"


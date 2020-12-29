/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    EQ = 278,
    OR = 279,
    AND = 280,
    LT = 281,
    LE = 282,
    GT = 283,
    GE = 284,
    EQUEL = 285,
    NE = 286,
    DEC = 287,
    ADD = 288,
    DIV = 289,
    STAR = 290,
    MOD = 291,
    EXP = 292,
    NOT = 293,
    LB = 294,
    RB = 295,
    MLB = 296,
    MRB = 297,
    BLB = 298,
    BRB = 299,
    UMINUS = 300,
    UPLUS = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "yacc.y"

struct AST* a;
char* str;

#line 109 "yacc.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */

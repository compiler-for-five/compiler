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

#ifndef YY_YY_TEST_TAB_H_INCLUDED
# define YY_YY_TEST_TAB_H_INCLUDED
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
    LT = 258,
    LE = 259,
    GT = 260,
    GE = 261,
    EQ = 262,
    ADD = 263,
    DEC = 264,
    STAR = 265,
    DIV = 266,
    SEM = 267,
    LB = 268,
    RB = 269,
    MLB = 270,
    MRB = 271,
    BLB = 272,
    BRB = 273,
    COMMA = 274,
    ID = 275,
    NUMBER = 276,
    delim = 277,
    whitespace = 278,
    Func_print = 279,
    Func_scan = 280,
    EQUEL = 281,
    MOD = 282,
    EXP = 283,
    NE = 284,
    AND = 285,
    OR = 286,
    NOT = 287,
    WHILE = 288,
    DO = 289,
    IF = 290,
    THEN = 291,
    ELSE = 292,
    FOR = 293,
    NEWLINE = 294,
    ERRORCHAR = 295,
    VOID = 296,
    MAIN = 297,
    TYPE = 298,
    RETURN = 299,
    IFX = 300,
    SINGNALAND = 301,
    UMINUS = 302,
    UPLUS = 303
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 7 "test.y"

struct ast* a;

#line 110 "test.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TEST_TAB_H_INCLUDED  */

/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with EVAL_ or eval_.  They are
   private implementation details that can be changed or removed.  */

#ifndef EVAL_EVAL_C_USERS_CARLO_DOCUMENTS_ESCRITORIO_BISONFLEXMULTIPLEPARSERS_BOTH_EVAL_TAB_H_INCLUDED
# define EVAL_EVAL_C_USERS_CARLO_DOCUMENTS_ESCRITORIO_BISONFLEXMULTIPLEPARSERS_BOTH_EVAL_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef EVALDEBUG
# define EVALDEBUG 0
#endif
#if EVALDEBUG
extern int evaldebug;
#endif
/* "%code requires" blocks.  */
#line 8 "../eval/eval.y"

  typedef void* evalscan_t;

#line 53 "C:\\Users\\carlo\\Documents\\Escritorio\\BisonFlexMultipleParsers\\both\\eval.tab.h"

/* Token kinds.  */
#ifndef EVALTOKENTYPE
# define EVALTOKENTYPE
  enum evaltokentype
  {
    EVALEMPTY = -2,
    EVALEOF = 0,                     /* "end of file"  */
    EVALerror = 256,                 /* error  */
    EVALUNDEF = 257,                 /* "invalid token"  */
    NUMBER = 258,                  /* NUMBER  */
    UNOP = 259                     /* UNOP  */
  };
  typedef enum evaltokentype evaltoken_kind_t;
#endif

/* Value type.  */
#if ! defined EVALSTYPE && ! defined EVALSTYPE_IS_DECLARED
typedef int EVALSTYPE;
# define EVALSTYPE_IS_TRIVIAL 1
# define EVALSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined EVALLTYPE && ! defined EVALLTYPE_IS_DECLARED
typedef struct EVALLTYPE EVALLTYPE;
struct EVALLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define EVALLTYPE_IS_DECLARED 1
# define EVALLTYPE_IS_TRIVIAL 1
#endif




int evalparse (evalscan_t scanner);


#endif /* !EVAL_EVAL_C_USERS_CARLO_DOCUMENTS_ESCRITORIO_BISONFLEXMULTIPLEPARSERS_BOTH_EVAL_TAB_H_INCLUDED  */

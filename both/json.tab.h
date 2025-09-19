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
   especially those whose name start with JSON_ or json_.  They are
   private implementation details that can be changed or removed.  */

#ifndef JSON_JSON_C_USERS_CARLO_DOCUMENTS_ESCRITORIO_BISONFLEXMULTIPLEPARSERS_BOTH_JSON_TAB_H_INCLUDED
# define JSON_JSON_C_USERS_CARLO_DOCUMENTS_ESCRITORIO_BISONFLEXMULTIPLEPARSERS_BOTH_JSON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef JSONDEBUG
# define JSONDEBUG 0
#endif
#if JSONDEBUG
extern int jsondebug;
#endif
/* "%code requires" blocks.  */
#line 8 "../json/json.y"

	typedef void* jsonscan_t;

#line 53 "C:\\Users\\carlo\\Documents\\Escritorio\\BisonFlexMultipleParsers\\both\\json.tab.h"

/* Token kinds.  */
#ifndef JSONTOKENTYPE
# define JSONTOKENTYPE
  enum jsontokentype
  {
    JSONEMPTY = -2,
    JSONEOF = 0,                     /* "end of file"  */
    JSONerror = 256,                 /* error  */
    JSONUNDEF = 257,                 /* "invalid token"  */
    JSON_TOK_Comma = 258,          /* JSON_TOK_Comma  */
    JSON_TOK_Semicolon = 259,      /* JSON_TOK_Semicolon  */
    JSON_TOK_True = 260,           /* JSON_TOK_True  */
    JSON_TOK_False = 261,          /* JSON_TOK_False  */
    JSON_TOK_Null = 262,           /* JSON_TOK_Null  */
    JSON_TOK_Bracket0 = 263,       /* JSON_TOK_Bracket0  */
    JSON_TOK_Bracket1 = 264,       /* JSON_TOK_Bracket1  */
    JSON_TOK_Curly0 = 265,         /* JSON_TOK_Curly0  */
    JSON_TOK_Curly1 = 266,         /* JSON_TOK_Curly1  */
    JSON_TOK_String = 267,         /* JSON_TOK_String  */
    JSON_TOK_Number = 268,         /* JSON_TOK_Number  */
    JSON_TOK_Ws = 269              /* JSON_TOK_Ws  */
  };
  typedef enum jsontokentype jsontoken_kind_t;
#endif

/* Value type.  */
#if ! defined JSONSTYPE && ! defined JSONSTYPE_IS_DECLARED
typedef int JSONSTYPE;
# define JSONSTYPE_IS_TRIVIAL 1
# define JSONSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined JSONLTYPE && ! defined JSONLTYPE_IS_DECLARED
typedef struct JSONLTYPE JSONLTYPE;
struct JSONLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define JSONLTYPE_IS_DECLARED 1
# define JSONLTYPE_IS_TRIVIAL 1
#endif




int jsonparse (jsonscan_t scanner);


#endif /* !JSON_JSON_C_USERS_CARLO_DOCUMENTS_ESCRITORIO_BISONFLEXMULTIPLEPARSERS_BOTH_JSON_TAB_H_INCLUDED  */

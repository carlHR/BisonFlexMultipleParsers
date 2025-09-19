%define api.pure full
%locations
%param { yyscan_t scanner }

%code top {
	#include <stdio.h>
} 
%code requires {
	typedef void* yyscan_t;
}
%code {
    // Source for json's syntax: https://www.json.org/json-en.html
	int yylex(YYSTYPE* yylvalp, YYLTYPE* yyllocp, yyscan_t scanner);
	void yyerror(YYLTYPE* yyllocp, yyscan_t unused, const char* msg);
}

%token JSON_TOK_Comma
%token JSON_TOK_Semicolon
%token JSON_TOK_True
%token JSON_TOK_False
%token JSON_TOK_Null
%token JSON_TOK_Bracket0
%token JSON_TOK_Bracket1
%token JSON_TOK_Curly0
%token JSON_TOK_Curly1
%token JSON_TOK_String
%token JSON_TOK_Number
%token JSON_TOK_Ws
%start json

%%

json
    : element
    ;

value
    : object
    | array
    | JSON_TOK_String
    | JSON_TOK_Number
    | JSON_TOK_True
    | JSON_TOK_False
    | JSON_TOK_Null
    ;

object
    : JSON_TOK_Curly0 ws JSON_TOK_Curly1
    | JSON_TOK_Curly0 members JSON_TOK_Curly1
    ;

members
    : member
    | member JSON_TOK_Comma members
    ;

member
    : ws JSON_TOK_String ws JSON_TOK_Semicolon element
    ;

array
    : JSON_TOK_Bracket0 ws JSON_TOK_Bracket1
    | JSON_TOK_Bracket0 elements JSON_TOK_Bracket1
    ;

elements
    : element
    | element JSON_TOK_Comma elements
    ;

element
    : ws value ws
    ;

ws
    : %empty
    | JSON_TOK_Ws
    ;

%%

void yyerror(YYLTYPE* yyllocp, yyscan_t unused, const char* msg) {
  fprintf(stderr, "[%d:%d]: %s\n",
				  yyllocp->first_line, yyllocp->first_column, msg);
}

%option noinput nounput noyywrap 8bit nodefault 
%option yylineno
%option reentrant bison-bridge bison-locations

%{
	#include <stdlib.h> 
	#include <string.h>
	#include "json.tab.h" 
	
	#define YY_USER_ACTION                                             \
	yylloc->first_line = yylloc->last_line;                            \
	yylloc->first_column = yylloc->last_column;                        \
	if (yylloc->last_line == yylineno)                                 \
		yylloc->last_column += yyleng;                                 \
	else {                                                             \
		yylloc->last_line = yylineno;                                  \
		yylloc->last_column = yytext + yyleng - strrchr(yytext, '\n'); \
	}
%}

JSONLex_Comma ","
JSONLex_Semicolon ":"
JSONLex_True "true"
JSONLex_False "false"
JSONLex_Null "null"
JSONLex_Bracket0 "["
JSONLex_Bracket1 "]"
JSONLex_Curly0 "{"
JSONLex_Curly1 "}"
JSONLex_Escape \"|\\|\/|b|f|n|r|t|u[0-9a-fA-F]{4}
JSONLex_Char [^\\"]|\\{JSONLex_Escape}
JSONLex_String \"{JSONLex_Char}*\"
JSONLex_Integer "-"?[0-9]|"-"?[1-9][0-9]+
JSONLex_Fraction "."[0-9]+
JSONLex_Exponent [eE][+-]?[0-9]+
JSONLex_Number {JSONLex_Integer}{JSONLex_Fraction}?{JSONLex_Exponent}?
JSONLex_Ws [ \t\n\r]

%%
{JSONLex_Comma} {printf("Comma\n"); return JSON_TOK_Comma;}
{JSONLex_Semicolon} {printf("Semicolon\n"); return JSON_TOK_Semicolon;}
{JSONLex_True} {printf("True\n"); return JSON_TOK_True;}
{JSONLex_False} {printf("False\n"); return JSON_TOK_False;}
{JSONLex_Null} {printf("Null\n"); return JSON_TOK_Null;}
{JSONLex_Bracket0} {printf("Bracket0\n"); return JSON_TOK_Bracket0;}
{JSONLex_Bracket1} {printf("Bracket1\n"); return JSON_TOK_Bracket1;}
{JSONLex_Curly0} {printf("Curly0\n"); return JSON_TOK_Curly0;}
{JSONLex_Curly1} {printf("Curly1\n"); return JSON_TOK_Curly1;}
{JSONLex_String} {printf("String\n"); return JSON_TOK_String;}
{JSONLex_Number} {printf("Number\n"); return JSON_TOK_Number;}
{JSONLex_Ws}* {printf("Ws\n"); return JSON_TOK_Ws;}
<*>.|\n {printf("Error... Default rule\n");}

%%

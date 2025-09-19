#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "eval.h"
#if !YYDEBUG
  static int yydebug;
#endif

/*
  Original Example from this SO answer: https://stackoverflow.com/a/48879103/14956120
  Anything inside this folder can be executed by running the batch file on windows (msys2)
  then executing app.exe
*/

int main(int argc, char* argv[]) {
  yyscan_t scanner;          
  yylex_init(&scanner);
  
  do {
    switch (getopt(argc, argv, "sp")) {
      case -1: break;
      case 's': yyset_debug(1, scanner); continue;
      case 'p': yydebug = 1; continue;
      default: exit(1);
    }
    break;
  } while(1);

  yyparse(scanner);          
  yylex_destroy(scanner);    
  return 0;
}

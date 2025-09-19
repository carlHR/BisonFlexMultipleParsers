@echo off

bison --defines=eval.tab.h -o eval.tab.c ./eval.y
lex --header-file=eval.lex.h -o eval.lex.c ./eval.l

gcc -o app.exe main.c eval.tab.c eval.lex.c eval.h

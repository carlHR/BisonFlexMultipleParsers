@echo off

bison --defines=json.tab.h -o json.tab.c ./json.y
lex --header-file=json.lex.h -o json.lex.c ./json.l

gcc -o app.exe main.c json.tab.c json.lex.c json.h

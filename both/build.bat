@echo off

python ../build-bison-lex.py --set-prefix "eval" --output-dir "." --bison-file "../eval/eval.y" --lex-file "../eval/eval.l" --silent
python ../build-bison-lex.py --set-prefix "json" --output-dir "." --bison-file "../json/json.y" --lex-file "../json/json.l" --silent

gcc -o app.exe *.c

#!/bin/bash

echo "First answer:"
lex first.l
gcc -o first.exe lex.yy.c -ll
./first.exe < first.data

echo "Second answer:"
lex second.l
gcc -o second.exe lex.yy.c -ll
./second.exe < first.data

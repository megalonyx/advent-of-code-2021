%{
#include <stdio.h>
int depth = 0;
int pos = 0;
int aim = 0;
int num;
%}

%%
forward\ [0-9]  num=atoi(yytext+8); pos += num; depth += aim * num;
down\ [0-9]     num=atoi(yytext+5); aim += num;
up\ [0-9]       num=atoi(yytext+3); aim -= num;
<<EOF>>         printf("%d\n", pos * depth); yyterminate();
%%

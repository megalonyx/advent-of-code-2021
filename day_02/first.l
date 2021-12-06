%{
#include <stdio.h>
int depth = 0;
int pos = 0;
int num;
%}

%%
forward\ [0-9]  num=atoi(yytext+8); pos += num;
down\ [0-9]     num=atoi(yytext+5); depth += num;
up\ [0-9]       num=atoi(yytext+3); depth -= num;
<<EOF>>         printf("%d\n", pos * depth); yyterminate();
%%

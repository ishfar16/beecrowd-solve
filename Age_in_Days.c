#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int ano=N/365;
    int mod1=N%365;
    int mes=mod1/30;
    int dia=mod1%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,mes,dia);
    return 0;
}
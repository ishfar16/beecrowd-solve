#include<stdio.h>
int main()
{
    int val;
    scanf("%d",&val);
    int dvd1=val/100;
    int mod1=val%100;

    int dvd2= mod1/50;
    int mod2= mod1%50;

    int dvd3= mod2/20;
    int mod3= mod2%20;

    int dvd4= mod3/10;
    int mod4= mod3%10;

    int dvd5=mod4/5;
    int mod5=mod4%5;

    int dvd6=mod5/2;
    int mod6=mod5%2;

    int dvd7=mod6/1;
    printf("%d\n",val);
    printf("%d nota(s) de R$ 100,00\n",dvd1);
    printf("%d nota(s) de R$ 50,00\n",dvd2);
    printf("%d nota(s) de R$ 20,00\n",dvd3);
    printf("%d nota(s) de R$ 10,00\n",dvd4);
    printf("%d nota(s) de R$ 5,00\n",dvd5);
    printf("%d nota(s) de R$ 2,00\n",dvd6);
    printf("%d nota(s) de R$ 1,00\n",dvd7);
    return 0;
}
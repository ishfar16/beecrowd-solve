#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int hours=N/3600;
    int mod1=N%3600;
    int minutes=mod1/60;
    int seconds=mod1%60;
    printf("%d:%d:%d\n",hours,minutes,seconds);
    return 0;
}
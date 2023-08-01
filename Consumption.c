#include<stdio.h>
int main()
{
    int X;
    double Y;
    scanf("%d %lf",&X,&Y);
    double ans=X/Y;
    printf("%.3lf km/l\n",ans);
    return 0;
}
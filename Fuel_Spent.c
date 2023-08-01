#include<stdio.h>
int main()
{
    int hrs,spd;
    scanf("%d %d",&hrs,&spd);
    double ltr= (hrs*spd)/12.0;
    printf("%0.3lf\n",ltr);

    return 0;
}
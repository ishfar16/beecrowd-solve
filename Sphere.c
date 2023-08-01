#include<stdio.h>
int main()
{
    double r,pi;
    scanf("%lf",&r);
    pi=3.14159;
    double sphere = (4/3.0)*pi*r*r*r;
    printf("VOLUME = %0.3lf\n",sphere);
    return 0;
}
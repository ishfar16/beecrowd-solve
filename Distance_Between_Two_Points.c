#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,y1,y2;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    double a=x2-x1;
    double b= y2-y1;
    double distance =sqrt((a*a)+(b*b));
   printf("%0.4lf\n",distance);
    return 0;
}
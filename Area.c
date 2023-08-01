#include<stdio.h>
int main()
{
    double A,B,C,pi;
    scanf("%lf %lf %lf",&A,&B,&C);
    pi=3.14159;
    float triangle =0.5*A*C;
    float circle=pi*C*C;
    float trapezium = ((A+B)/2)*C;
    float square = B*B;
    float rectangle = A*B;
    printf("TRIANGULO: %.3lf\n",triangle);
    printf("CIRCULO: %.3lf\n",circle);
    printf("TRAPEZIO: %.3lf\n",trapezium);
    printf("QUADRADO: %.3lf\n",square);
    printf("RETANGULO: %.3lf\n",rectangle);
    return 0;
}
// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//    int a;
//    int min=INT_MAX;
//    int max=INT_MIN;
//    for(int i=0;i<3;i++)
//    {
//    scanf("%d",&a); 
//     if(a<min)
//     {
//      min=a;
//     }
//     if(a>max)
//     {
//         max=a;
//     }
//    }
//    printf("%d %d",min,max);
//        return 0;
// }


// ALTERNATIVE

// #include<stdio.h>

// int main(){
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
//     if(a < b && a < c) printf("%d ", a);
//     if(b < a && b < c) printf("%d ", b);
//     if(c < b && c < a) printf("%d ", c);
//     if(a > b && a > c) printf("%d ", a);
//     if(b > a && b > c) printf("%d ", b);
//     if(c > a && c > b) printf("%d ", c);
//     return 0;
// }

#include<stdio.h>

int main()
{
    float A,B,MEDIA;
    scanf("%f",&A);
    scanf("%f",&B);
    MEDIA=(A+B)/2;
    printf("MEDIA = %0.5f\n",MEDIA);
    return 0;
}
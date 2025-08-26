#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,D;
     printf("enter the value of a");
    scanf("%f",&a);
    printf("enter the value of b");
    scanf("%f",&b);
    printf("enter the value of c");
    scanf("%f",&c);
    D=sqrt(b*b-4*a*c);
    printf("root x1 is:%f\n",(-b+D)/2*a);
    printf("root x2 is:%f\n",(-b-D)/2*a);
    return 0;
    
}
#include<stdio.h>
int main(){
    /*a=length of the rectangle
    b= width of the rectangle*/
    float a,b;
    printf("enter the value of a");
    scanf("%f",&a);
    printf("enter the value of b");
    scanf("%f",&b);
    printf("area of the rectangle is:%f\n",a*b);
    printf("perimeter of the rectangle is:%f\n",2*(a+b));
    return 0;
}
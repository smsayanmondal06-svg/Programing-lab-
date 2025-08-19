#include<stdio.h>
// p : principle amount
// R : rate of interest
// T : time(in year)
// si :simple interest
int main(){
    float p, R,T;
    printf("enter the value of p");
    scanf("%f",&p);
    printf("enter the value of R");
    scanf("%f",&R);
    printf("enter the value of T");
    scanf("%f",&T);
    printf("simple interest is : %f",(p*R*T)/100);
    return 0;
}
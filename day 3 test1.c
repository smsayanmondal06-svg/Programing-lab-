#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("last digit of the number without modulas is :%d\n",n-n/10*10);
    printf("last digit of the number with modulas is:%d\n",n%10);
    return 0;
}
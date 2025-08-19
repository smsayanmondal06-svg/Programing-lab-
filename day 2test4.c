#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("\nbefore swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);
c=a;
a=b;
b=c;
 printf("\nAfter swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);
    return 0;

}


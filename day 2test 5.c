#include <stdio.h>
int main(){
    int a,b;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("\nbefore swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);
a=a+b;
b=a-b;
a=a-b;
 printf("\nAfter swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);
    return 0;

}


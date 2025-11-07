#include<stdio.h>
int main(){
    char operator;
    float a,b;
    printf("enter an operator(+,-,*,/)\n");
    scanf("%c",&operator);
    printf("enter two number\n");
    scanf("%f %f",&a,&b);
    switch (operator)
    {
    case '+':
        printf("%f",a+b);
        break;
    case '-':
    printf("%f",a-b);
    break;
     case '*':
        printf("%f",a*b);
        break;
     case '/':
    if (b !=0.0)
    {
        printf("%f",a/b);
    }
    else{
        printf("error! divison by zero is not allowed");
    }
    break;
    default:
     printf("Error: Invalid operator.\n");
    }
    return 0;
}
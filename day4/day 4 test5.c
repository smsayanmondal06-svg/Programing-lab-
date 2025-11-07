#include<stdio.h>
int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if (num>0){
    printf("%d is whole number\n",num);
    }
     else {
    printf("%d is not a whole number\n",num);
     }
    return 0;
}

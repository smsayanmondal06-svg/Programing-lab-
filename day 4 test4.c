#include<stdio.h>
int main(){
    int choice;
    printf("enter 1 for head or 0 for tail\n");
    scanf("%d",&choice);
    if (choice ==1)
    {
        printf("it is head\n");
    }
    else if (choice ==0)
    {
        printf("it is tail\n");
    }
    else{
        printf("invaild input! please try again\n");
    }
    return 0;
    
}
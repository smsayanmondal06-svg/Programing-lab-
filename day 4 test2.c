#include<stdio.h>
int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if (num%2 ==0){
    printf("%d is even\n",num);
    }
     else if(num%2 !=0){
    printf("%d is odd\n",num);
     }
    return 0;
}

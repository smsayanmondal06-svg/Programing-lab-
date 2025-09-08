#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the number\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("the greatest of all is %d",a);
    }
    else if(b>a && b>c){
        printf("the greatest of all is %d",b);
    }
    else if(c>b && c>a){
        printf("the greatest of all is %d",c);
    }
    return 0;
}
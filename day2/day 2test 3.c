#include<stdio.h>
// C: value of celcius scale
// F: value of fahrenhite scale
int main(){
    
    float C,F;
    printf("enter the value of F");
    scanf("%f",&F);
    printf("celcius value is : %f\n",5/9*(F-32));
    
    printf("enter the value of c");
    scanf("%f",&C);
    printf(" fahrenheit value is : %f\n",(9*C)/5+32);

 
    return 0;
}



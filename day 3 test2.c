#include <stdio.h>
#include <math.h> 
int main() {
    float principal, rate, time, amount, compoundInterest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the annual interest rate: ");
    scanf("%f", &rate);
    printf("Enter the time period in years: ");
    scanf("%f", &time);
    rate = rate / 100;
    amount = principal * pow((1 + rate), time);
    compoundInterest = amount - principal;
    printf("total amount:%f\n",compoundInterest+principal);
    printf("Compound Interest: %f\n", compoundInterest);
    return 0;
}
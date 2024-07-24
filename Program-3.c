#include <stdio.h>
int main()
{
    float principle,rate,time,interest;
    printf("Enter the amount: ");
    scanf("%f",&principle);
    printf("Enter the interest rate: ");
    scanf("%f",&rate);
    printf("Enter the period of time: ");
    scanf("%f",&time);
    interest=(principle*rate*time)/100;
    printf("%.2f\n",interest);
    return 0;
} 
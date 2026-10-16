#include<stdio.h>
int main()
{
    float PA,rate,time,interest;
    printf("Enter the Principal amount: ");
    scanf("%f", &PA);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time in years: ");
    scanf("%f", &time);

    interest=(PA*rate*time)/100;
    
    printf("\nSimple Interest: %.2f ",interest);

    return 0;
}
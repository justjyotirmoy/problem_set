#include<stdio.h>
int main()
{
    float TA,PA,rate,time,interest;
    printf("Enter the Principal amount: ");
    scanf("%f", &PA);
    printf("Enter the rate of interest in percentage: ");
    scanf("%f", &rate);
    printf("Enter the time in years: ");
    scanf("%f", &time);

    interest=(PA*rate*time)/100;

    TA=PA+interest;
    
    printf("\nSimple Interest: %.2f ",interest);
    printf("\nTotal Amount: %.2f", TA);
    return 0;
}
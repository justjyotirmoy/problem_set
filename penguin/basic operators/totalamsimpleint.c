// program to find total interest using simple interest

#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest, total_amount;

    printf("\nEnter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time period: ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;
    total_amount = principal + simple_interest;

    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Total Amount: %.2f\n", total_amount);

    return 0;
}
//program to find simple interest.

#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    printf("\nEnter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time period: ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;

    printf("Simple Interest: %.2f\n", simple_interest);

    return 0;
}
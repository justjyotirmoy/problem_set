//program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a, b;

    printf("\nEnter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping without using a third variable
    a = a + b; // Step 1: Add both numbers and store in 'a'
    b = a - b; // Step 2: Subtract new 'b' from 'a' to get original 'a'
    a = a - b; // Step 3: Subtract new 'b' from new 'a' to get original 'b'

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
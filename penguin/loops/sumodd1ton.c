//program to find the sum of all odd numbers from 1 to n using a loop

#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {             // Check if the number is odd
            sum += i;                // Add the odd number to the sum
        }
    }
    printf("Sum of odd numbers from 1 to %d is: %d", n, sum);
    return 0;
}
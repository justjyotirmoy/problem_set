//program to find the sum of all numbers divisible by both 3 and 5 between 1 and n

#include <stdio.h>

int main() 
{
    int n, i, sum = 0;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            sum += i;
        }
    }
    printf("Sum of all numbers divisible by both 3 and 5 between 1 and %d: %d\n", n, sum);
    return 0;
}

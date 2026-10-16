//program to find the count of multiples of 5 between 1 and n.

#include <stdio.h>

int main() 
{
    int n, i, multiples_of_5 = 0;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 5 == 0) {
            multiples_of_5++;
        }
    }
    printf("Count of multiples of 5 between 1 and %d: %d\n", n, multiples_of_5);
    return 0;
}

//program to find the count of even and odd numbers between 1 and n.

#include <stdio.h>

int main() 
{
    int n, i, multiples_of_3 = 0;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            multiples_of_3++;
        }
    }
    printf("Count of multiples of 3 between 1 and %d: %d\n", n, multiples_of_3);
    return 0;
}
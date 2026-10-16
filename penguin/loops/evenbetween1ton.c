//program to find the count of even and odd numbers between 1 and n.

#include <stdio.h>

int main() 
{
    int n, i, even = 0, odd = 0;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Count of even numbers between 1 and %d: %d\n", n, even);
    printf("Count of odd numbers between 1 and %d: %d\n", n, odd);
    return 0;
}
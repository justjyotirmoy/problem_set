//program to print numbers from 1 to n using a loop

#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Numbers from 1 to %d are: ", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    return 0;
}
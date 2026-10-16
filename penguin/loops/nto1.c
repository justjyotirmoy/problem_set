//program to write numbers from n to 1 using a loop

#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Numbers from %d to 1 are: ", n);
    for (i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    return 0;
}
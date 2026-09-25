// print numbers from 1 to n
// print numbers from n to 1
#include<stdio.h>

int main() 
{
    int n, i;
    printf("\nEnter the last number: ");
    scanf("%d", &n);
    
    printf("\nNumbers from 1 to %d are: ", n);
    for(i = 1; i <= n; i++) 
        printf("%d,", i);
        
    printf("\n");

    printf("\nNumbers from %d to 1 are: ", n);
    for(i = n; i >= 1; i--)
        printf("%d,", i);
    printf("\n\n");

    return 0;
}
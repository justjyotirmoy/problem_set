//Write a C program to print numbers from n to 1.
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a no:\n");
    scanf("%d",&n);
    for(i=1;n>i;n--)  // why cant write for(n>1;n--)
    {
        printf("%d,",n);
    }
    printf("1");
    return 0;
}
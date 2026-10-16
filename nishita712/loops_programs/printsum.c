//sum of numbers from 1 to n
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number: \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum = sum+i;
    }
    printf("Sum of numbers till %d is %d",n,sum);
    return 0;
}
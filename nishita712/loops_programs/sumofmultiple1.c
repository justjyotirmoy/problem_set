//sum of all numbers which is divisible by 5 between 1 to n
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number: \n");
    scanf("%d",&n);
    
    for (int i=1;i<=n;i++)
    {
        if(i%5==0)
        sum +=i;
    }
    printf("The sum of numbers which is divisible by 5 between 1 to %d is : %d",n,sum);
    return 0;
}
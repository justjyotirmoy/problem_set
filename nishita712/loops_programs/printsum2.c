//print sum of odd numbers from 1 to n
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number: \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {   if(i%2!=0)
        sum = sum+i;
    }
     printf("The sum of odd numbers is : %d \n",sum);

    return 0;
}
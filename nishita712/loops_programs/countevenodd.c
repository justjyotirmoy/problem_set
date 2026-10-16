//count even and odd numbers from 1 to n
#include <stdio.h>
int main()
{
    int n,even_count=0,odd_count=0;
    printf("Enter a number: \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            even_count++;
        else
            odd_count++;
    }
    printf("Even numbers: %d\n", even_count);
    printf("Odd numbers: %d\n", odd_count);
    return 0;
}
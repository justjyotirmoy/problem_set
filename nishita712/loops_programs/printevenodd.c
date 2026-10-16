//program to print even and odd numbers from 1 to n(PS 35 and 36)
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    printf("The even numbers till %d are :\n",n);
    for(int i=1;i<=n;i++)
    {   if(i%2==0)
        printf("%d\n",i);
    }
     printf("The odd numbers till %d are :\n",n);
    for(int i=1;i<=n;i++)
    {   if(i%2!=0)
        printf("%d\n",i);
    }

    return 0;
}
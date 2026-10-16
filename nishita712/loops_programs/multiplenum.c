//print all multiples of 3 bwteen 1 to n
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    printf("The multiples of 3 between 1 to %d are: \n",n);
    for (int i=1;i<=n;i++)
    {
        if(i%3==0)
        printf("%d\n",i);
    }
    return 0;
}
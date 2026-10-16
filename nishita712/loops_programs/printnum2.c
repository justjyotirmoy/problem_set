//program to print numbers from n to 1 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
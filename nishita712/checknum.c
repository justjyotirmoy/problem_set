
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a nummber: \n");
    scanf("%d",&num);
    if(num<0)
    {
        printf("The number is negative\n");
    }
    else 
    if (num>0)
    {
        printf("The number is positive\n");
    }
    else
    {
        printf("The number is zero\n");
    }

    if(num%2==0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }
    return 0;
}
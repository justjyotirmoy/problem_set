// Program to find the smallest number among two numbers
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        printf("%d is the smallest number\n",a);
    }
    else
    {
        printf("%d is the smallest number\n",b);
    }
    return 0;
}
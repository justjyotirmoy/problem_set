//Write a C program to swap three variables.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a,b and c:\n");
    scanf("%d %d %d",&a,&b,&c);  //a=10,b=20,c=30
    a=a+b+c;  //a=60
    b=a-(b+c); //b=10
    c=a-(b+c); //c=20
    a=a-(b+c); //a=30
    printf("the values after interchnaged are:\na=%d\nb=%d\nc=%d",a,b,c);
    return 0;
}
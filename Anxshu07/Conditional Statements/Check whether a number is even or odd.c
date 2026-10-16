#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
   
    if( scanf("%d",&num)!=1)
    printf("Invalid number!");

    else if(num%2==0)
    printf("The entered number is even");

    else 
    printf("The entered number is odd");

   
    return 0;

}
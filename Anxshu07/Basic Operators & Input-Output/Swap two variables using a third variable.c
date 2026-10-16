#include<stdio.h>
int main()
{
    int var1,var2,var3;
    printf("Enter two numbers: ");
    scanf("%d%d",&var1,&var2);
    printf("\nBefore swapping--- \nVariable 1: %d \nVariable 2: %d",var1,var2);

    var3=var1;
    var1=var2;
    var2=var3;

    printf("\n\nAfter swapping--- \nVariable 1: %d \nVariable 2: %d",var1,var2);

    return 0;
}
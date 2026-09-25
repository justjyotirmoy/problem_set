#include<stdio.h>
int main()
{
    int var1,var2,var3,temp;
    printf("Enter three numbers: ");
    scanf("%d%d%d" ,&var1,&var2,&var3);
    printf("\nBefore swapping--- \nVariable 1: %d \nVariable 2: %d \nVariable 3: %d",var1,var2,var3);

    temp=var1;
    var1=var3;
    var3=var2;
    var2=temp;

    printf("\n\nAfter swapping--- \nVariable 1: %d \nVariable 2: %d \nVariable 3: %d",var1,var2,var3);

    return 0;
}
//Write a C program to find the smallest of three numbers.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 no.\n");
    scanf("%d %d %d",&a,&b,&c);
    if(!(a>b&&a>c))
    {
        printf("%d is smaller no.",a);
    }
    else if(!(b>a&&b>c))
    {
        printf("%d is smaller no.",b);
    }
    else
    {
        printf("%d is smaller no.",c);
    }
    return 0;
}
//if (!(a > b) && !(a > c)) {
//    printf("%d is smaller no.", a);
//} else if (!(b > a) && !(b > c)) {
//    printf("%d is smaller no.", b);
//} else {
//   printf("%d is smaller no.", c);
//}
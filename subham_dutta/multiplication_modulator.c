#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=(a*b);
    d=(a%b);
    printf("the product of the two number:%d\n",c);
    printf("the remainder of the two number:%d\n",d);
    return 0;
}
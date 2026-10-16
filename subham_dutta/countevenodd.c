#include <stdio.h>
int main()
{
    int i,n;
    printf("the ending range:");
    scanf("%d",&n);
    int s=0;
    int b=0;
    for(i=0;i<=n;i++)
    if(i%2==0)
    s=s+i;
    else
    b=b+i;
    printf("sum of all odd number is %d\n",b);
    printf("sum of all even number is %d",s);
    return 0;
}
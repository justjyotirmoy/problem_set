#include <stdio.h>
int main()
{
    int i,s,n;
    printf("the number till u want the sum:\n");
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++)
    if(i%3==0)
    {if(i%5==0)
    s = s+i;}
    printf("sum of all the numbers between 1 and %d is:%d",n,s);
    return 0;
}
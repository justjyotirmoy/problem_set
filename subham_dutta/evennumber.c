#include <stdio.h>
int main()
{
    int i,n;
    printf("the ending range:\n");
    scanf("%d",n);
    for(i=0;i<=n;i++)
    {if(i%2==0)
    printf("even nu:%d\n",i);}
    return 0;
}
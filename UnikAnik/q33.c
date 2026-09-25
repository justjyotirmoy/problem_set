//Write a C program to print numbers from 1 to n.
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a no:\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        printf("%d,",i);
    }
    printf("%d",n);  //i didnt do i<=n cz if i did this after n a comma comes(,)
    return 0;
}
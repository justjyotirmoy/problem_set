//Write a C program to print all even numbers from 1 to n.
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a no:\n");      
    scanf("%d",&n);
    for(i=1;i<n;i++)     //for(i=1;i<(n-1);i++)
    {                    //if((n-1)%2==0)
        if(i%2==0)       //printf(",%d",(n-1));
        printf("%d,",i); //else 
    }                    //printf(",%d",n);
    if(n%2==0)
        printf("%d",n); // i didnt write i<=n cz after writing it there comes extra comma after printing n
    return 0;
}
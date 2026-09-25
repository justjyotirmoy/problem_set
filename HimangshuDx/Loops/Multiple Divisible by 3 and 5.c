//multiples and divisibles of 3 and 5 

#include<stdio.h>

void multiple3(int n)
{
    int m3=1;
    for(int i=1; i<=n; i++)
    {
        m3= 3*i;
        printf("\n3 x %d = %d", i,m3);
    }

}
void divisible3(int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        if(i%3==0)
        {
            printf("%d, ",i);
            sum+=i;
        }
    }

    printf("\nThe Sum of the numbers divisible by 3 is: %d",sum);

}


void multiple5(int n)
{
    int m5=1;
    for(int i=1; i<=n; i++)
    {
        m5= 5*i;
        printf("\n5 x %d = %d", i,m5);
    }

}
void divisible5(int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        if(i%5==0)
        {
            printf("%d, ",i);
            sum+=i;
        }
    }
    printf("\nThe Sum of the numbers divisible by 5 is: %d",sum);


}


int main()
{
    int n;

    printf("\nEnter the last number of the range: ");
    scanf("%d", &n);

    printf("\nThe Multiples of 3 are: ");
    multiple3(n);

    printf("\nThe Numbers divisible by 3 are: ");
    divisible3(n);    

    printf("\n\nThe Multiples of 5 are: ");
    multiple5(n);
    printf("\nThe Numbers divisible by 5 are: ");
    divisible5(n);  
    
    return 0;
}
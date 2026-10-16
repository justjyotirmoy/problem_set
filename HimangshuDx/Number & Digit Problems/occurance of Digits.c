//countng number of 0s in a number
//how many times a particular digit occurs
//frequency of each digit in a given integer. (same fn t likhisu)
//most frequently occurring digit. (same fn t likhisu)

#include<stdio.h>

int digit(int n)
{
    int last;

    while (n > 0)
    {
        last = n % 10;            
        n = n / 10;              
        printf("%d, ", last);
    }
    return 1;
}


int count_zero(int n)
{
    int last, zero=0;
    while (n > 0)
    {
        last = n % 10;            
        n = n / 10; 
        if(last==0)
            zero++;             
    }
    if(zero>0)
        printf("\n\nThe number of Zeros in enterd number is: %d", zero);
    else
        printf("\n\nThere are no Zeros in the entered number.");

    return 1;
}     


int occurance(int n)
{
    int last,dig,count=0;

    printf("\n\nEnter the digit to search its occurance in the number: ");
    scanf("%d",&dig);

    while (n > 0)
    {
        last = n % 10;            
        n = n / 10;
        if(last==dig)
            count++;
        
    }
    if(count!=0)
        printf("%d occures %d times in the entered number.", dig,count);
    else
        printf("%d is not in the entered number.", dig);
    return 1;
}


int frequency(int n)
{
    int khali, last, i, count, most,max=0;
    for(i = 0; i <= 9; i++)
    {
        khali = n;
        count = 0;

        while(khali > 0)
        {
            last = khali % 10;
            khali = khali / 10;

            if(last == i)
                count++;
        }

        printf("%d occurs %d times\n", i, count);

         if(count > max)
        {
            max = count;
            most = i;
        }
    }
    printf("\n\nThe Most Frequently Occurring Digit is: %d", most);       

    return 1;
}


int main()
{
   int n;

    printf("\nEnter a Number: ");
    scanf("%d",&n);
    printf("\nYou have entered %d", n);

    printf("\nThe digits are: ");
    digit(n);

    count_zero(n);     //Fix it -- Jodi moi 00000 input diu,, e there are no zeros buli dekhai. and number of 0s tu blank ahe.

    occurance(n);

    printf("\n\n--Let's see the Frequency of each digit--\n ");
    frequency(n);

    return 0;
}

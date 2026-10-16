//reverse of a number
//difference between number and its reverse

#include<stdio.h>

int correct_order(int n)     //correct order or reverse 
{
    int last,reverse=0;

    while (n > 0)
    {
        last = n % 10;            
        n = n / 10;             
        reverse= reverse*10+last;     //eitue exactly number tur reverse print kori dibo,, but not each digit 
       
    }
    while(reverse>0)                  //so to print digits of corrected order(reverse), ami second eta loop lobo lagibo
    {
        last=reverse%10;
        reverse=reverse/10;
        printf("%d, ",last);
    }

    return 1;
}


int diff(int n)
{
    int last,reverse=0, difference, khali;

    khali=n;
    //jetia ami n=1 diu diff -1 ulai,, karon n r value tu end of the loop t jai change hoi jai, so accurate answer pua nai,, so temporary lolu yate, so that n r value change hoi najai and difference tu correctly pau. 
    while (khali > 0)
    {
        last = khali % 10;            
        khali = khali / 10;             
        reverse= reverse*10+last;
    }
    
    difference= n-reverse;

    return difference;
}

int main()
{
    int n,difference;

    printf("\nEnter a Number: ");
    scanf("%d",&n);
    printf("\nYou have entered %d", n);

    printf("\n\nThe digits of the number in correct order: ");
    correct_order(n);

    difference= diff(n);
    printf("\n\nThe Difference Bitween the number and its reverse is: %d", difference);

    return 0;
}


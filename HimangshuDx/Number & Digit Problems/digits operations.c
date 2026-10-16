//sum of digits, product of digits, largest of digits 
//largest digit smallest digit and their difference 
//number of even and odd digits


#include<stdio.h>

int digit(int n)
{
    int last, s = 0,p=1;

    while (n > 0)
    {
        last = n % 10;            
        n = n / 10;              
        printf("%d, ", last);
        s+=last;
        p*=last;
    }

    printf("\n\nThe Sum of the digits is: %d", s); 
    printf("\nThe Product of the digits of is: %d", p);

    return 1;

}

int large_small(int n)
{
    int last, dangor=0, xoru=9;

    while (n > 0)
    {
        last = n % 10;            
        n = n / 10;              
        
        if(last>dangor)
            dangor=last;
            
        if(last<xoru)
            xoru=last;

    }

    if(dangor!=xoru)
    {    
        printf("\n\n%d is the Largest Digit.", dangor);
        printf("\n%d is the Smallet Digit.", xoru);
    }
    else
         printf("\n\nAll digits are equal.");

    printf("\nThe difference of the largest and the smallest number is: %d", dangor-xoru);

    return 1;
}

int odd_even(int n)
{
    int last,odd=0, even=0, khali;

    khali=n;    
    // eta temporary space loisu jot ami n tu store korisu, and during the loop for finding even number, n r value tu chane hoi jabo so after that xei n tur reusabiity komi jabo and aru ebar notun fucntion bonabo lagibo for finding odd.. so egla joto-poto kori thaktke simply temporary eta variable loi tate n tu thoi even loop tut use korilu, then xeitu loop complete hua pisot temp r value change hoi kiba beleg hoi jabo,, tetia aru ebar tolot temp=n likhi reuse koribo parim.....damn it 

    printf("\n\nThe Even Digits are: ");
    while (khali > 0)
    {
        last = khali % 10;            
        khali = khali / 10; 
        
        if(last%2==0)
        {
            printf("%d, ", last);
            even++;
        }
    }

    khali=n;
    printf("\nThe Odd Digits are: ");
    while (n > 0)
    {
        last = n % 10;            
        n = n / 10; 
        
        if(last%2==1)
        {
            printf("%d, ", last);
            odd++;
        }
    }
    

    printf("\nThe Number of Even Digits are: %d", even);
    printf("\nThe Number of Odd Digits are: %d", odd);

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

    large_small(n);

    odd_even(n);

    return 0;
}

 
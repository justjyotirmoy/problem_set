// Check whether a number is divisible by 5 and 11

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
   
    if( scanf("%d",&num)!=1) {

        printf("Invalid number!\nTry again!");

    }  else if(num%5==0 && num%11==0) {

        printf("%d is divisible by both 5 and 11",num);

    }  else if(num%5==0) {

        printf("%d is divisible by 5 only",num);

    }  else if(num%11==0) {

      
        printf("%d is divisible by 11 only",num);

    } else {

        printf("%d is not divisible by 5 and 11",num);
        
    }

    return 0;

}
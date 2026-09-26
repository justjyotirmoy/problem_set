//3. Write a C program to find the quotient and remainder of two numbers. 

#include<stdio.h>
int main(){
    int a ,b;

    printf("Enter Two Numbers :");
    scanf("%d %d",&a,&b);

    // Mistakes - printf("The Quotient Of %d and %d : %d" , a,b, a/b); (Wrote earlier) and used = instead of ==

    if( b==0 ){ 
        printf("Cannot Divide By Zero");
     }
    else {
    printf("The Quotient Of %d and %d : %d\n" , a,b, a/b);
    printf("The Remainder Of %d and %d : %d", a,b, a%b);
    }
    return 0;
}
// Program to check whether the student has passed or failed the exam
#include<stdio.h>
int main()
{
    int num;
    printf("Enter mark scored out of 300: \n");
    scanf("%d",&num);
    if(num>=100){
    printf("You sussessfully passed the exam\n");
    }
    else
    {
    printf("You failed the exam\n");
    }
    return 0;
}
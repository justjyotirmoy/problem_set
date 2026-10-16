// Program to check the grade of student based on marks scored
#include<stdio.h>
int main()
{
    int num;
    printf("Enter mark scored out of 300: \n");
    scanf("%d",&num);
    if(num>=270 && num<=300)
    {
        printf("A Grade\n");
    }else
    if(num>=220 && num<270)
    {
        printf("B Grade\n");
    }
    else
    if(num>=150 && num<220)
    {
        printf("C Grade\n");
    }
    else
    if(num>=100 && num<150)
    {
        printf("D Grade\n");
    }
    else
    {
        printf("F Grade\n");
    }
    return 0;
}
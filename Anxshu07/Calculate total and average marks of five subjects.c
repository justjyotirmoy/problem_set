#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5,total,avg;
    printf("ENTER THE MARKS \nSubject 1: ");
    scanf("%f", &sub1);

    printf("Subject 2: ");
    scanf("%f",&sub2);

    printf("Subject 3: ");
    scanf("%f",&sub3);

    printf("Subject 4: ");
    scanf("%f",&sub4);

    printf("Subject 5: ");
    scanf("%f",&sub5);
    
    total=sub1+sub2+sub3+sub4+sub5;
    avg=(total)/5;
    
    printf("Total Marks: %.2f \nAverage: %.2f",total,avg);

    return 0;
}
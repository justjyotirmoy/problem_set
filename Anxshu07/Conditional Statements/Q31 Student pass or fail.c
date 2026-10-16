// Find whether a student has passed or failed based on marks

#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks obtained by the student: ");
   
    if( scanf("%d",&marks)!=1 ) {

        printf("Invalid input!\nTry again!");

    } else if(marks>=40) {

        printf("The student has passed with %d marks",marks);

    } else {

        printf("The student has failed with %d marks",marks);

    }

    return 0;

}
//program to calculate grades based on marks obtained by a student.

#include <stdio.h>
int main()
{
    int marks;
    char grade;

    printf("\nEnter the marks obtained by the student: ");
    scanf("%d", &marks);

    if (marks >= 80) {
        grade = 'A';
    } else if (marks >= 60) {
        grade = 'B';
    } else if (marks >= 40) {
        grade = 'C';
    } else {
        grade = 'D';
    }

    printf("The grade obtained by the student is: %c\n", grade);

    return 0;
}
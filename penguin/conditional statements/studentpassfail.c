//program to find whether a student has passed or failed based on marks.

#include <stdio.h>

int main()
{
    int marks;

    printf("\nEnter the marks obtained by the student: ");
    scanf("%d", &marks);

    if (marks >= 40) {
        printf("The student has passed.\n");
    } else {
        printf("The student has failed.\n");
    }

    return 0;
}
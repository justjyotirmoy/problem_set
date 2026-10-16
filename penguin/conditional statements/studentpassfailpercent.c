//program to determine if a student has passed or failed based on their percentage.

#include <stdio.h>

int main() {
    float percentage;

    printf("\nEnter the student's percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 40) {
        printf("The student has passed.\n");
    } else {
        printf("The student has failed.\n");
    }

    return 0;
}
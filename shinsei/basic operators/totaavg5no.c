//total and avg of 5 subjects

#include <stdio.h>

int main() 
{
    float sub1 = 85.5;
    float sub2 = 92.0;
    float sub3 = 78.5;
    float sub4 = 96.0;
    float sub5 = 88.5;
    float total = sub1 + sub2 + sub3 + sub4 + sub5;
    float average = total / 5;

    printf("\ngiven scores are: %.1f, %.1f, %.1f, %.1f, %.1f\n", sub1, sub2, sub3, sub4, sub5);
    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", average);

    return 0;
}

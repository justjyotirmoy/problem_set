#include <stdio.h>
int main()
{
    float S1,S2,S3,S4,S5,Total,Avg;
    printf("Enter the marks you got in Subject 1,2,3,4,5\n");
    scanf("%f%f%f%f%f", &S1,&S2,&S3,&S4,&S5);
    Total=S1+S2+S3+S4+S5;
    Avg=Total/5;
    printf("The total marks are %f\n", Total);
    printf("The average marks are %f\n", Avg);
    return 0;
}
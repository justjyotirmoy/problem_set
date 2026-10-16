#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the amount of subjects: ");
    scanf("%d",&n);
    float marks[n],total=0,avg;


    printf("\nENTER THE MARKS\n");
    for(i=0;i<n;i++){

        printf("Subject %d: ",i+1);
        scanf("%f", &marks[i]);
        
        total=total+marks[i];
    }

    avg=(total)/n;
    
    printf("\nTotal Marks: %.2f \nAverage: %.2f",total,avg);

    return 0;
}
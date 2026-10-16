// Calculate grades based on marks.

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the amount of subjects: ");
    scanf("%d",&n);

    float marks[n],total=0,percent,maxmark;

    printf("Enter the total(max) mark per subject: ");
    scanf("%f", &maxmark);

    printf("\nENTER THE MARKS\n");
    
    for(i=0;i<n;i++){

        printf("Subject %d: ",i+1);

        if( ( scanf("%f",&marks[i])!=1 ) || (marks[i]<0) || (marks[i]>maxmark) ) {

            printf("Invalid input!\nTry again!\n");
            i--;
          
          } else {
            
            total=total+marks[i];

          }
    }

    
    printf("\nTotal Marks: %.2f",total);

    percent = (total/(n*maxmark))*100;

    printf("\nPercentage: %.2f\n",percent);
 
    if(percent>=90) {

        printf("The student has secured Grade A++");

    } else if(percent>=80) {

        printf("The student has secured Grade A");

    } else if(percent>=60) {

        printf("The student has secured Grade B");

    } else if(percent>=40) {

        printf("The student has secured Grade C");

    } else {

        printf("The student has failed");

    }

    return 0;

}
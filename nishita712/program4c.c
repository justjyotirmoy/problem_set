
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d %d",&a,&b);
    printf("Addition : %d\n",a+b);
    printf("Subtraction : %d\n",a-b);
    printf("Multipication : %d\n",a*b);
    printf("Quotiont : %d\n",a/b);
    printf("Remainder : %d\n",a%b);

    //simple interst and total amount finding
    int pa , rate ,  time , SI ,Total_Amount;
    printf("Enter principal amount : \n");
    scanf("%d",&pa);
    printf("Enter rate of interest per year: \n");
    scanf("%d",&rate);
    printf("Enter time : \n");
    scanf("%d",&time);
    SI = (pa*rate*time)/100;
    Total_Amount = pa+SI;
    printf("Simple Interest is : %d\n",SI);
    printf("Total amount is : %d\n",Total_Amount);


    return 0;
}
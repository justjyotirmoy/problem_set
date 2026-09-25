#include<stdio.h>
int main()
{
    float num1,num2,sum,sub,mul,div;
    int rem,choice,f=1;

    while(f==1) {

    printf("Enter the two numbers: ");
    scanf("%f%f", &num1,&num2);

    printf("\n===ACTIONS=== \n1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n5. Remainder\n6. Exit the program\n");
    printf("\nWhich action do you want to perform: ");
    scanf("%d",&choice);
    printf("\n");

    if(choice==6) {

        break;

    } else if(choice==1) {

        sum=num1+num2;
        printf("Addition: %.2g", sum);

    } else if(choice==2) {

        sub=num1-num2;
        printf("Subtraction: %.2g", sub);

    } else if(choice==3) {

        mul=num1*num2;
        printf("Multiplication: %.2g", mul);

    } else if(choice==4) {
        
        div=num1/num2;
        printf("Division: %.2g", div);

    } else if(choice==5) {

        rem=(int)num1%(int)num2;
        printf("Remainder: %d", rem);

    } else {

        printf("Invalid Input!\nTry again");

    }


    printf("\n\nDo you want to calculate again?\n1=Yes  0=No\n\nInput: ");
    scanf("%d",f);

    printf("\n\n");

}

return 0;

}
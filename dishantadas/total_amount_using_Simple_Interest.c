#include <stdio.h>
int main()
{
    float P,R,T,SI,TA;
    printf("ENter principal amount\n");
    scanf("%f", &P);
    printf("Enter INterest rate\n");
    scanf("%f", &R);
    printf("Enter the time period\n");
    scanf("%f", &T);
    SI=(P*R*T)/100;
    TA = P + SI;
    printf("Simple Interest = %f\n", SI);
    printf("Total Amount = %f\n", TA);
    return 0;
}
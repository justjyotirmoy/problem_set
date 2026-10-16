#include <stdio.h>
int main()
{
    float P,R,T,SI;
    printf("ENter principal amount\n");
    scanf("%f", &P);
    printf("Enter INterest rate\n");
    scanf("%f", &R);
    printf("Enter the time period\n");
    scanf("%f", &T);
    printf("Simple Interest = %f", SI=(P*R*T)/100);
    return 0;
}
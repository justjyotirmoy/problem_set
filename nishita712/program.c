

#include <stdio.h>
int main()
{
    int a ,b,c;
    printf("Enter value for a and b : \n");
    scanf("%d%d",&a,&b);
    printf("Before swapping a is %d and b is %d\n",a,b);
    c = a;
    a=b;
    b=c;
    printf("After swapping a is : %d and b is : %d\n",a,b);

    int d, e;
    printf("Enter value for d and e : \n");
    scanf("%d%d",&d,&e);
    printf("Before swapping d is %d and e is %d\n",d,e);
    d = d+e;
    e = d-e;
    d= d-e;
    printf("After swapping d is : %d and e is : %d\n",d,e);

    int a1 ,b1,c1,d1;
    printf("Enter value for a1 and b1 and c1 : \n");
    scanf("%d%d%d",&a1,&b1,&c1);
    printf("Before swapping a1 is %d ,\n b1 is %d,\n and c1 is %d\n",a1,b1,c1);
    d1 = a1;
    a1=b1;
    b1=c1;
    c1=d1;
    printf("After swapping a1 is : %d and b1 is : %d and c1 is : %d\n",a1,b1,c1);

    int e1,f1,g1;
    printf("Enter value for e1 and f1 and g1 : \n");
    scanf("%d%d%d",&e1,&f1,&g1);
    printf("Before swapping e1 is %d and f1 is %d and g1 is %d\n",e1,f1,g1);
    e1= e1+f1+g1;
    f1=e1-f1-g1;
    g1=e1-f1-g1;
    e1= e1-f1-g1;
    printf("After swapping e1 is : %d and f1 is : %d and g1 is : %d\n",e1,f1,g1);

    //float value swapping 
    float var1,var2,var3;
    printf("Enter floating point value : \n");
    scanf("%f%f",&var1,&var2);
    printf("Before swapping var1 is %f and var2 is %f\n",var1,var2);
    var3=var1;
    var1=var2;
    var2=var3;
    printf("After Swapping var1 is : %f and var2 is %f",var1,var2);




    return 0;
    



}
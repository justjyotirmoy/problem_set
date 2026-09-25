#include <stdio.h>
int main(){
int e,i,a,b;
printf("enter the number of which u want power of:\n");
scanf("%d",&a);
printf("whats the power:\n");
scanf("%d",&b);
e=1;
for(i=1;i<=b;i++)
e = e*a;
printf("reselt is:%d",e);
return 0;}


#include <stdio.h>
int main()
{
    int length , breadth,area,perimeter;
    printf("Enter length and breadth of a rectangle: \n");
    scanf("%d%d",&length,&breadth);
    area = length*breadth;
    perimeter = 2*(length+breadth);
    printf("Area of the rectangle is : %d\n",area);
    printf("Perimeter of the rectangle is : %d\n",perimeter);
    int length1 , area1,perimeter1;
    printf("Enter the length of a square: \n");
    scanf("%d",&length1);
    area1 = length1*length1;
    printf("The area of the square is : %d\n",area1);
    perimeter1=4*length1;
    printf("perimeter of the square is : %d\n",perimeter1);
    int r,a,circum;
    printf("Enter radius of circle: \n");
    scanf("%d",&r);
    a=3.14*r*r;;
    circum = 2*3.14*r;
    printf("Area of the circle is %d and circumference is %d \n",a,circum);
    int b,h,at;
    printf("Enter base and height of triangle: \n");
    scanf("%d%d",&b,&h);
    at = 0.5*b*h;
    printf("Area of the triangle is : %d\n",at);

    return 0;
    


}
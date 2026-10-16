// First and Last digit and sum of them, product of them
//check first and last digit are equal or not
//swap first and last

#include<stdio.h>

void swap(int n)
{
    int temp, first, last, divisor = 1, result;

    temp = n;
    last = n % 10;   //last digit ulai lolu

    //now first digit and divisor ulabo lage,, Divisor kio use  korisu tolot likhisu.
    while(temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }
    first = temp;      //first ulalu

    // eikhini yare main logic.. IMPORTANT --explaination tolot ase
    result = n - first * divisor - last;
    result = result + last * divisor + first;

    printf("\nAfter Swapping first and last digit: %d", result);

}


int main()
{
    int n,last,khali;

    printf("\nEnter a Number: ");
    scanf("%d",&n);
    printf("\nYou have entered %d", n);
    
    khali=n;    
    //loop t n r value change hoi jai, so lastot swap(n) function call korute n r wrong value pass hoi instead of entered number so temporary lage yate.

    last=khali%10;      //number tuk 10 di devide korile reminder t last number tu ahiye jai,, so not a big deal to find it,

    for( ; khali>=10; )      
        //n>=10, karon jetia ami number eta devide koru 10 di, tetia ee answer t xei number tur last digit tu eliminate kori diye, and eneke repeat kori goi thake until the first single digit left. so last t single digit eta roi jabo and after that we don't need to execute the loop again, so loop tu tate stop koribole n>=10 use kora hoise. //
    {
        khali=khali/10;
    }

    printf("\nThe First digit of the number is: %d",khali);
    printf("\nThe Last digit of the number is: %d",last);

    printf("\n\nThe sum of First and Last digit of the number is: %d", khali+last);
    printf("\nThe product of First and Last digit of the number is: %d", khali*last); 

    if(khali==last)
        printf("\n\nFirst and last digit are Equal.");
    else
         printf("\n\nFirst and last digit are Not Equal.\n");


    swap(n);
    
    return 1;

}


/* Explaination for swap

suppose ami input dilu 12345
so n=12345

now last digit aramot ulai jabo,, %10 korile, that is 5.

first digit ulabo karone ami loop lom.
12345/10 = 1234
1234/10=123
123/10=12
12/10=1
to terminate loop n>10 rakhisu

--Divisor consept--
divisor=1
divisor = divisor * 10 --loop t ase so
1->10->100->1000 eneke barhi jai thakibo.
loop tu jiman bar ghuribo ximan ta 0 lagibo divisor r pisot.
that means ,, first digit and last digit  r majot ximan ta digit ase, so to support the first digit we need ne divisor. so that ami  first digit tu minus korat problem nohoy.

--eibar original number r pora first and second number remove koribo lage. yate divisor tue as a support kam koribo--
result = n - first * divisor - last;
result = 12345 - 1*1000- 5
result= 234

then after swap ami first and last variable ketia akou add koribo lage
so result= result+ last* divisor+first;
mane result= 234+ 5*1000+1
result= 54321 

and thats it.
*/
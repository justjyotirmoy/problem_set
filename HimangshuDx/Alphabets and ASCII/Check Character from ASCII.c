//Input ASCII value and get the chracter: 

#include <stdio.h>

int main()
{
    int siddhant;

    printf("\nEnter the ASCII value:  ");
    scanf("%d",&siddhant);

    printf("\nThe coresponding Character of the ASCII value %d is: %c", siddhant, siddhant);
    
    return 0;
}


// Just now i got to know that 32 is displaying "blacnk sapce space" 
// and 127 is displaying "DEL"    
//that's why 32 and 127 was not displaying anything hahaha..
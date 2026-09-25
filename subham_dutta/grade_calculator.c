#include <stdio.h>

int main() {
    int a;
    printf("marks got by student in mid term:\n");
    scanf("%d", &a); 
    if (a >= 90) {
        printf("a grade");
    } 
    else if (a >= 60) {
        printf("b grade");
    } 
    else if (a >= 40) {
        printf("c grade");
    } 
    else {
        printf("fail");
    }
    
    return 0; 
}

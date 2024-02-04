#include <stdio.h>
int main(){
    int num1, num2, result;
    
    // Asking for input
   // printf("Enter the first number: ");
    scanf("%d  %d", &num1,&num2);
    //printf("Enter the second number: ");
    //scanf("%d", &num2);
    
    // Using ternary operator
    result = num1 > num2 ? num1 : num2;
    
    // Displaying output
    printf("%d", result);
    
    return 0;
}
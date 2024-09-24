#include <stdio.h>

int main(){
    float a, b;
    
    printf("Enter the two numbers: \n");
    scanf("%f %f", &a, &b);

    float res = a + b;

    printf("The sum of two floating point numbers is: %0.2f", res);
}
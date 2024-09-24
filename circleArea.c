#include <stdio.h>

int main(){
    const float pi = 3.141592653589793;

    float rad;

    printf("Enter the radius of the circle: ");
    scanf("%f", &rad);

    float area = pi * rad * rad;

    printf("The area of the circle is : %0.3f", area);
}
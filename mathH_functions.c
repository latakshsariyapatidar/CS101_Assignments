#include <stdio.h>
#include <math.h>

int main(){
    int a, b;

    printf("Enter the two numbers");
    scanf("%d %d", &a, &b);

    int power_result = pow(a+b, 2);

    printf("%d \n",power_result);
    printf("%d \n", (a++) * b);
    printf("%d \n", a&&b);
}
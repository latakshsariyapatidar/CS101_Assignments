#include <stdio.h>

int main(){
    int a, b;

    printf("Enter the two numbers: \n");
    scanf("%d %d",&a, &b);

    int temp_int;


    printf("The values of two integers earliers are: \n ");
    printf("a = %d and b = %d", a, b);

    // Swapping the values of two numbers using the temp_intl

    temp_int = a;
    a = b;
    b = temp_int;

    printf(" \nThe values of two integers earliers are: \n ");
    printf("a = %d and b = %d", a, b);

}
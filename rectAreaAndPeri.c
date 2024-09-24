#include <stdio.h>


int main(){

    // Taking th input from the user
    int length, width;

    printf("Enter the length of the rectangle: \n");
    scanf("%d",&length);

    printf("Enter the width of the rectangle: \n");
    scanf("%d",&width);

    // Calculating the area of the rectangle
    int area = length * width;

    //Calculating the preimeters of the rectangle
    int perimeter = 2 * (length + width);

    printf("Area of the rectangle is %d ", area);
    printf("Perimeter of the rectangle is %d ", perimeter);
}
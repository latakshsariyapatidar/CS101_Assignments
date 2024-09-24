#include <stdio.h>

int main(){

    int row, columns;

    printf("Enter the number of rows: \n");
    scanf("%d", &row);

    printf("Enter the number of columns: \n");
    scanf("%d", &columns);

    for ( int i = 0; i< columns ;  i++){
        for (int j = 0 ; j < row ; j++){
            printf("*");
        }
        row --;
        printf("\n");
    }
}
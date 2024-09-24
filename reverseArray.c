#include <stdio.h>

int main(){
    int initial[10] = {1,2,3,4,5,6,7,8,9,10};
    int reversed[10];

    for (int i = 0; i< 10; i++){
        reversed[i] = initial[9 - i];
    }

    printf("\nInitial\n");
    for (int i = 0; i< 10; i++){
        printf("%d\t", initial[i]);
    }
    printf("\nReversed\n");
    for (int i = 0; i< 10; i++){
        printf("%d\t", reversed[i]);
    }
}
#include <stdio.h>

int main(){
    int first = 0;
    int second = 1;

    int term_n;

    int print_term;

    int terms_to_print;
    printf("Enter the number of terms to print \n");
    scanf("%d", &terms_to_print);


    printf("The sequence is:\n");
    printf("%d \t %d \t", first, second);

    for (int i =1; i < terms_to_print - 1; i++){
        term_n = first + second;
        first = second;
        second = term_n;

        print_term = term_n;

        printf("%d \t", print_term);

    }
}
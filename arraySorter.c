#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in array \n");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i<n; i++){
        if (arr[i] ==0 || arr[i] == 1 || arr[i] == 2){
            continue;
        }else{
            printf("Enter element %d again: ", i+1);
            int again_enter;
            scanf("%d", &again_enter);

            if (again_enter == 0 | again_enter == 1 || again_enter == 2){
                arr[i] = again_enter;
            }
            else{
                i = i - 1;
            }
        }
    }


    int number_of_zeros = 0;
    int number_of_ones = 0;
    int number_of_twos = 0;

    for (int i = 0; i < n; i++){
        if (arr[i] == 0){
            number_of_zeros++;
        }else if (arr[i] == 1){
            number_of_ones++;
        }else if (arr[i] == 2){
            number_of_twos++;
        }
    }

    int regenerated_arr[n];

    for (int i = 0; i < n; i++){
        if (number_of_zeros > 0){
            arr[i] = 0;
            number_of_zeros--;
        }else if (number_of_ones > 0){
            arr[i] = 1;
            number_of_ones--;
        }
        else if (number_of_twos > 0){
            arr[i] = 2;
            number_of_twos--;
        }
    }   

    for (int i = 0; i < n; i++){
        printf("%d \t", arr[i]);
    } 

}
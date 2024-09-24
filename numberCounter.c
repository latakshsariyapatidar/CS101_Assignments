#include <stdio.h>

int main(){

    //Taking the input for number of elements in the array
    int n;
    printf("Enter the number of elements of array \n");
    scanf("%d", &n);

    //Declaring and initializing the array
    int arr[n];

    //Taking input from the user for each element in the array
    printf("Enter the elements of array \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //Creating the logic to check which number is repeated how many times in the array

    int repeatations[n];
    //initializing the repeatations array all elements to 0
    for (int i = 0; i < n; i++){
        repeatations[i] = 0;
    }

    for (int i = 0; i<n; i++){
        for (int j = 0; j < n; j++){
            if (arr[i] == arr[j]){
                repeatations[i]++;
            }
        }
    }


    for (int i = 0; i < n; i++){

        if (repeatations[i] == 0){
            continue;
        }

        int count = 1;

        for (int j = i+1; j<n; j++){
            if (arr[i] == arr[j]){
                count++;
                repeatations[j] = 1;
            }
        }

        if (count > 1){
            printf("The number %d repeated %d times \n", arr[i], count);
        }

    }


    
    
}
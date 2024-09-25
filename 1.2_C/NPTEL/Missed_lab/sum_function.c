#include<stdio.h>

int odd(int arr[], int size);
int even(int arr[], int size);
int avg(int arr[], int size);

int main(){
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Enter the value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Odd numbers: ");
    odd(arr, size);
    printf("\n");

    printf("Even numbers: ");
    even(arr, size);
    printf("\n");

    printf("Average: %.2f\n", avg(arr, size));

    return 0;
}


int odd(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}

int even(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}

int avg(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float) sum / size; 
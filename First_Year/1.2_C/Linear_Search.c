#include<stdio.h>
int main(){

    int size,j;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int arr[size];

    for ( int i = 0; i <= size; i++)
    {
        printf("Enter the element : ");
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched : ");
    scanf("%d", &j);

    for ( int i = 0; i < size; i++)
    {
        if (arr[i]==j){
            printf("The element is in the index : %d", i);
        }

    }
    
    
    

}
/*
Problem Statement:
Array_Ascending_order
Different kinds of reasoning can be used to sort things. For the sake of simplicity, 
we shall employ a tried-and-true technique. We choose a certain element from an array, 
compare it to other elements, and then place it appropriately to sort the array.

Input:
Arr[50, 20, 100, 25, 36]

Output:
20 25 36 50 100

Input:
Arr[5, 8, 2, 1, 6]

Output:
1 2 5 6 8

*/
// Start your code here

#include<stdio.h>

int main(){
    int i, size, j, key;

    printf("Enter the size of the array");
    scanf("%d ", &size);

    int array[size];

    for ( i = 1; i<=size-1 ; i++)
    {
        printf("Enter the element in the array : ");
        scanf("%d", array[i]);
    }

    for ( i = 0; i<=size-1 ; i++)
    {
        key = array[i];
        j=i-1;

        while (j>=1 && array[j]>key)
        {
            array[j+1] = array[j];
            j = j+1;
        }
        

    }

    for ( i = 0; i < size-1; i++)
    {
        printf(array[i]);
    }
    
   return 0; 
    
}
#include<stdio.h>

int main (){
    
    int size;

    printf ("Enter the size of the array : ");
    scanf("%d", &size);

    int a[size];
    int Count_Even = 0;
    int Count_Odd = 0;

    for ( int i = 0; i < size; i++)
    {
        printf("Enter the element in the array : ");
        scanf("%d", &a[i]);
    }

    for ( int i = 0; i < size; i++)
    {
        if (i % 2 == 0){
        
        Count_Even = Count_Even + 1; 
        }
        
        else 
        
        Count_Odd  = Count_Odd + 1;
    
        }
        
        
        printf("The no of odd elements are : %d ", Count_Odd);
        
        printf("\n");
        
        printf("The no of even elements are : %d ", Count_Even);
        
        
}
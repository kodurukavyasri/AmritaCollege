#include<stdio.h>

int main (){
    
    int size;

    printf ("Enter the size of the array : ");
    scanf("%d", &size);

    int a[size], b[size];

    for ( int i = 0; i < size; i++)
    {
        printf("Enter the element in the array : ");
        scanf("%d", &a[i]);
    }

    for ( int i = 0; i < size; i++)
    {
        printf("%d ,", a[i]);
    }
    
        printf("\n");
    
    for ( int i = 0; i < size; i++)
    {
        b[i] = a[i];
    }
    
    for ( int i = 0; i < size; i++)
    {
        printf("%d ,", b[i]);
    }
    
    
}
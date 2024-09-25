#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ier, and;
    int m;
    int i; 
    printf("Enter the multiplier : ");
    scanf("%d",&ier );

    printf("Enter the multiplicand : ");
    scanf("%d",&and );

    for ( i = 1; i <= and; i++)
    {
        printf("The multiplication table of %d * %d is :%d \n", ier, and, ier * i);
    }

    return 0;
}
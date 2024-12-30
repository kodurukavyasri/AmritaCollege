#include<stdio.h> 
#include<stdlib.h>

//print even no starting from 2
// "number = 5"==> 2,4,6,8,10

int main()
{
    int num;
    int i;

    printf ("Enter the number : ");
    scanf ("%d", &num);

    for ( i = 1; i <= num; i++)
    {
    
        printf ("%d, " , i*2);
    }
    
    
    return 0;
}
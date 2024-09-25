#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j;
    int result = 1;
    int num;

    printf("enter the no you require for right angle triangle : ");
    scanf("%d",&num);

    for ( i = 1; i <= num; i++)
    {
        for ( j = 1; j <=i; j++)
        printf ("%d", j );
     printf("\n");
        
        
    }
    
    return 0; 

}
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num, i;

    printf("hello! enter a number :");
    scanf("%d",&num);

    for ( i = 1; i < num; i++)
    {
        printf("%d",i);
    }
    
    return 0;
}

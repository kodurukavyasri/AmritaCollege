#include<stdio.h>
#include<stdlib.h>


int main()
{
    int num, pow, i;
    int result = 1;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Enter the power : ");
    scanf("%d", &pow);

    for ( i = 0; i < pow; i++)
    {
        result = result*num;
    }
    
    printf("%d in the power of %d = %d\n", num, pow, result);
    
    return 0;
    
}

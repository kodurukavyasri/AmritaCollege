#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    int i;
    int sum = 0;

    printf("Enter the number : ");
    scanf("%d",&num);

    for(i=1, i<=num; i++;)
    {
        sum = sum + i;
    }
    printf("the sum is %d %d \n", num , sum);

    return 0;
}
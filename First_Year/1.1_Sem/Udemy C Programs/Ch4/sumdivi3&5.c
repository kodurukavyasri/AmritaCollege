#include<stdio.h>

int main()
{
    int num;
    int i;
    int sum;

    printf("Enter the num you require : ");
    scanf("%d",&num);   
    

    for ( i = 1; i <= num; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            printf("the sum of the numbers which are divisible by 3 || 5 is:  %d \n ", i);   

            sum = sum + i;

            printf("Their sum is :%d\n", sum);
        }

    }
    
    return 0;
}
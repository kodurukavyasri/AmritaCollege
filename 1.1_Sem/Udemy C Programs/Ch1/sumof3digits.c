#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    int units,tens,hundreds;

    printf("Enter 3 digit number:");
    scanf("%d",&num);
    
    units = num % 10;
    tens = (num/10) % 10;
    hundreds = num / 100;

    printf("The total sum of digits in %d is %d\n", num, units+tens+hundreds);
    printf("The given number is : %d ", &)


    return 0;
}
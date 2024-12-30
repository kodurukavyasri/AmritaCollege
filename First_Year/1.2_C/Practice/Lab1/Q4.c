#include<stdio.h>

int main()
{
    int num;
    int units,tens,hundreds;

    printf("Enter 3 digit number : ");
    scanf("%d",&num);
    
    units = num % 10;
    tens = (num/10) % 10;
    hundreds = num / 100;

    printf("The total sum of digits in %d is %d\n", num, units+tens+hundreds);


    return 0;
}
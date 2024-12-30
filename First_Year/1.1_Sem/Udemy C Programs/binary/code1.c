/* Program is to convert given date to hexadecimal value*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int day, month, year;

    printf("Enter day:");
    scanf("%d",&day);

    printf("Enter month:");
    scanf("%d",&month);

    printf("Enter year:");
    scanf("%d",&year);

    printf("day:0x%x\n",day);
    printf("month:0x%x\n",month);
    printf("year:0x%x\n",year);

    return 0;

}
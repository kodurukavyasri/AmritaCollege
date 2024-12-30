#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numofAsterisks;
    printf("Enter the no of asterisks you would like to see : ");
    scanf("%d", &numofAsterisks);

    while (numofAsterisks>0)
    {
        printf("*");

        numofAsterisks = numofAsterisks - 1;

    }

    return 0;

}
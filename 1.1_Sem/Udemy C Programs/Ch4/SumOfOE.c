#include <stdio.h>
// revieves some no from the user 7452
// sum of the even digts = 4 + 2 = 6
// sum of the odd digts = 7 + 5 = 12
// print (EvenDigitsSum - OddDigitsSum)

int main()
{
    int num;
    int EvenSum = 0, OddSum = 0;
    int currentdigit;
    int sum;
    int digit;

    printf("Enter the number :");
    scanf("%d",&num);

    while (num > 0)
    {
        currentdigit = num / 10;

        if (num % 2 == 0)
        {
            printf("The number is : %d\n", currentdigit);
            EvenSum += currentdigit;
            printf("The sum is :%d", EvenSum);

        }
        else
        {
            printf("The number is : %d\n", currentdigit);
            OddSum += currentdigit;
            printf("The sum is :%d", OddSum);

        }
        
        num = num / 10;
    }
    
    
    
}


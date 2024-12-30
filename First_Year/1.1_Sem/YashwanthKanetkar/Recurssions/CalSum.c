#include<stdio.h>

//write a Non- recursive sum to calculate the sum of a 5 digit number//

int main()
{
    int num, temp, rem, sum, i ;

    printf("Enter a 5 digit number : ");
    scanf("%d", &num);
    
    temp = num;
    sum  = 0;
    
     for (i = 0; i < 5; i++)
    {
        rem  = temp % 10;
        temp = temp / 10;
        sum  = sum + rem;
    }
    
    printf("The sum is : %d " ,sum);
    
    

}

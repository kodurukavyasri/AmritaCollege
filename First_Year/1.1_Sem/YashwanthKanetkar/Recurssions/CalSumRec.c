#include<stdio.h>

//write a Non- recursive sum to calculate the sum of a 5 digit number//

int main()
{
    int num, temp, sum, i ;

    printf("Enter a 5 digit number : ");
    scanf("%d", &num);
    
}

int rec ()
{
    int rem,i, temp, sum;
      for (i = 0; i < 5; i++)
    {
        rem  = temp % 10;
        temp = temp / 10;
        sum  = sum + rem;
    }
    
    printf("The sum is : %d " ,sum);
}
   
    
    



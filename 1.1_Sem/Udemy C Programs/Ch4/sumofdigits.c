#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    int i;
    int u,t,h;
    int sum;
    int m;

    printf("Enter the num:");
    scanf ("%d", &num);

   while (num>0)
   {
    m = num  % 10;    
    sum = sum + m;    
    num = num / 10;  
   }

    printf("The sum of the numbers : %d", sum);

    return 0;
}
    
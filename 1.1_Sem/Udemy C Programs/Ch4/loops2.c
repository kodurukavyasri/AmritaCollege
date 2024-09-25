#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,pow;
    int result = 1;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Enter the power : ");
    scanf("%d", &pow);

    while (pow>0)
    {
       
       result = result * num;
        pow--;
    
    }
 
    printf("%d in the power of %d = %d \n", num, pow,result);


    return 0;
    
}

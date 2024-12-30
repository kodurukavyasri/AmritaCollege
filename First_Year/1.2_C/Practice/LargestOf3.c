#include<stdio.h>

int main(){


    int num1, num2, num3;

    printf("Enter the number1 : "); 
    scanf("%d",&num1);

    printf("Enter the number2 : ");
    scanf("%d",&num2);

    printf("Enter the number3 : ");
    scanf("%d",&num3);

    if (num1>num2 && num1>num3)
    {
        printf("Num1 is greater");
    }

    else if (num1<num2 && num2>num3)
    {
        printf("Num2 is greater");
    }

    else {

        printf("Num3 is greater");
    }
    
    
    return 0;
}
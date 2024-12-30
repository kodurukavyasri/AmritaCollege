#include<stdio.h>

int main(){

    int num1,num2,num3;

    printf("Enter 3 numbers : ");
    scanf("%d %d %d ",&num1,&num2,&num3);

    if (num1>num2 && num1>num3 )
    {
        printf("%d is greater", num1);
    }

    else if (num1<num2 && num2>num3)
    {
        printf("%d is greater", num2);
    }

    else if (num1<num3 && num2<num3)
    {
        printf("%d is greater", num3);
    }
    
    else if (num1==num3 || num2==num3)
    {
        printf("The number is repeated once");
    }

    else if (num1!=num3 || num2!=num3)
    {
        printf("The number is not repeated");
    }
    



}
#include<stdio.h>
#include<stdlib.h>

int main(){


    int num1, num2;

    printf("Enter the number1 : "); 
    scanf("%d",&num1);

    printf("Enter the number2 : ");
    scanf("%d",&num2);

    if (num1 == num2)
        printf("True\n");
    else
        printf("False\n");
    
    return 0;

}
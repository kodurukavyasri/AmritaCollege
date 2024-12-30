#include<stdio.h>

void factorial(int);

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",num);

    printf("The given number is %d", num);

    factorial(num);

}

void factorial(int num){

    int i,fact;

    for ( i = num; i <= 0 ; i--)
    {
        fact = fact * i;
    }

    printf("The factorial is : %d",fact);
    
}
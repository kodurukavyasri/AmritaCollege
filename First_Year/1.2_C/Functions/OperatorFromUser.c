#include<stdio.h>

int main(){
    int x, y;
    char operator;

    printf("Enter the 2 numbers : ");
    scanf("%d %d", &x, &y);

    printf("Enter the operator you want : ");
    scanf("%c", &operator);
    scanf("%c", &operator);

    if (operator=='+')
    {
        printf("The sum of the numbers  is : %d ", x+y);
    }

    else if (operator=='-')
    {
        printf("The sub of the numbers  is : %d ", x-y);
    }

    else if (operator=='*')
    {
        printf("The sum of the numbers  is : %d ", x*y);
    }

    else if (operator=='/'){
        printf("The div of the numbers  is : %d ", x/y);
    }
    
    
    

    
}
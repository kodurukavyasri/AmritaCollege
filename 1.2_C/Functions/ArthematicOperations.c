#include<stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main(){
    int x,y;

    printf("Enter 2 numbers");
    scanf("%d %d",&x,&y);

    add(x,y);
    sub(x,y);
    mul(x,y);
    div(x,y);

    return 0;
}

int add(int a, int b){
    int addition;

    addition = a + b;

    printf(" %d + %d = %d ", a, b, addition);

    return 0;
}

int sub(int a, int b){
    int subtraction;

    subtraction = a - b;

    printf(" %d - %d = %d ", a, b, subtraction);

    return 0;
}

int mul(int a, int b){
    int multiplication;

    multiplication = a * b;

    printf(" %d * %d = %d ", a, b, multiplication);

    return 0;
}

int div(int a, int b){
    int division;

    division = a / b;

    printf(" %d / %d = %d ", a, b, division);

    return 0;
}
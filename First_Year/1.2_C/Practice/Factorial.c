#include<stdio.h>

void factorial(int);

int main(){

    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    factorial(num);

}

void factorial(int num){

    if (num == 0)
    {
        return 0;
    }
    
    int res = num + factorial(num-1);
}
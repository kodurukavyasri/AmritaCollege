#include<stdio.h>

int digit(int);

int main(){
    
    int num;
    
    printf("Enter the number you want : ");
    scanf("%d", &num);
    int sum;
    sum=digit(num);
    printf("The sum of digits is : %d", sum);
}

int digit(int n){
    
    static int sum = 0;
    
    int temp = n % 10;
    n = n/10;
    sum = sum +temp;
    
    if (n != 0)
    {
        digit(n);
    }
    
  return sum;
}
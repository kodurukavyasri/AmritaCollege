#include<stdio.h>

int digit(int);

int main(){
    
    int num;
    
    printf("Enter the number you want : ");
    scanf("%d", &num);
    int count;
    count=digit(num);
    printf("The no of digits is : %d", count);
}

int digit(int n){
    
    static int count = 0;
    
    //int temp = n % 10;
    n = n/10;
    count = count +1;
    
    if (n != 0)
    {
        digit(n);
    }
    
  return count;
}
#include <stdio.h>

int palindrome(int);

int main() {
    
    int num;
    
    printf("Enter a number : ");
    scanf("%d", &num);
    int temp;
    temp=palindrome(num);
    
     if (num = temp){
        printf("It is a palindrome ");
    }
    
    else{
        printf("It is not a palindrome ");
    }
    
    return 0;
}

int palindrome(int n){
    
    int rem, temp;
    
    rem = n % 10;
    n = n/10;
    temp = (temp*10) + rem; 
    
    if (n != 0)
    {
        palindrome(n);
    }
    
    return temp;
} 
    

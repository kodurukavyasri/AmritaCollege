/*
Problem Statement
A number is taken into consideration even though it may be split by two equally. 
The remainder that is not precisely divisible by 2 is known as an odd number. 
Simply expressed, odd numbers adopt the form n = 2k+1, whereas even numbers take the form n = 2k. 
Each integer will be made up of either even or odd integers.

Input:
10

Output:
Even

Input:
15

Output:
Odd
*/

// Start your code here

#include <stdio.h>
#include <stdlib.h>

//divisible by 2 it is even
//not divisible by 2 it is ood

int main(){
    int num;
     printf("Enter the number:");
     scanf("%d", &num);

     if(num % 2 == 0)
     printf("number is even\n");

     else
     printf("number is odd\n");

     return 0;

}

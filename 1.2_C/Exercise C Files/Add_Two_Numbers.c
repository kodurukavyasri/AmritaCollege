/*
Problem Statement
In the C programming language, the phrase "sum of two integers" refers to adding two integer values and 
printing the addition of two integer values and the printing of the result. To combine two numbers, 
all we need to do is utilize the "+" operator. In the link above, we have also explained several techniques.

Input:
10 20
Output:
30

Input:
20 20

Output:
40

*/
// Start your code here

#include<stdio.h>

int main(){
    int num1, num2;

    printf("Enter 2 numbers : ");
    scanf("%d %d", &num1, &num2);

    printf("The sum of the numbers is %d", num1+num2);

    return 0;
}
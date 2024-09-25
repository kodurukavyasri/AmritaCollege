/*
Problem Statement
Everyone knows the basics of mathematics,
For finding the area of a rectangle, we can get this by performing some
Print area with 2 decimals only

Area = length * breath

Input:
Length = 12
Breath = 5

Output:
Area of a rectangle of lenth=12 and breath=5 is 60

*/
// Start your code here


#include<stdio.h>

int main(){

    int length, breath, area;

    printf("Enter the length, breath : ");
    scanf("%d %d", &length, &breath);

    area = length * breath;

    printf("Area of the rectangle is %d ", area); 

    return 0;
}
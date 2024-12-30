/*
Problem Statement
Everyone knows the basics of mathematics,
For finding the area of a circle, we can get this by performing some
Print area with 2 decimals only

Area = Pie * Radius * Radius
Where the value of pie = 3.14 and the radius will be given by the user.

Input:
10

Output:
The radius of the circle is 10
The area of a given circle is 314.00

*/
// Start your code here

#include<stdio.h>
#include<math.h>

int main(){
    float radius, area, pi;

    printf("Enter the radius of the circle :");
    scanf("%f", &radius);

    pi = 3.14;

    area = radius*radius*pi;

    printf("The area of the circle is : %d", area);

    return 0;
}
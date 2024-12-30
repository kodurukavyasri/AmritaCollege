#include<stdio.h>

void area(int, int);
void perimeter(int, int);

void  area (int a, int b){

    int area = a*b;

    printf("The area is %d", area);

}

void  perimeter (int a, int b){

    int perimeter = 2*(a+b);

    printf("The area is %d", perimeter);

}

int main (){

    int length, breadth;

    printf("Enter the length and breadth of the reactangle");
    scanf("%d %d", &length, &breadth);

    perimeter(length,breadth);
    area(length, breadth);

    return 0;
}
#include<stdio.h>
#include<math.h>

void area(int *, int *, int *);

int main(){
    int side1, side2, side3;

    printf("Enter the 3 sides of the triagnle : ");
    scanf("%d %d %d", &side1, &side2, &side3);

    area(&side1, &side2, &side3);

}

void area(int *side1, int *side2, int *side3){
    float area;
    int  s;

    s =  (*side1+*side2+*side3)/2;
    printf("the s is %d", s);

    area = sqrt(s*((s-*side1)*(s-*side2)*(s-*side3)));

    printf("\nThe area of the triangle is %f", area);
}
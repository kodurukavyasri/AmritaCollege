#include<stdio.h>

void func(int*, int*, int*);

int main(){
    int x, y, z;

    printf("Enter 3 values : ");
    scanf("%d %d %d", &x,&y,&z);
    func(&x, &y, &z);

}

void func(int *x, int *y, int *z){

    int temp;

    printf("\n The given values are : x = %d, y = %d, z = %d", *x, *y, *z);
    temp = *z;
    *z = *y;
    *y = *x;
    *x = temp;

    printf("\n The given changed values are : x = %d, y = %d, z = %d", *x, *y, *z);

}
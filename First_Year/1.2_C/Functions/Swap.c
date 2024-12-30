#include<stdio.h>

void func(int, int);

int main(){
    int x, y;

    printf("Enter 2 values : ");
    scanf("%d %d", &x,&y);
    func(x, y);

}

void func(int x, int y){

    int temp;

    printf("\n The given values are : x = %d, y = %d ", x, y);
    temp = y;
    y = x;
    x = temp;

    printf("\n The given changed values are : x = %d, y = %d", x, y);

}
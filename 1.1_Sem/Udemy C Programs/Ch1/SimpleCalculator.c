#include<stdio.h>
#include<math.h>

int main(){
    int sum, sub, mul, div, mod;
    int x, y;

    printf("Enter 2 numbers");
    scanf("%d %d", &x,&y);

    sum = x+y;
    sub = x+y;
    mul = x*y;
    div = x/y;
    mod = x%y;

    printf("The sum is %f, sub is %f, mul is %f, div is %f , mod is %f", sum, sub, mul, div, mod);

    return 0;

    }
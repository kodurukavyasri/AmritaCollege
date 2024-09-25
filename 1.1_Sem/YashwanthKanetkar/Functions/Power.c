#include<stdio.h>
#include<math.h>

void power(int, int);

int main(){
    
    int x,y;

    printf("Enter the base and power : ");
    scanf("%d %d", &x, &y);

    power(x, y);

}

void power(int a, int b){
    int po;

    po = pow(a,b);

    printf("The value is : %d ", po);
}
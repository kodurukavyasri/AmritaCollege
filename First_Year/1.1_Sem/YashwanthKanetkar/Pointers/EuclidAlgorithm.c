#include<stdio.h>

void euclid(int*, int*);

int main(){
    
    int x,y;

    printf("Enter 2 numbers : ");
    scanf("%d %d", &x,&y);

    euclid(&x,&y);
}

void euclid(int *x, int *y){
    if (*x == 0) 
       return *y; 
    if (*y == 0) 
       return *x; 
  
    // base case 
    if (*x == *y) 
        return*y; 
  
    // a is greater 
    if (*x > *y) 
        return euclid(*x-*y, *y); 
    return euclid(*x, *y-*x);
}
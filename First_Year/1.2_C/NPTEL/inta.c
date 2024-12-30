#include<stdio.h>

int main(){
    extern a;
    printf("%d",a);
}

int a = 20;
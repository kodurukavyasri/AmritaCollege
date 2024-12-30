#include<stdio.h>
void fun1();
void fun2(int, int, int);
void fun3(int, int, int);

void fun1(){

    int n1,n2,n3;

    printf("Enter 3 numbers :");
    scanf("%d %d %d", &n1, &n2, &n3);

}

void fun2(int n1,int n2, int n3){

    printf("The numbers in order are : %d %d %d", n1, n2, n3);
}

void fun3(int n1,int n2, int n3){

    printf("The numbers in order are : %d %d %d", n3, n2, n1);
}

int main(){

    fun1();
    fun2(n1,n2,n3);
    fun3(n1,n2,n3);

}
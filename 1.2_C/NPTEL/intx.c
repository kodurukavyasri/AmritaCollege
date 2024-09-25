#include<stdio.h>

int x = 40;

int main(){
    static x = 20;
    printf("1 %d \n",x);
    {
        //int x = 10;
        printf("2 %d\n",x);
    }
 x++;
    printf("3 %d\n",x);
}
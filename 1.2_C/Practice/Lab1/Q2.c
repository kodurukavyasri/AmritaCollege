#include<stdio.h>

int main(){

    int i,count; 

    count = 0;

    for ( i = 15; i < 45; i++)
    {
        if (i % 2 != 0){

            count = count+i;
        }

        else
        continue;

    }

    printf("The sum is %d", count);
    
}
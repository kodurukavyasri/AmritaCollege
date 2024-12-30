#include <stdio.h>
#include <stdlib.h>

//divisible by 2 it is even
//not divisible by 2 it is ood

int main(){
    int num;
     printf("Enter the number:");
     scanf("%d", &num);

     if(num % 2 == 0)
     printf("number is even\n,num");

     else
     printf("number is odd\n,num");

     return 0;

}
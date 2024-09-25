#include<stdio.h>
#include<stdlib.h>

int main(){


    int num, u,t,h;

    printf("Enter the number : "); 
    scanf("%d",&num);

    u = num % 10;
    t = (num % 10) % 10;
    h = (num % 10) % 100;


    if (h < t < u)
        printf("Assesnding\n");
    else
        printf("Decending\n");
    
    return 0;

}
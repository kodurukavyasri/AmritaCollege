#include<stdio.h>
#include<stdlib.h>

int main(){


    int num;

    printf("Enter the number : "); 
    scanf("%d",&num);


    if (num > 0)
        printf("1\n");

    else if (num == 0)
    {
       printf("zero\n");
    }
    
    else
        printf("-1\n");
    
    return 0;

}
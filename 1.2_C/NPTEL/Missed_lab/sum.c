#include<stdio.h>

int main(){

    int arr[5];
    int count = 0;

    for (int i = 0; i <= 5; i++)
    {
        printf("Enter the value : ");
        scanf("%d", &i);
        count = count+i;
    }

    printf("%d", count);
}   

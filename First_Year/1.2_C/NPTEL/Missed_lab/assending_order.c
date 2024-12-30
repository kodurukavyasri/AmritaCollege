#include<stdio.h>

int main(){

    int arr[10];

    for (int i = 0; i <= 10; i++)
    {
        printf("Enter the value : ");
        scanf("%d", &i);
    }
    
    int temp;
    for (int j = 0; j <= 10; j++){

        for (int i = 0; i <= 10; i++){

        if(i>i+1){
            i = temp;
            temp = i;
            i = i+1; 
        }
        

    }
    }
    
    for (int i = 0; i <= 10; i++)
    {
        printf("Enter the value %d", arr[i] );
        
    }
}
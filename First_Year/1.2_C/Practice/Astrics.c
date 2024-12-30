#include<stdio.h>

     int main(){
        int astrics, i, k,s;

        printf("Enter the levels of astrics you want : ");
        scanf("%d", &astrics);

        for ( i = 0; i < astrics; i++,s=0)
        {
            for ( k = 0; k < i; ++k ){
            printf ("*");
            }
            
            printf("\n");
        }
        
    }
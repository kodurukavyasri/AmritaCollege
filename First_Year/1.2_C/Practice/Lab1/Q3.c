#include<stdio.h>

     int main(){
        int astrics, i, k;

        printf("Enter the levels of astrics you want : ");
        scanf("%d", &astrics);
        
        for ( i > 0; i <= astrics; i++)
        {
            for ( k = 0; k < i; ++k ){
            printf ("*");
            }
            
            printf("\n");
        }

        for ( i = astrics; i > 0; i--)
        {
            for ( k = 0; k < i; ++k ){
            printf ("*");
            }
            
            printf("\n");
        }
        
    }
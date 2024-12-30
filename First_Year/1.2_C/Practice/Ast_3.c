#include<stdio.h>

     int main(){
        int astrics, i, k;

        printf("Enter the level of numbers you want : ");
        scanf("%d", &astrics);

        for ( i = astrics; i >= 1; i--)
        {
            for ( k = 1; k <= i; ++k ){
            printf ("%d",k);
            }
            
            printf("\n");
        }
        
    }
    
  
#include <stdio.h>

void Bus(int bb[3][100]);

void Bus(int bb[3][100]){

    int count = 0;

    for(int i=0; i<3; i++){

        for(int j=0;j<10;j++){
            if(bb[i][j]!=0)
            count++;

            else
                break;

        }
    }

    printf("The total no stops in the bus is : %d", count);
}

int main() {
    int rows = 3, columns = 100;
    int i,j;
    int bb[rows][columns];
    
    for(i = 0; i <= rows; i++){
        for(j = 0; j <= columns; j++){
            printf("Enter the element : ");
            scanf("%d", &bb[i][j]);
        }
          
    }
    Bus(bb);
}


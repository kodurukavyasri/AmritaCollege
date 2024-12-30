#include <stdio.h>

// int countTrainStops(int tt[3][100]);

int countTrainStops(int tt[3][100]){
    int count = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<100; j++){
            if(tt[i][j]!=0){
                printf("\n %d %d %d", i, j, tt[i][j]);
                count++;
            }
            else
                break;
        }
    }

    printf("The total no stops of the train is : %d", count);
    return count;
}

int main() {
    int r=3, c=3, i, j, cnt;
    int trainmatrix[3][100];
    
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("Enter the element : ");
            scanf("%d", &trainmatrix[i][j]);
        } 
    }
    cnt =  countTrainStops(&trainmatrix);
}


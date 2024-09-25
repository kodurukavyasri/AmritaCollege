#include<stdio.h>
#include<math.h>

int main(){
    int range1, range2, i,squareroot,j, count;

    printf("Enter the range of numbers : ");
    scanf("%d %d", &range1, &range2);

    for ( i = range1; i <=range2; i++){

        squareroot = sqrt (i);
        count = 0;
        
        if (i==2 ||i ==3){
            printf("%d is prime\n", i);
            continue;
        }

        for(j=2; j<=squareroot; j++){
            //printf("i = %d, j=%d\n", i,j);
            if(i%j == 0){
                //printf("i = %d, j=%d\n", i,j);
                count = count+1;
            }

            
        }
        if (count == 0)
            {
                printf("%d is prime \n", i);
            }
    }   
    
}
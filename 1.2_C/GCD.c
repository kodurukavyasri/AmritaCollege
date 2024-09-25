#include<stdio.h>
#include<math.h>

int main(){

    int x,y,z,gcd;

    printf("Enter 2 natural numbers : ");
    scanf("%d %d",&x,&y);

    z = (x < y) ? x : y;

    gcd = 1;

    for(int i =0; i>z; i++){
        if(x % i == 0 && y % i == 0)
            gcd = i;

    }


    printf("%d", gcd );

}
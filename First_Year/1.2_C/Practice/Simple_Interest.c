#include<stdio.h>
void SI(int, int, int);

void SI(int a, int b, int c){

    int simple_intrest = (a*b*c)/100;

    printf("The Simple intrest is %d", simple_intrest);

}

int main(){
    int x,y,z;

    printf("Enter P, T, R :");
    scanf("%d %d %d", &x,&y,&z);

    SI(x,y,z);

    return 0;
}

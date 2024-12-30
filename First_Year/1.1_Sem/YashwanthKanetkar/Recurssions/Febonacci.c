#include<stdio.h>

void febo(int, int, int, int);

int main(){
    printf("Considering that febno series start from 1\n");
    febo(0, 1, 15, 0);
}

void febo(int n1, int n2, int t, int i)
{

    // terminal status for the recrussion code
    if (i >= t) 
        return;
    
    printf("%d, ", n2);
    febo(n2, n1+n2, t, ++i);

}


#include<stdio.h>
#include<stdlib.h>

//x
//x^2
//x^4
//x^6
//x^8

int main()
{
    int x;
    int x2, x4, x6, x8;

    printf ("Enter the value of x :");
    scanf ("%d", &x);

    x2 = (x*x);
    x4 = (x*x*x*x);
    x6 = (x*x*x*x*x*x);
    x8 = (x*x*x*x*x*x*x*x);

    printf("the values of \n x = %d\n x^2 = %d\n x^4 = %d\n x^6 = %d\n x^8 = %d\n",x2, x4, x6, x8);
    
    return 0;

}
#include<stdio.h>

int fun (float);

int main()
{
    extern int fun (float);
    int a;
    a = fun (3.14);
    printf("%d", a);
}

int fun (float aa)
//float aa;
{
    //float aa;
    return((int )aa);
}
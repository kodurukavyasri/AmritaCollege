#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int b = 20;
    int x;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    x = a;

    a = b;

    b = x;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

}

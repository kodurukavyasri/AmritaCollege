#include <stdio.h>

int main() {
    int a = 3, b = 5, c = 8;

    a += b *= c -= 5; 

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
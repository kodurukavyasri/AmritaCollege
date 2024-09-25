#include <stdio.h>

void function(int *, int *);

int main(){
    int avg, percentage;

    function(&avg, &percentage);
    printf(" Average = %d, percentage = %d ", avg, percentage);

    return 0;
}

void function (int *avg, int *percentage)
{
    int n1, n2, n3;
    printf("Enter 3 subjects marks for 100: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    *avg = (n1+n2+n3)/3;
    *percentage = *avg;
}


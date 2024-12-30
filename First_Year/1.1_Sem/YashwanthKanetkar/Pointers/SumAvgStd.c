#include <stdio.h>
#include <math.h>

void function(int *, int *, float *);

int main(){
    int sum, avg;
    float stdev;

    function(&sum, &avg, &stdev);
    printf("Sum = %d, Average = %d, Standard Devition = %f ", sum, avg, stdev);

    return 0;

}

void function (int *sum, int *avg, float *stdev)
{
    int n1, n2, n3, n4, n5;
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    *sum = n1+n2+n3+n4+n5;
    *avg = *sum/5;
    *stdev = sqrt(pow((n1 - *avg ),2)+
                  pow((n2 - *avg ),2)+
                  pow((n3 - *avg ),2)+
                  pow((n4 - *avg ),2)+
                  pow((n5 - *avg ),2)
                  )/5;
}


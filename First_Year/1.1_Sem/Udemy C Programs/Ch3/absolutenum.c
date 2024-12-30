#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    int num;
    printf("Enter Integer (whether Positive/Negative): ");
    scanf("%d", &num);

    if (num < 0)
        printf("The absolute value of %d is |%d|\n", num, (-1) * num);
    else
        printf("The absoulte value of %d is |%d|\n", num, num);

    return 0;
}

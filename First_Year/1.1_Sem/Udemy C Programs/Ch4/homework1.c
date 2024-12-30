#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, k;
    int blankspace;
    int n;

    printf("Enter the number of rows you require in pyramid : ");
    scanf("%d",&n);

    blankspace = n - 1;

    for ( i = 1; i <= n; i++)
    {
       for ( k = blankspace; k >= 1; k--)
       {
            printf(" ");
       }
       
       for ( j = 1; j <= i; j++)
       {
            printf("* ");
       }
       printf("\n");
       blankspace --;
    }
    return 0;
}


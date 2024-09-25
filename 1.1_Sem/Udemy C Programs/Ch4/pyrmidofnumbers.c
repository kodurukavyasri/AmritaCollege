#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k;
    int blankspace;
    int n;
    int currentvalue = 1;

    printf("Enter the number of rows you require in pyramid : ");
    scanf("%d",&n);

    blankspace = n-1;

    for ( i = 1; i <= n; i++)
    {
       for ( k = blankspace; k >= 1; k--)
       {
            printf(" ");
       }
       
       for ( j = 1; j <= i; j++)
       {
            printf("%d ", currentvalue);
            currentvalue +=1;
       }
       printf("\n");
       blankspace --;
    }
    return 0;
}


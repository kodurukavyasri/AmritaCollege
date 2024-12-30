#include <stdio.h>
#include <stdlib.h>

// n-th term of an arthemetic sequence
// an = a1 + (n-1)*d


int main()
{
    float a1,sn,an;
    int n;
    printf ("Enter the initial term (a1):");
    scanf ("%f", &a1);
    printf ("Enter the nth term in Arthmetic Sequence (an):");
    scanf ("%f", &an);
    printf ("Enter the no of elements in arthematic sequence (n):");
    scanf ("%f", &n);

    printf("The sn term of the arthmetic sequence = %2f\n", (a1+an) * n/2);
    
    return 0;

}
// this program gives the prime factors of a given number//

#include<stdio.h>


int primefactor(int x);

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    primefactor(num);
}

int primefactor(int x)
{
    int a;
    for(a=2;a<=x;a++)
    {
        if(x%a==0)
        {
            printf("%d, ",a);
            x = x/a;
            a--;
        }
    }
}
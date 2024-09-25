#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter side 1 :");
    scanf("%d",&a);

    printf("Enter side 2 :");
    scanf("%d",&b);

    printf("Enter side 3 :");
    scanf("%d",&c);

    if (a==b && b==c)
    {
        printf("It is an equilateral triangle");
    }
     if (a==b && b!=c)
    {
     printf("It is an isosles triangle");
    }
    else
    printf("it is an scalen triangle");
    
return 0;
}
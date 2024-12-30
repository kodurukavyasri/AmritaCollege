#include<stdio.h>
#include<stdlib.h>

int main()
{
    int birthyear,year;
    Printf("Enter your Birth Year");
    scanf("%d",birthyear);

    for(year=birthyear+1;year<=2023;year++)
    {
        if((year%4==0&&year%100!=0)||(year%400==0))

            printf("%d\n",year);

    }
    return 0;
}
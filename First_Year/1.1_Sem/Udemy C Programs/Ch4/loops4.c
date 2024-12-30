#include<stdio.h>
#include<stdlib.h>

int main()
{
    int price, totalprice = 0; 

   do
    {
        totalprice = totalprice + price;
        printf("please enter a price : ");
        scanf("%d",&price);
    }
   
    while (price != 0);
    printf("total order price = %d\n", totalprice);

    return 0;
}
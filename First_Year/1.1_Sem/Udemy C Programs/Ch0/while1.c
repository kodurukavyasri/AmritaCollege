#include <stdio.h>

int main()

{
    double Temprature1;
    
    printf("Enter the Temprature of your city in Fahrenhiet  :");
   scanf("%lf",&Temprature1);

    printf("Temprature in Celsius =%lf\n",(Temprature1 - 32) *1.8);
    
    return 0;

}


  
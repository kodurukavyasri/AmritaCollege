#include<stdio.h>
#include<stdlib.h>

// Value1> Value2 
// Value1< Value2 
// Value1< Value2 
// Value1 == Value2

int main()
{
    double Value1, Value2;

    printf("please enter Value 1:\n");
    scanf("%lf",&Value1);

    printf("please enter Value 2:\n");
    scanf("%lf",&Value2);


    if (Value1 > Value2){
        printf("** Value 1 is greater !!! ** \n");
        // Value1 > Value2
    }
    else if (Value1< Value2){
        printf("** value 2 is greater !!! ** \n" );
        // Value1 < value 2 
    }
    else (Value1 == Value2){
        printf("Value 1 and value 2 are same");
        // value1 = value2

    }
        

    return 0;
}

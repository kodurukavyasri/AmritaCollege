#include <stdio.h>

int main()
{
    double height, width;
    double perimeter;
    printf("Enter height:");
    scanf("%lf", &height);
    printf ("Enter Width:");
    scanf("%lf", &width);
    perimeter = 2*(height + width);
    printf("The perimeter of the rectangle = %lf\n", perimeter);
    
    return 0;
}



#include <stdio.h>
#include <stdlib.h>

// speed = distance/time
// Time = distance/speed


int main()
{
    float distance, speed;
    printf ("Enter the distance :");
    scanf ("%f", &distance);

    printf ("Enter the speed:");
    scanf ("%f", &speed);

    printf("The time required is = %d\n", distance/speed);
    
    return 0;

}
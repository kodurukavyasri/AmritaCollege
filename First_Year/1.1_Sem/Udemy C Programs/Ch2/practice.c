#include<stdio.h>
#include<stdlib.h>

//>= 80 Excellent Job
//>= 60 Good Job
//<60 fail better luck next time

int main()
{
    double grade;

    printf("enter your grade:");
    scanf("%lf", &grade);

    if (grade >= 80)
    printf("Excellent job");

    else if(grade >= 60)
    printf("Good job");

    else 
    printf("oh nooo you didnt pass the exam");
    
    return 0;

}

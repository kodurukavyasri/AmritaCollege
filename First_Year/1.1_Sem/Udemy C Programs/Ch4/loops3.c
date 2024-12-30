#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int grade;
    int totalsum = 0 , gradescount = 0;
    scanf("%d",&grade);

    while (grade!=-1)
    {
        totalsum = totalsum + grade;
        gradescount++;
        printf("please enter your grades or '-1' to stop : ");
        scanf("%d", &grade);
    }
    

    printf("you've enterd %d grades!\n",gradescount);
    if (gradescount != 0)
    printf("And your AVERAGE GRADE is %f \n", (float)totalsum / gradescount);

    return 0;

}
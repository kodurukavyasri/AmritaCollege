#include<stdio.h>

struct classroom{
    int rollnumber;
    float cgpa;
    struct name{
        char fname[20];
        char lname[20];
    }name;
}cr;

int main(){
    scanf("%d", &cr.rollnumber);
    scanf("%f", &cr.cgpa);
    scanf("%s", &cr.name.fname);

    printf("%d\n",cr.rollnumber);
    printf("%f\n",cr.cgpa);
    printf("%s\n",cr.name.fname);
}
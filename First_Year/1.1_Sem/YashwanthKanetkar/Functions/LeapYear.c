#include<stdio.h>

void leapyear(int);

int main(){
    int year;

    printf("Enter the year : ");
    scanf("%d", &year);

    leapyear(year);

}

void leapyear(int year){

    if (year%4 == 0)
    {
        if (year%100 == 0 && year%400 == 0)
        {
            printf("The given year is a leap year");
        }
        
        printf("The given year is a leap year");
        
    }

    else
        printf("The given year is not a leap year ");
    
}
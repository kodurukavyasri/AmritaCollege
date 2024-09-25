#include<stdio.h>
#include<stdlib.h>

// logical operators
// If we got 90 or higher
// And 
//less than 50 bucks

int main(){

int money;
int grade;

printf("Enter the money and grade:\n");
scanf("%d%d", &money, &grade );

if (money > 50 && grade>90)
    printf("Amazing Job!!\n");

else if (money >50 || grade >90)
    printf("Great Job!!\n");

else (!(grade>80))
    printf("Good Job!!\n");
}


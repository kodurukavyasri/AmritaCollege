/*
Problem Statement
Armstrong_number
Write a c program to check armstrong number.

Input: 153
Output: armstrong

Input: 22
Output: not armstrong

*/
// Start your code here

#include<stdio.h>
#include<math.h>

int main(){
    int num, temp, rem, a, arm;

    arm = 0;
    a = 0;

    printf("Enter a number : ");
    scanf("%d", &num);

    temp = num;

   while (temp !=0){
        rem = temp % 10;
        temp = temp / 10;
        a = a+1;
   }

   //printf("temp is %d", temp);

   temp = num;

   while (temp != 0){
        rem = temp % 10;
        arm = arm + pow(rem,a);
        temp = temp/10;
   }

   //printf("Arm is %d", arm);
   
   if(arm == num){

        printf("%d is an armstrong number", num);
   }

   else
   printf("%d is not an armstrong number", num);


return 0;

}
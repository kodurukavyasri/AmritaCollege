// Online C compiler to run C program online
#include <stdio.h>

// Factorial function
int calcFactorial(int v){
    int i, fact=1;
    
    // calculate the factorial using for loop
    for(i=1; i<=v; i++)
        fact *= i;
        
    // retuen the factorial value
    return fact;
}



int main() {
    
    int num = 145;
    int split = num;
    int splitFact;

    // split the number and calculate the factorial
    while (split>0){
        splitFact = splitFact + calcFactorial(split%10);
        split = split/10;
    }

    // validate whether both calculated factorial and the given numbers are same ? based on that print the output
    if (splitFact == num)
        printf("\n Its a magic number..! Given Number: %i, Calculated Number: %i", num, splitFact);
    else
         printf("\n Its a normal number");
    
    return 0;
}

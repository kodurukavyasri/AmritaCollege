#include<stdio.h>
#include<math.h>

int main(){
    int num, i, squareroot, count;

    printf("Enter the number : ");
    scanf("%d", &num);

    squareroot = sqrt (num);
    //printf("squareroot = %d\n", squareroot);
    count = 0;

    for(i=2; i<=squareroot; i++){

        if(num%i == 0){
            //printf("i = %d\n", i);
            count = count+1;
        }
    }

    if (count == 0)
    {
        printf("It is a prime number");
    }

    else
    {
        printf("It is a composite number");
    }
    
    
          
 }

        
    



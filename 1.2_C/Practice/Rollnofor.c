#include<stdio.h>

int main(){

    int rollno,i;
    printf("Enter your roll no : ");
    scanf("%d", &rollno);
    //printf("%d", rollno);

    for ( i = 1; i <= rollno; i++)
    {
        printf("%d * %d = %d \n", rollno,i, rollno*i);
    }
    
    return 0;
}
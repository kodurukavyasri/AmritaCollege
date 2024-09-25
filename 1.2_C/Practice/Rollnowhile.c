#include<stdio.h>

int main(){

    int rollno,i;
    i = 1;
    printf("Enter your roll no : ");
    scanf("%d", &rollno);
    //printf("%d", rollno);

    while (i<= rollno)
    {
        printf("%d * %d = %d \n", rollno,i, rollno*i);

        i++;
    }
    
    
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    printf("Enter the letter");
    scanf("%c",&ch);

    if(isalpha(ch))
    if (ch=="a"||ch=="e"||ch=="i"||ch=="o"||ch=="u");
    {
        printf("it is a vowel %c",ch);
        else
        printf("It is a consonant%c", ch);
    }

    if(isdigit(ch))
        printf("it is a digit %c",ch);

    else if(ispunchuation(ch))
        printf("it is a Punchuation %c",ch);

    return 0;


}
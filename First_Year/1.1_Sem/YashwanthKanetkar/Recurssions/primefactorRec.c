// this program gives the prime factors of a given number//

#include<stdio.h>

// Function declations
int primefactor_static(int);
void primefactor_rec(int, int);

// Start of the main program
int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

   //primefactor_static(num);
   primefactor_rec(num,2);
}

int primefactor_static(int num)
{
  static int i = 2;

  if(i <= num)
  {
    if(num % i == 0)
    {
      printf("%d, ", i);
      num = num/i;
    }
    else
      i++;

    primefactor_static(num);
  }
}

void primefactor_rec(int num, int i)
{

  // Validate if the iterator is less than the given number,
  // if so validate the reminder ortherwise increment the iterator and call the same function
  if (i <= num){
      if (num % i == 0){
        printf(" >>>> %d, ",i);
        num = num/i;
      }
      primefactor_rec(num, ++i);
  }
  else 
    return;
}

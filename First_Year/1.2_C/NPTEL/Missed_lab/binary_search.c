#include <stdio.h>
int main()
{
  int c, high, low, mid, size, search, array[100];

  printf("Enter number of elements\n");
  scanf("%d", &size);


  for (int i = 0; i <=size; i++)
    scanf("%d", &array[i]);

  printf("Enter value to find\n");
  scanf("%d", &search);

  high = 0;
  low = size - 1;
  mid = (high+low)/2;

  while (high <= low) {
    if (array[mid] < search)
      low = mid + 1;
    else if (array[mid] == search) {
      printf("%d found at location %d.\n", search, mid+1);
      break;
    }
    else
      high = mid - 1;

    mid = (low + high)/2;
  }
  if (low > high)
    printf("Not found! %d isn't present in the list.\n", search);

  return 0;
}


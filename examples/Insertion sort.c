#include <stdio.h>

void printArr (int array[], int n);
void sortArr (int array[], int n);

int main (void)
{
  const int n = 10;
  int array[10] = { 6, 5, 4, 3, 2, 1, 0, -1, -2, -3 };

  printArr (array, n);
  sortArr (array, n);
  printArr (array, n);
}

void printArr (int array[], int n)
{
  for (int i = 0; i < n; i++)
    {
      printf ("%i ", array[i]);
    }
  printf ("\n");
}

void sortArr (int array[], int n)
{
  int temp;

  for (int i = 1; i < n; i++)
    {
      for (int j = i; j > 0 && array[j] < array[j - 1]; j--)
	{
	  // swaping.
	  temp = array[j];
	  array[j] = array[j - 1];
	  array[j - 1] = temp;
	}
    }
}

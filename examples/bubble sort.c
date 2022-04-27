#include <stdio.h>

void printArr (int array[], int n);
void sortArr (int array[], int n);

int main (void)
{
  const int n = 10;
  int array[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

  printArr (array, n);
  sortArr (array, n);
  printArr (array, n);
}

void
printArr (int array[], int n)
{
  for (int i = 0; i < n; i++)
    {
      printf ("%i ", array[i]);
    }
  printf ("\n");
}

void
sortArr (int array[], int n)
{
  int temp, count = 0;

  for (int swaps = 1, i = 0; swaps > 0; i++)
    {
      swaps = 0;
      for (int j = 0; j < n - 1 - i; j++)
	{
	  if (array[j] > array[j + 1])
	    {

// swaps the values.
	      temp = array[j];
	      array[j] = array[j + 1];
	      array[j + 1] = temp;

// increases the count.
	      swaps++;
	    }

// increases iterations.
	  count++;
	}
    }
  printf ("Iterations: %i\n", count);
}

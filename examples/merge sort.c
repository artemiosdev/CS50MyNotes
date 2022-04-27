#include <stdio.h>
#include <stdlib.h>
#define SIZE 16
// Функция сортировки нисходящим слиянием
void mergeSort(int *a, int l, int r)
{
  if (l == r) return; // границы сомкнулись
  int mid = (l + r) / 2; // определяем середину последовательности
  // и рекурсивно вызываем функцию сортировки для каждой половины
  mergeSort(a, l, mid);
  mergeSort(a, mid + 1, r);
  int i = l;  // начало первого пути
  int j = mid + 1; // начало второго пути
  int *tmp = (int*)malloc(r * sizeof(int)); // дополнительный массив
  for (int step = 0; step < r - l + 1; step++) // для всех элементов дополнительного массива
  {
    // записываем в формируемую последовательность меньший из элементов двух путей
    // или остаток первого пути если j > r
    if ((j > r) || ((i <= mid) && (a[i] < a[j]))) 
    {
      tmp[step] = a[i];
      i++;
    }
    else 
    {
      tmp[step] = a[j];
      j++;
    }
  }
  // переписываем сформированную последовательность в исходный массив
  for (int step = 0; step < r - l + 1; step++)
    a[l + step] = tmp[step];
}
int main() 
{
  int a[SIZE];
  // Заполняем элементы массива
  for (int i = 0; i<SIZE; i++) 
  {
    a[i] = (rand() % 100);
    printf(" %d ", a[i]);
  }
  mergeSort(a, 0, SIZE - 1); // вызываем функцию сортировки
  printf("\n");
  // Выводим отсортированный массив
  for (int i = 0; i<SIZE; i++)
    printf(" %d ", a[i]);
  getchar();
  return 0;
}
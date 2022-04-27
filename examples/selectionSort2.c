#define _CRT_SECURE_NO_WARNINGS // для корректной работы scanf()
#include <stdio.h>

// Функция сортировки прямым выбором
void selectionSort(int *num, int size)
{
  int min, temp; // для поиска минимального элемента и для обмена
  for (int i = 0; i < size - 1; i++) 
  {
      
    min = i; // запоминаем индекс текущего элемента
    
    // ищем минимальный элемент чтобы поместить на место i-ого
    for (int j = i + 1; j < size; j++)  // для остальных элементов после i-ого
    {
      if (num[j] < num[min]) // если элемент меньше минимального,
        min = j;       // запоминаем его индекс в min
    }
    
    // меняем местами i-ый и минимальный элементы
    temp = num[i];      
    num[i] = num[min];
    num[min] = temp;
  }
}

int main() 
{
  int a[10]; // Объявляем массив из 10 элементов
  // Вводим значения элементов массива
  for (int i = 0; i < 10; i++) 
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
  
  selectionSort(a, 10);  // вызываем функцию сортировки
  // Выводим отсортированные элементы массива
  for (int i = 0; i<10; i++)
    printf("%d ", a[i]);
  getchar(); getchar();
  return 0;
}
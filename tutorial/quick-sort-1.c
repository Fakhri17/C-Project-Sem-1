#include <stdio.h>

int quicksort(int x, int y, int *arr)
{

  int start, finish, pivot, temp;
  start = x;
  finish = y;
  pivot = y;

  if (start <= finish)
  {
    while (start < finish)
    {
      // --> Mencari nilai yang lebih besar dari pivot
      while (arr[start] <= arr[pivot]) 
      {
        start++;
      }
       // --> Mencari nilai yang lebih kecil dari pivot
      while (arr[finish] < arr[pivot])
      {
        finish--;
      }
      // --> Memastikan bahwa pencarian nilai lebih besar dan lebih kecil belum saling bertemu
      if (start < finish) 
      {
        // Menukar nilai yang lebih besar dengan pivot dengan nilai yang lebih kecil dari pivot
        temp = arr[finish];
        arr[finish] = arr[start];
        arr[start] = temp;
      }
    }
    // Menukar nilai pivot dengan nilai pencarian nilai lebih kecil
    temp = arr[pivot];
    arr[pivot] = arr[finish];
    arr[finish] = temp;

    quicksort(x, finish - 1, arr);
    quicksort(finish + 1, y, arr);
  }
  else
  {
    return 0;
  }
}

void printArr(int *arr, int arrLength){
  for (int i = 0; i < arrLength; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");  
}

int main()
{

  int angka[] = {3, 5, 1, 4, 2, 6, 10, 7, 9, 8};
  int jumlah = sizeof(angka) / sizeof(int);

  printf("ARRAY SEBELUM SORTING : ");
  printArr(angka, jumlah);

  quicksort(0, jumlah - 1, angka);

  printf("ARRAY SESUDAH SORTING : ");
  printArr(angka, jumlah);
}
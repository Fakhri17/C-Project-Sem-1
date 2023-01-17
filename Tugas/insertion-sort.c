#include <stdio.h>
#include <stdbool.h>

void insertionSort(int *arr, int arrLength, bool isAsc){
  for (int step = 1; step < arrLength; step++)
  {
    int key = arr[step];
    int j = step - 1;

     // For descending order, change key < array[j] to key > array[j].
    if (isAsc)
    {
      while (key < arr[j] && j >= 0)
      {
        arr[j + 1] = arr[j];
      
        j--;
      }
    }
    else
    {
      while (key > arr[j] && j >= 0)
      {
        arr[j + 1] = arr[j];
      
        j--;
      }
    }
    arr[j+1] = key;
    
  }
}

void printArr(int *arr, int arrLength){
  for (int i = 0; i < arrLength; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");  
}

int main(){

  int arrInt[] = {1,9,4,5,6,7,2,3,8,1,9,4,5,6,7,2,3,8};
  int panjang = sizeof(arrInt)/sizeof(int);

  printf("baris 1 : ");
  
  for (int i = 0; i < panjang; i++)
  {
    insertionSort(arrInt, panjang, true);
    if (arrInt[i] == 6)
    {
      break;
    }
    printf("%d ", arrInt[i]); 
  }
  
  for (int i = 0; i < panjang; i++)
  {
    insertionSort(arrInt, panjang, false);
    if (arrInt[i] == 5)
    {
      break;
    }
    printf("%d ", arrInt[i]); 
  }

  printf("\n");

  printf("Baris ke 2 :");
  for (int i = 0; i < panjang; i++)
  {
    if (i % 2 == 0 || i == 0)
    {
      insertionSort(arrInt, panjang, true);
      printf("%d ", arrInt[i]);
    }
    else
    {
      insertionSort(arrInt, panjang, false);
      printf("%d ", arrInt[i]);
    }
  }
  
  
  return 0;
}
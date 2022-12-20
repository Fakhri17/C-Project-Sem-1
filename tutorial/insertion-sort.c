#include <stdio.h>

void insertionSort(int *arr, int arrLength){
  for (int step = 0; step < arrLength; step++)
  {
    int key = arr[step];
    int j = step - 1;

     // For descending order, change key < array[j] to key > array[j].
    while (key < arr[j] && j >= 0)
    {
      arr[j + 1] = arr[j];
      j--;
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
  int arr[] = {6,7,5,4,2,1};
  int arrLength = sizeof(arr)/sizeof(int);
  printf("Before sorted \n");
  printArr(arr, arrLength);

  printf("After sorted \n");
  insertionSort(arr, arrLength);
  printArr(arr, arrLength);

  return 0;
}
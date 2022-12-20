#include <stdio.h>

void bubleSort(int *arr, int arrLength){
  for (int i = 0; i < arrLength - 1; i++)
  {
    int tmp;
    for (int j = 0; j < arrLength - 1 - i; j++)
    {
      // ascending using arr > arr + 1
      // descending using arr < arr + 1
      if (arr[j] > arr[j+1])
      {
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }  
    }
  }
}

void printArr(int *arr, int arrLength){
  for (int i = 0; i < arrLength; i++)
  {
    printf("%d ", arr[i]);
  }
}

int main(){
  int arr[5] = { 5, 9, 2, 3, 1};
  int arrLength = sizeof(arr)/sizeof(int);

  printf("Before Sort : \n");
  printArr(arr, arrLength);

  printf("\nAfter Sort Sort : \n");
  bubleSort(arr, arrLength);
  printArr(arr, arrLength);
  
  return 0;
}
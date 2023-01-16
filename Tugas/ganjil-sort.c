#include <stdio.h>
#include <stdbool.h>

void bubleSort(int *arr, int arrLength, bool isAscending){
  int tukar;
  int tmp;
  do
  {
    tukar = 0;
    for (int i = 0; i < arrLength-1; i++)
    {
      if (isAscending)
      {
        if (arr[i] > arr[i+1])
        {
          tmp = arr[i];
          arr[i] = arr[i+1];
          arr[i+1] = tmp;
          tukar = 1;
        }  
      }
      else{
        if (arr[i] < arr[i+1])
        {
          tmp = arr[i];
          arr[i] = arr[i+1];
          arr[i+1] = tmp;
          tukar = 1;
        }  
      }
    }
    
  } while (tukar == 1);
}

void printArr(int *arr, int arrLength){
  for (int i = 0; i < arrLength; i++)
  {
    printf("%d ", arr[i]);
  }
}

int main(){
  int arr[8] = {89, 100, 18, 1, 81, 2, 120, 98};
  int arrLength = sizeof(arr)/sizeof(int);

  printf("Before Sort : \n");
  printArr(arr, arrLength);

  printf("\n\nAfter Sort Sort Ascending: \n");
  bubleSort(arr, arrLength, true);
  printArr(arr, arrLength);

   printf("\n\nAfter Sort Sort Descending: \n");
   bubleSort(arr, arrLength, false);
   printArr(arr, arrLength);

   return 0;
}
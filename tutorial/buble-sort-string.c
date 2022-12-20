#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  char nama[100];
} blackpink;

void bubleSort(blackpink *arr, int arrLength){
  for (int i = 0; i < arrLength - 1; i++)
  {
    blackpink temp;
    for (int j = 0; j < arrLength - 1 - i; j++)
    {
     // ascending using arr > arr + 1
    // descending using arr < arr + 1 
     if (strcmp(arr[j].nama, arr[j + 1].nama) > 0)
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void printArr(blackpink *arr, int arrLength){
  for (int i = 0; i < arrLength; i++)
  {
    printf("%s ", arr[i].nama);
  }
}


int main()
{
  
  blackpink member[4] = {"Jennie", "Rose", "Lisa", "Jisoo"};
  int arrLength = sizeof(member) / sizeof(blackpink);

  printf("Before Sort : \n");
  printArr(member, arrLength);
 
  printf("\nAfter Sort Sort : \n");
  bubleSort(member, arrLength);
  printArr(member, arrLength);

  return 0;
}
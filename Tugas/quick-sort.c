#include <stdio.h>

int quicksort(int x, int y, int arr[], int arrLength)
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
      while (arr[start] >= arr[pivot]) 
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

    quicksort(x, finish - 1, arr, arrLength);
    
    return arr[pivot];
  }
  else
  {
    return 0;
  }
  
  
}

int linearSearch(int arr[], int arrLength){
  quicksort(0, arrLength - 1, arr, arrLength);
  for (int i = 1; i < arrLength; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  return arr[0];
}

void printArr(int *arr, int arrLength){
  for (int i = 0; i < arrLength; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");  
}



int main(){
  int arrLength;
  scanf("%d", &arrLength);
  
  int arrayInt[arrLength];

  for (int i = 0; i < arrLength; i++)
  {
    scanf("%d", &arrayInt[i]);
  }


  printf("\n");
  printf("%d\n", linearSearch(arrayInt, arrLength));
  printf("%d", quicksort(0, arrLength - 1, arrayInt,  arrLength));
  printf("\n");
  printArr(arrayInt, arrLength);
  
}

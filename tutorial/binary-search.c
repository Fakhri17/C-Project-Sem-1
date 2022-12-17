#include <stdio.h>

int binarySearch(int search, int *arr, int right){
  int left = 0;
  while (left <= right)
  {
    int mid = (left + right) / 2;
    if (search == arr[mid])
    {
      return mid;
    }
    else if (search > arr[mid])
    {
      left = mid + 1;
    }
    else
    {
      right = mid - 1;
    }  
  }

  return -1;
}

int main(){
  int arrayInt[] = {1,2,3,4,5,6,7,8,9,10};
  int search = 9;
  int arrLength = sizeof(arrayInt)/sizeof(int);

  int result = binarySearch(search, arrayInt, arrLength - 1);

  (result == -1) ? printf("Angka tidak ditemukan") : printf("Angka %d berada pada index %d", search, result);
}
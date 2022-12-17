#include <stdio.h>

int linearSearch(int search, int *arr, int arrLength){
  for (int i = 0; i < arrLength; i++)
  {
    if (search == arr[i] && i != arrLength)
    {
      return i;
    }
  }
  return -1;
}

int main(){

  int arrayInt[] = {1,2,3,4,5,6,7,8,9,10};
  int search = 5;
  int arrLength = sizeof(arrayInt)/sizeof(int);

  int result = linearSearch(search, arrayInt, arrLength);

  (result == -1) ? printf("Angka tidak ditemukan") : printf("Angka %d berada pada index %d", search, result);

}
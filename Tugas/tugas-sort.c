#include <stdio.h>
#include <stdbool.h>
#include<stdlib.h>

void bubleSort(int *arr, int arrLength, bool isAscending){
  for (int i = 0; i < arrLength - 1; i++)
  {
    int tmp;
    for (int j = 0; j < arrLength - 1 - i; j++)
    {
      if (isAscending)
      {
        if (arr[j] > arr[j+1])
        {
          tmp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = tmp;
        }  
      }
      else
      {
        if (arr[j] < arr[j+1])
        {
          tmp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = tmp;
        }  
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

int binarySearchAsc(int search, int *arr, int right){
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

int binarySearchDsc(int search, int *arr, int right){
  int left = 0;
  while (left <= right)
  {
    int mid = (left + right) / 2;
    if (search == arr[mid])
    {
      return mid;
    }
    else if (search < arr[mid])
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

  int pilihan;

  do
  {
   system("cls");
   int arr[10];
   bool isAscending;
   
   if (pilihan == 2)
   {
      int panjang = sizeof(arr) / sizeof(int);
      isAscending = true;
      bubleSort(arr, panjang, isAscending);
      printArr(arr, panjang);
   }
   if (pilihan == 3)
   {
      
      int panjang = sizeof(arr) / sizeof(int);
      isAscending = false;
      bubleSort(arr, panjang, isAscending);
      printArr(arr, panjang);
   }
   if (pilihan == 4)
   {
     int cari;
     int panjang = sizeof(arr) / sizeof(int);
     isAscending = true;
     bubleSort(arr, panjang, isAscending);
     printArr(arr, panjang);
     printf("\nCari Angka : ");
     scanf("%d", &cari);
     int result = binarySearch(cari, arr, panjang - 1);
     (result == -1) ? printf("Angka tidak ditemukan") : printf("Angka %d berada pada index %d", cari, result);
   }
   
   
   printf("\n\n");
   printf("\n1. Masukkan Angka\n"); 
   printf("2. Ascending\n");
   printf("3. Descendingn\n");
   printf("4. Cari Angka\n");
   printf("5. exit\n");
   printf(" Pilih menu : ");
   scanf("%d", &pilihan);
   

   if (pilihan == 1)
   {
    int ba;
    printf("Masukkan Banyak Angka : ");
    scanf("%d", &ba);
    for(int i = 0; i < ba; ++i) {
      printf("Masukkan angka %d : ", i+1);
      scanf("%d", &arr[i]);
    }
    system("cls");
   }

  } while (pilihan == 1 || pilihan == 2 || pilihan == 3 || pilihan == 4);

  printf("\nKeluar menu");
  
  return 0;
}
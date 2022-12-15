#include <stdio.h>

int main() {
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  int i = 0, found = 0, cari;

  printf("Masukkan angka : ");
  scanf("%d", &cari);

  while (i < sizeof(arr)/sizeof(arr[0]))
  {
    if (cari == arr[i])
    {
      found = 1;
      printf("data %d ditemukan dalam array", cari);
    }   
    i++;
  }

  if (found == 0)
  {
     printf("Data tidak ditemukan pada array");
  }
  
}
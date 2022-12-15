#include <stdio.h>
#define row 3
#define col 3

int main (){

  int arr[row][col] = { {1,2,3}, {4,5,6}, {7,8,9} };
  int found = 0, cari;

  printf(" Masukkan angka untuk dicari : ");
  scanf("%d", &cari);

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (cari == arr[i][j])
      {
        found = 1;
        printf("Angka %d berada pada baris ke %d kolom ke %d", cari, j+1, i+1);
      }
    }
  }

  if (found == 0)
  {
    printf("Data tidak ditemukan pada array");
  }
  
  return 0;
}
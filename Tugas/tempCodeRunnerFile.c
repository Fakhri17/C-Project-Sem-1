#include <stdio.h>

int main(){

  // int menuAngka;

  // // Awal Program
  // do
  // {
  //   printf("\nMenu\n");
  //   printf("1. Ulang\n");
  //   printf("2. Keluar\n");
  //   printf(" Pilihan : ");
  //   scanf("%d", &menuAngka);
  // } while (menuAngka == 1);  // 3
  // // Akhir Program

  // printf("Anda Pilih Keluar");

  int N;

  printf("Masukkan jumlah N :");
  scanf("%d", &N);

  // i for pertama = 1
  // j for ke kedua = 1

  // i for pertama = 2
  // j for ke kedua = 1 2 

  // i for pertama = 3
  // j for ke kedua = 1 2 3 

  // 1 = 1
  // 1 2 = 2
  // 1 2 3 = 3
  for (int i = 1; i <= N; i++) // 1 .... 6
  {
    for (int j = 1; j <= i; j++) // 1 .. 3
    {
      printf(" *", j);
    }
    printf("\n", i);
  }
  
  // 1
  // 1

  // 2
  // 1 2

  // 3
  // 1 2 3
  
  return 0;
}
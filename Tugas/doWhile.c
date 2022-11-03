#include <stdio.h>

int main(){

  int menuAngka;

  do
  {
    printf("\nMENU\n");
    printf(" 1. Ulang\n");
    printf(" 2. Keluar\n");
    printf("Pilihan : ");
    scanf("%d", &menuAngka);
  } while (menuAngka == 1);

  printf("\nAnda Pilih Keluar");

  return 0;
}
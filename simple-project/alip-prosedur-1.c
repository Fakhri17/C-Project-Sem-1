#include <stdio.h>

void sebelum(int a, int b){
  printf("\nNilai Sebelum di tukar\n");
  printf("Nilai 1 : %d\n", a);
  printf("Nilai 2 : %d\n", b);
}

void sesudah(int a, int b){
  printf("\nNilai sesudah di tukar\n");
  printf("Nilai 1 : %d\n", b);
  printf("Nilai 2 : %d\n", a);
}

int main(){
  int a, b;
  printf("Masukkan nilai 1 : ");
  scanf("%d", &a);
  printf("Masukkan nilai 2 : ");
  scanf("%d", &b);
  sebelum(a, b);
  sesudah(a, b);
}
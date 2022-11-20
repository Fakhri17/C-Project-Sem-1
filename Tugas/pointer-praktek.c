#include <stdio.h>

void swapString(char *str1, char *str2, int n){

  char tmp;
  for (int i = n; i < 10; i++)
  {
    tmp = *(str1 + i);
    *(str1 + i) = *(str2 + i);
    *(str2 + i) = tmp;
  }
  
}

int main(){

  char kalimat1[11] = "ABCDEFGHIJ";
  char kalimat2[11] = "KLMNOPQRST";

  printf("Sebelum swap 5 karakter ke belakang\n");
  printf("Kalimat 1 : %s\n", kalimat1);
  printf("Kalimat 2 : %s\n", kalimat2);

  printf("\nSesudah swap 5 karakter ke belakang\n");
  swapString(kalimat1, kalimat2, 5);
  printf("Kalimat 1 : %s\n", kalimat1);
  printf("Kalimat 2 : %s\n", kalimat2);

  return 0;
}
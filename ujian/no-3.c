#include <stdio.h>

int main(){
  int jamLembur;

  printf("Masukkan Jam lembur : ");
  scanf("%i", &jamLembur);

  if (jamLembur < 12)
  {
    printf("Anda mendapatkan gaji lembur sebesar Rp100.000");
  }
  else
  {
    printf("Anda mendapatkan gaji lembur sebesar Rp300.000");
  }
  
  

  return 0;
}
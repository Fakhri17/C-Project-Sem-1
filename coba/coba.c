#include <stdio.h>

int main(){
  float uts, pr, tubes, totalTanpaUas, uas, totalWithUas;

  printf(" Masukkan Nilai UTS : ");
  scanf("%f", &uts);
  printf(" Masukkan Nilai PR : ");
  scanf("%f", &pr);
  printf(" Masukkan Nilai tubes : ");
  scanf("%f", &tubes);

  totalTanpaUas = (uts*35/100) + (pr*10/100) + (tubes*20/100);
  uas = 100*(75 - totalTanpaUas)/35;
  totalWithUas = totalTanpaUas + (100 - uas)*35/100;

  printf(" Nilai UAS minimum yang diperlukan adalah = %.2f", uas);
  if (totalWithUas < 75.00)
  {
    printf("\n Tuan Forger tidak memungkinkan untuk mendapatkan indeks A");
  }
  else
  {
     printf("\n Tuan Forger memungkinkan untuk mendapatkan indeks A");
  }
  
  

  
  
  return 0;
}
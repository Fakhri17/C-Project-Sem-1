#include <stdio.h>

int hitungPangkat(int angka, int pangkat){
  int hasil = 1;
  if (angka != 0)
  {
    for (int i = 1; i <= pangkat; i++)
    {
      hasil = hasil * angka;
    }
    return hasil;
  }
  else
  {
    return 0;
  }
}

int main(){
  int angka, pangkat;
  printf("Masukkan Angka : ");
  scanf("%d", &angka);
  printf("Masukkan Pangkat : ");
  scanf("%d", &pangkat);

  printf("Pangkat dari %d pangkat %d = %d", angka, pangkat, hitungPangkat(angka,pangkat));

  return 0;
}
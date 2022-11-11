#include <stdio.h>

float hitungLuas(float pil, float angka1, float angka2){
  float hasil;
  if (pil == 1)
  {
    hasil = (angka1*angka2)/2;
    return hasil;
  }
  else if (pil == 2)
  {
    hasil = angka1*angka2;
    return hasil;
  }
  else if (pil == 3)
  {
    hasil = (angka1*angka2)/2;
    return hasil;
  }  
}



int main(){
  float pil, angka1, angka2;
  printf("Pilih bangun datar\n");
  printf("1.Segitiga\n");
  printf("2.Persegi Panjang\n");
  printf("3.Layang2\n");
  printf("Masukkan pilihan :");
  scanf("%f", &pil);
  if (pil == 1)
  {
    printf(" Masukkan Alas : ");
    scanf("%f", &angka1);
    printf(" Masukkan Tinggi : ");
    scanf("%f", &angka2);
    printf("Hasil = %.2lf", hitungLuas(pil, angka1, angka2));
    // printf("%f", hitungLuas(pil));
  }
  else if (pil == 2)
  {
    printf(" Masukkan Panjang : ");
    scanf("%f", &angka1);
    printf(" Masukkan Lebar : ");
    scanf("%f", &angka2);
    printf("Hasil = %.2lf", hitungLuas(pil, angka1, angka2));
    // printf("%f", hitungLuas(pil));
  }
  else if (pil == 3)
  {
    printf(" Masukkan D1 : ");
    scanf("%f", &angka1);
    printf(" Masukkan D2 : ");
    scanf("%f", &angka2);
    printf("Hasil = %.2lf", hitungLuas(pil, angka1, angka2));
  }  
  
}
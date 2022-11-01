// https://www.freecodecamp.org/news/format-specifiers-in-c/

#include <stdio.h>

int main(){

  int a,t,r;
  float luas_segitiga, luas_lingkaran, keliling_linkaran;
  const float phi = 3.14;
  // printf("Masukan Alas = ");
  // scanf("%i", &a);
  // printf("Masukan Tinggi = ");
  // scanf("%i", &t);
  // luas_segitiga = 0.5 * a * t;
  // printf("luas_segitiga = %.2f", luas_segitiga);

  printf("Masukan Jari-jari = ");
  scanf("%i", &r);
  luas_lingkaran = phi * r * r;
  keliling_linkaran = 2 * phi * r;
  printf("Luas Lingkaran = %.2f", luas_lingkaran);
  printf("\nKeliling Lingkaran = %.2f", keliling_linkaran);

  return 0;
} 
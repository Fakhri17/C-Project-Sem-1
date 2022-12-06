#include <stdio.h>
int main()
{
  int jumlahmahasiswa, umur[5];
  char nama[10][10];
  printf("Masukkan Jumlah Mahasiswa:");
  scanf("%i", &jumlahmahasiswa);
  for (int i = 1; i <= jumlahmahasiswa; i++)
  {
    printf("Masukkan nama mahasiswa ke %d : ", i);
    scanf("%s", &nama[i]);
    printf("Masukkan Umur mahasiswa ke %d : ", i);
    scanf("%d", &umur[i]);
  }
  int total = 0;
  printf("\nData mahasiswa ada %i orang\n", jumlahmahasiswa);

  for (int i = 1; i <= jumlahmahasiswa; i++)
  {
    printf("%i. %s(%i tahun)\n", i, nama[i], umur[i]);
  }
  for (int i = 1; i <= jumlahmahasiswa; i++)
  {
    total = total + umur[i];
  }

  float rata = (float) total / (float) jumlahmahasiswa;
  printf("Maka rata rata dari %i siswa tersebut adalah %.2f", jumlahmahasiswa, rata);
  return 0;
}
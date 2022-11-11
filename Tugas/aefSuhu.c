#include <stdio.h>

float konversisuhu(float suhu, char jenissuhu, char tujuan)
{
  if (jenissuhu == 'c' && tujuan == 'f')
  {
    return ((9.0 / 5.0 * suhu) + 32);
  }
  else if (jenissuhu == 'c' && tujuan == 'r')
  {
    return ((4.0 / 5.0) * suhu);
  }
  else if (jenissuhu == 'c' && tujuan == 'k')
  {
    return (suhu + 273);
  }
  else if (jenissuhu == 'k' && tujuan == 'r')
  {
    return (4.0 / 5.0 * (suhu - 273));
  }
  else if (jenissuhu == 'k' && tujuan == 'c')
  {
    return (suhu - 273);
  }
  else if (jenissuhu == 'k' && tujuan == 'f')
  {
    return (9.0 / 5.0 * (suhu - 273) + 32);
  }
  else if (jenissuhu == 'f' && tujuan == 'c')
  {
    return (5.0 / 9.0 * (suhu - 32));
  }
  else if (jenissuhu == 'f' && tujuan == 'r')
  {
    return (4.0 / 9.0 * (suhu - 32));
  }
  else if (jenissuhu == 'f' && tujuan == 'k')
  {
    return (9.0 / 5.0 * (suhu - 273) + 32);
  }
  else if (jenissuhu == 'r' && tujuan == 'c')
  {
    return ((5.0 / 4.0) * suhu);
  }
  else if (jenissuhu == 'r' && tujuan == 'f')
  {
    return ((9.0 / 4.0) * suhu + 32);
  }
  else if (jenissuhu == 'r' && tujuan == 'k')
  {
    return ((5.0 / 4.0) * suhu + 273);
  }
}

int main()
{
  float suhu;
  char jenissuhu;
  char tujuan;
  printf("masukkan angka suhu :");
  scanf("%f", &suhu);
  printf("masukkan jenis suhu :");
  getchar();
  scanf("%c", &jenissuhu);
  printf("masukkan tujuan suhu :");
  getchar();
  scanf("%c", &tujuan);
  float hasil_konversi = konversisuhu(suhu, jenissuhu, tujuan);
  printf("Maka hasilnya dari  %c", jenissuhu);
  printf(" ke  %c", tujuan);
  printf(" adalah %.2f", hasil_konversi);
}
#include <stdio.h>
void hargatempatduduk(int tempatduduk, int rutejalan, int jumlahpenumpang)
{
  int harga;
  if (tempatduduk == 1 && rutejalan == 1)
  {
    harga = 180000;
  }
  else if (tempatduduk == 2 && rutejalan == 1)
  {
    harga = 150000;
  }
  else if (tempatduduk == 3 && rutejalan == 1)
  {
    harga = 120000;
  }
  else if (tempatduduk == 1 && rutejalan == 2)
  {
    harga = 170000;
  }
  else if (tempatduduk == 2 && rutejalan == 2)
  {
    harga = 140000;
  }
  else if (tempatduduk == 3 && rutejalan == 2)
  {
    harga = 100000;
  }
  int total = jumlahpenumpang * harga;
  printf("Maka Biaya yang dibayarkan adalah %i", total);
}
int main(void)
{
  int rute, tempatduduk, jumlahpenumpang;
  printf("Rute Perjalanan\n 1. Cilacap-Surabaya\n 2. Jogja-Surabaya\n");
  printf("Masukkan Rute: ");
  scanf("%i", &rute);
  printf("\n======================================\n");
  printf("\n 1.Bagian Depan\n 2. Bagian Tengah\n 3. Bagian Belakang");
  printf("\nTentukan tempat duduk:");
  scanf("%i", &tempatduduk);
  printf("Masukkan Jumlah Penumpang :");
  scanf("%i", &jumlahpenumpang);
  hargatempatduduk(tempatduduk, rute, jumlahpenumpang);
  return 0;
}


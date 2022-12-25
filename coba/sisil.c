#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  // define variabel struct
  char namaMahasiswa[15];
  int nilaiMat, nilaiBindo, nilaiBing, nilaiKejur;
  float ratarata;
} dataMahasiswa;


void tampilMahasiswa(dataMahasiswa *arr){
  for (int i = 0; i < 2; i++)
  {
    printf("Mahasiswa ke -%d\n", i+1);
    printf("Nama Mahasiswa : %s\n", arr[i].namaMahasiswa);
    printf("Nilai Matematika : %d\n", arr[i].nilaiMat);
    printf("Nilai Bahasa Indonesia : %d\n", arr[i].nilaiBindo);
    printf("Nilai Bahasa Inggris : %d\n", arr[i].nilaiBing);
    printf("Nilai Kejuruhan %d\n", arr[i].nilaiKejur);
    printf("Nilai Rata-rata %.2f\n", arr[i].ratarata);
    printf("\n");
  }
  
}


void cariBerdasarkanNama(dataMahasiswa *arr, char *nama){ 
  for (int i = 0; i < 2; i++)
  {
    if (strcmp(arr[i].namaMahasiswa, nama) == 0)
    {
      printf("Nama Mahasiswa : %s\n", arr[i].namaMahasiswa);
      printf("Nilai Matematika : %d\n", arr[i].nilaiMat);
      printf("Nilai Bahasa Indonesia : %d\n", arr[i].nilaiBindo);
      printf("Nilai Bahasa Inggris : %d\n", arr[i].nilaiBing);
      printf("Nilai Kejuruhan %d\n", arr[i].nilaiKejur);
      printf("Nilai Rata-rata %.2f\n", arr[i].ratarata);
    }
  }
}

void cariBerdasarkanRata(dataMahasiswa *arr, float ratarata){
  for (int i = 0; i < 2; i++)
  {
    if (arr[i].ratarata == ratarata)
    {
      printf("Nama Mahasiswa : %s\n", arr[i].namaMahasiswa);
      printf("Nilai Matematika : %d\n", arr[i].nilaiMat);
      printf("Nilai Bahasa Indonesia : %d\n", arr[i].nilaiBindo);
      printf("Nilai Bahasa Inggris : %d\n", arr[i].nilaiBing);
      printf("Nilai Kejuruhan %d\n", arr[i].nilaiKejur);
      printf("Nilai Rata-rata %.2f\n", arr[i].ratarata);
    }
  }
}

int main(){
  // define variabel proses
  dataMahasiswa listMahasiswa[2];
  int ratarata, pilihan;

  do
  {
    printf("Pilihan menu\n");
    printf("1. Input mahasiswa\n");
    printf("2. Data mahasiswa\n");
    printf("3. Search mahasiswa\n");
    printf("4. Keluar\n");
    printf("Masukkan Pilihan : ");
    scanf("%d",  &pilihan);
    
    if (pilihan == 1)
    {
      system("cls");
      for (int i = 0; i < 2; i++)
      {
        printf("Tambah Data mahasiswa ke %d\n", i+1);
        getchar();
        printf("Input Mahasiswa baru\n");
        printf("Masukkan Nama Mahasiswa : ");
        gets(listMahasiswa[i].namaMahasiswa);
        printf("Masukkan Nilai MTK : ");
        scanf("%d", &listMahasiswa[i].nilaiMat);
        printf("Masukkan Nilai Bindo : ");
        scanf("%d", &listMahasiswa[i].nilaiBindo);
        printf("Masukkan Nilai Bing : ");
        scanf("%d", &listMahasiswa[i].nilaiBing);
        printf("Masukkan Nilai Kejuruhan : ");
        scanf("%d", &listMahasiswa[i].nilaiKejur);
        printf("\n");
        ratarata = (float) ( listMahasiswa[i].nilaiMat + listMahasiswa[i].nilaiBindo + listMahasiswa[i].nilaiBing + listMahasiswa[i].nilaiKejur) / 4;
        listMahasiswa[i].ratarata = ratarata;
      }
      printf("\n"); 
    }
    else if (pilihan == 2)
    {
      system("cls");
      printf("Data Mahasiswa Baru\n");
      tampilMahasiswa(listMahasiswa);
    }
    else if (pilihan == 3)
    {
      system("cls");
      int pilihanCari;
      printf("Jenis cari data mahasiswa\n");
      printf("1. Berdasarkan Nama\n");
      printf("2. Berdasarkan rata-rata\n");
      printf("Masukkan pilihan: ");
      scanf("%d", &pilihanCari);
      if (pilihanCari == 1)
      {
        char cariNamaMahasiswa[15];
        printf("\n");
        getchar();
        printf("Cari nama mahasiswa ");
        gets(cariNamaMahasiswa);
        cariBerdasarkanNama(listMahasiswa, cariNamaMahasiswa);
        printf("\n");
      }
      else if (pilihanCari == 2)
      {
        int nilaiRataMahasiswa;
        printf("\n");
        printf("Cari nilai rata-rata mahasiswa ");
        scanf("%d", &nilaiRataMahasiswa);
        cariBerdasarkanRata(listMahasiswa, nilaiRataMahasiswa);
        printf("\n");
      }
    }
    
  } while (pilihan != 4);
  
  printf("\nprogram selesai");
}

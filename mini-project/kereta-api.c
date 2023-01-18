#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
  char namaKereta[20], keberangkatan[20], kelasKereta[15];
  int harga;
} kereta;

kereta dataKereta[3];


void swap(kereta *A, kereta *B){
    kereta temp = *A;
    *A = *B;
    *B = temp;
}

void sortKeretaString(kereta *listKereta, bool isAscending)
{
  char dummy[20];
  for (int a = 1; a < 3; a++)
  {
    strcpy(dummy, listKereta[a].namaKereta);
    int b = a - 1;
    if (isAscending)
    {
      while (b >= 0 && strcmp(listKereta[b].namaKereta, dummy) > 0)
      {
        swap(&listKereta[b + 1], &listKereta[b]);
        b--;
      }
    }
    else
    {
      while (b >= 0 && strcmp(listKereta[b].namaKereta, dummy) < 0)
      {
        swap(&listKereta[b + 1], &listKereta[b]);
        b--;
      }
    }
    strcpy(listKereta[b + 1].namaKereta, dummy);  
  }
}

void sortHargaKereta(kereta *listKereta, bool isAscending)
{
  int dummy;
  for (int a = 1; a < 3; a++)
  {
    dummy = listKereta[a].harga;
    int b = a - 1;
    if (isAscending)
    {
      while (b >= 0 && listKereta[b].harga > dummy)
      {
        swap(&listKereta[b + 1], &listKereta[b]);
        b--;
      }
    }
    else
    {
      while (b >= 0 && listKereta[b].harga < dummy)
      {
        swap(&listKereta[b + 1], &listKereta[b]);
        b--;
      }
    }
    listKereta[b + 1].harga = dummy;
  }
}

void tampilKereta(kereta *listKereta)
{
  system("cls");
  for (int i = 0; i < 3; i++)
  {
    printf("%s \t %s \t %s \t %d", listKereta[i].namaKereta, listKereta[i].keberangkatan,
           listKereta[i].kelasKereta, listKereta[i].harga);
    printf("\n");
  }
  printf("\n");
}

void inputDataKereta(kereta *listKereta)
{
  system("cls");
  for (int i = 0; i < 3; i++)
  {
    printf("Masukkan nama kereta api %d : ", i + 1);
    fflush(stdin);
    gets(listKereta[i].namaKereta);
    printf("Masukkan keberangkatan kereta api %d : ", i + 1);
    fflush(stdin);
    gets(listKereta[i].keberangkatan);
    printf("Masukkan kelas kereta api %d : ", i + 1);
    fflush(stdin);
    gets(listKereta[i].kelasKereta);

    printf("Masukkan harga %d : ", i + 1);
    scanf("%d", &listKereta[i].harga);

    printf("\n");
    getchar();
  }
  printf("\nData telah di inputkan \n");
  printf("Tekan enter untuk kembali ke menu\n");
  system("pause");
  system("cls");
}



void updateKereta(kereta *listKereta)
{
  system("cls");
  tampilKereta(listKereta);

  char cariNama[20];
  char gantiNama[20];
  char gantiTujuan[25];
  char gantikelas[20];
  int gantiHarga;
  char dummy[20];

  printf("Cari nama kereta : ");
  fflush(stdin);
  gets(cariNama);
  strcpy(dummy, cariNama);

  for (int i = 0; i < 3; i++)
  {

    if (strcmp(dummy, listKereta[i].namaKereta) == 0)
    {
      printf("DATA KERETA DITEMUKAN\n");
      printf("Ganti nama : ");
      fflush(stdin);
      gets(gantiNama);
      printf("Ganti Tujuan : ");
      fflush(stdin);
      gets(gantiTujuan);
      printf("Ganti Kelas :");
      fflush(stdin);
      gets(gantikelas);
      printf("Ganti Harga : ");
      scanf("%d", &gantiHarga);
      getchar();
      strcpy(listKereta[i].namaKereta, gantiNama);
      strcpy(listKereta[i].keberangkatan, gantiTujuan);
      strcpy(listKereta[i].kelasKereta, gantikelas);
      listKereta[i].harga = gantiHarga;
    }
  }
}

void cariDataKereta(kereta *listKereta)
{
  system("cls");
  tampilKereta(listKereta);

  char cariNama[20];

  printf("Cari data kereta berdasarkan nama : ");
  fflush(stdin);
  gets(cariNama);
  for (int i = 0; i < 3; i++)
  {
    if (strcmp(cariNama, listKereta[i].namaKereta) == 0)
    {
      printf("Data ditemukan berikut datanya\n");
      printf("%s \t %s \t %s\t %d", listKereta[i].namaKereta, listKereta[i].keberangkatan,
             listKereta[i].kelasKereta, listKereta[i].harga);
      printf("\n");
    }
  }
}

void urutKereta(kereta *listKereta)
{
  system("cls");
  tampilKereta(listKereta);

  int pilih;
  printf("Urutkan berdasarkan : \n");
  printf("1. Nama Kereta (ASC)\n");
  printf("2. Nama Kereta (DESC)\n");
  printf("3. Harga (ASC)\n");
  printf("4. Harga (DESC)\n");
  printf("Pilih : ");

  scanf("%d", &pilih);
  if(pilih == 1){
    sortKeretaString(listKereta, true);
  }
  else if (pilih == 2)
  {
    sortKeretaString(listKereta, false);
  }
  else if (pilih == 3)
  {
    sortHargaKereta(listKereta, true);
  }
  else if (pilih == 4)
  {
    sortHargaKereta(listKereta, false);
  }
  else
  {
    printf("Pilihan tidak ada\n");
    system("pause");
    urutKereta(listKereta);
  }
  printf("\n");
  printf("Data telah di urutkan\n");
  printf("Tekan enter untuk kembali ke menu\n");
  system("pause");
  system("cls");
}

int main()
{
  int pilihanLogin;
  system("cls");
  printf("Menu Login\n 1. Admin \n 2. User\n 3. Keluar\n");
  printf("Masukkan pilihan : ");
  scanf("%d", &pilihanLogin);
  if (pilihanLogin == 1)
  {
    admin:
    system("cls");
    
    int pilihan;
    
    do
    {
      printf("Menu Admin\n");
      printf("1. Input Data Kereta Api\n");
      printf("2. Update data kereta api\n");
      printf("3. Liat data data kereta api\n");
      printf("4. Cari data kereta api\n");
      printf("5. Urutkan data kereta api\n");
      printf("6. Keluar\n");
      printf("Pilih Menu : ");
      scanf("%d", &pilihan);
      if (pilihan == 1)
        inputDataKereta(dataKereta);
      else if (pilihan == 2)
        updateKereta(dataKereta);
      else if (pilihan == 3)
        tampilKereta(dataKereta);
      else if (pilihan == 4)
        cariDataKereta(dataKereta);
      else if (pilihan == 5)
        urutKereta(dataKereta);
      else if (pilihan == 6)
      {
        printf("Anda Keluar Menu\n");
        system("pause");
        main();
      }
      else
        printf("Pilihan tidak ada\n");
        system("pause");
        goto admin;

    } while (pilihan != 6);
  }
  else if (pilihanLogin == 2)
  {
    user:
    system("cls");
    int pilihan;
    
    do
    {
      printf("Menu User\n");
      printf("1. Liat data data kereta api\n");
      printf("2. Cari data kereta api\n");
      printf("3. Urutkan data kereta api\n");
      printf("4. Keluar\n");
      printf("Pilih Menu : ");
      scanf("%d", &pilihan);
      if (pilihan == 1)
        tampilKereta(dataKereta);
      else if (pilihan == 2)
        cariDataKereta(dataKereta);
      else if (pilihan == 3)
        urutKereta(dataKereta);
      else if (pilihan == 4)
      {
        printf("Anda Keluar Menu\n");
        system("pause");
        main();
      }
      else
        printf("Pilihan tidak ada\n");
        system("pause");
        goto user;
    } while (pilihan != 5);
  }
  else if (pilihanLogin == 3)
  {
    printf("Anda Keluar Menu\n");
    system("pause");
  }
  else
  {
    printf("Nomer yang anda inputkan tidak ada\n");
    system("pause");
    main();
  }

  return 0;
}
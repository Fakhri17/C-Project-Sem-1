#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
  char namaKereta[20], keberangkatan[20], kelasKereta[15];
  int harga;
} kereta;

typedef struct
{
  char namaPenumpang[20], kelasPenumpang[15], tujuan[20];
  int biaya;
} penumpang;

int inputBanyak = 1;
kereta dataKereta[1];
penumpang dataPenumpang;


void swap(kereta *A, kereta *B){
    kereta temp = *A;
    *A = *B;
    *B = temp;
}

void sortKeretaString(kereta *listKereta, bool isAscending)
{
  char dummy[20];
  for (int a = 1; a < inputBanyak; a++)
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
  for (int a = 1; a < inputBanyak; a++)
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
  if (listKereta[0].harga == 0)
  {
    printf("==== Data kereta tidak ada karena belum di inputkan ====\n\n");
  }
  else
  {
    printf("=== DATA KERETA ===\n");
    printf("Nama Kereta\tKeberangkatan\tKelas\tHarga\n");
    for (int i = 0; i < inputBanyak; i++)
    {
      printf("%s\t\t%s\t\t%s\t\t%d\n", listKereta[i].namaKereta, listKereta[i].keberangkatan, listKereta[i].kelasKereta, listKereta[i].harga);
    }
    printf("\n");
  }

}

void inputDataKereta(kereta *listKereta)
{
  

  system("cls");
  printf("Input Banyak Data Kereta : ");
  scanf("%d", &inputBanyak);
  listKereta[inputBanyak];
  for (int i = 0; i < inputBanyak; i++)
  {
    printf("Nama Kereta %d : ", i + 1);
    fflush(stdin);
    gets(listKereta[i].namaKereta);
    printf("Keberangkatan Kereta %d : ", i + 1);
    fflush(stdin);
    gets(listKereta[i].keberangkatan);
    printf("Kelas Kereta %d : ", i + 1);
    fflush(stdin);
    gets(listKereta[i].kelasKereta);
    printf("Harga Kereta %d : ", i + 1);
    scanf("%d", &listKereta[i].harga);
    getchar();
    printf("\n");
  }
  printf("\nData telah di inputkan \n");
  printf("Tekan enter untuk kembali ke menu\n");
  system("pause");
  system("cls");
}



void updateKereta(kereta *listKereta)
{
  system("cls");
  if (listKereta[0].harga == 0)
  {
    printf("==== Data kereta tidak ada karena belum di inputkan ====\n\n");
  }
  else
  {
    tampilKereta(listKereta);

    char cariNama[20], gantiNama[20], gantiTujuan[25], gantikelas[20];
    int gantiHarga;
    char dummy[20];
    bool isFound = false;
    int temp = 0;
    

    printf("Cari nama kereta : ");
    fflush(stdin);
    gets(cariNama);
    strcpy(dummy, cariNama);
    for (int i = 0; i < inputBanyak; i++)
    {
      temp = strcmp(dummy, listKereta[i].namaKereta);
      if (temp == 0)
      {
        printf("=== DATA KERETA DITEMUKAN === \n");
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
        isFound = true;
      }
    }
    if (!isFound)
    {
      printf("DATA TIDAK DITEMUKAN\n\n");
    }
    else
    {
      printf("DATA BERHASIL DIUBAH\n");
      printf("Tekan enter untuk kembali ke menu\n");
      system("pause");
      system("cls");
    }
  }
}

void cariDataKereta(kereta *listKereta)
{
  system("cls");
  if (listKereta[0].harga == 0)
  {
    printf("==== Data kereta tidak ada karena belum di inputkan ====\n\n");
  }
  else
  {
    tampilKereta(listKereta);

    char cariNama[20];
    bool isFound = false;
    int temp = 0;

    printf("Cari data kereta berdasarkan nama : ");
    fflush(stdin);
    gets(cariNama);
    for (int i = 0; i < inputBanyak; i++)
    {
      temp = strcmp(cariNama, listKereta[i].namaKereta);
      if (temp == 0)
      {
        printf("=== DATA KERETA DITEMUKAN === \n");
        printf("Nama Kereta : %s \n", listKereta[i].namaKereta);
        printf("Keberangkatan : %s \n", listKereta[i].keberangkatan);
        printf("Kelas Kereta : %s \n", listKereta[i].kelasKereta);
        printf("Harga : %d \n", listKereta[i].harga);
        isFound = true;
      }
    }
    if (!isFound)
    {
      printf("DATA TIDAK DITEMUKAN\n\n");

    }
  }
  
  
}

void urutKereta(kereta *listKereta)
{
  system("cls");
  if (listKereta[0].harga == 0)
  {
    printf("==== Data kereta tidak ada karena belum di inputkan ====\n\n");
  }
  else
  {
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
    
    tampilKereta(listKereta);
    printf("=== Data telah di urutkan ===\n");
    printf("Tekan enter untuk kembali ke menu\n");
    system("pause");
    system("cls");
  }
  
  
  
}

void pesanTiket(kereta *listKereta){

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
    system("cls");
    int banyakLogin = 1;
    admin:
    char username[20];
    char password[20];
    int pilihan;
    printf("Username : ");
    fflush(stdin);
    gets(username);
    printf("Password : ");
    fflush(stdin);
    gets(password);
    if (banyakLogin == 3)
    {
      printf("Anda sudah 3x salah login\n");
      system("pause");
      main();
    }

    if (strcmp(username, "admin") == 0 && strcmp(password, "admin") == 0)
    {
      system("cls");
      printf("Login Berhasil\n");
      menuAdmin:
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
          printf("Anda Keluar Menu Admin\n");
          system("pause");
          main();
        }
        else{
          printf("Pilihan tidak ada\n");
          goto menuAdmin;
        }

      } while (pilihan != 6);
    }
    else
    {
      printf("Username atau password salah\n");
      banyakLogin++;
      goto admin;
    }
    
    
    
  }
  else if (pilihanLogin == 2)
  {
    system("cls");
    user:
    int pilihan;
    
    do
    {
      printf("Menu User\n");
      printf("1. Liat data data kereta api\n");
      printf("2. Cari data kereta api\n");
      printf("3. Urutkan data kereta api\n");
      printf("4. Pesan tiket kereata api\n");
      printf("5. Keluar\n");
      printf("Pilih Menu : ");
      scanf("%d", &pilihan);
      if (pilihan == 1)
        tampilKereta(dataKereta);
      else if (pilihan == 2)
        cariDataKereta(dataKereta);
      else if (pilihan == 3)
        urutKereta(dataKereta);
      else if (pilihan == 4)
        pesanTiket(dataKereta);
      else if (pilihan == 5)
      {
        printf("Anda Keluar Menu User\n");
        system("pause");
        main();
      }
      else
      {
        printf("Pilihan tidak ada\n");
        goto user;
      }
    } while (pilihan != 5);
  }
  else if (pilihanLogin == 3)
  {
    printf("Anda Keluar Menu\n");
    system("pause");
    exit(0);
  }
  else
  {
    printf("Nomer yang anda inputkan tidak ada\n");
    system("pause");
    main();
  }

  return 0;
}
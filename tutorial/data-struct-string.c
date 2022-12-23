#include <stdio.h>
#include <stdlib.h>
 
struct mahasiswa{
  char nama[50];
  int umur;
};

int main(){
  struct mahasiswa mhs;
  printf("=== Program Pendataan Mahasiswa ===\n\n");

  printf("Nama Mahasiswa : ");
  gets(mhs.nama);

  printf("Umur Mahasiswa : ");
  scanf(" %d", &mhs.umur);

  printf("\nMahasiswa bernama %s memiliki umur %d \n", mhs.nama, mhs.umur);

  return 0;
}
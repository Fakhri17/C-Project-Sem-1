#include <stdio.h>

void tambah_5 (int *angka){
  *angka = *angka + 5;
}
int main(){
  // int x = 2001;
  // int *px = &x;
  // // x = 2000;
  // *px = 2002;
  // // Pointer akan merubah aalamat memori yang sudah di define meskipun tidak merubah variabelnya secara langsung
  // printf("Alamat memori x: %p\n", &x);
  // printf("Nilai x: %d\n\n", x);

  // printf("Alamat memori pointer px: %p\n", px);
  // printf("Isi pointer px: %d\n\n", *px);

  // int waktu = 0;

  // // membuat pointer yang mereferensikan alamat dari variabel waktu
  // int *p_waktu = &waktu;

  // // mengakses variabel time melalui pointer
  // printf("Value *p_waktu = %d\n", *p_waktu);
  // printf("Value waktu awal = %d\n", waktu);

  // // mengubah data variabel time melalui pointer
  // *p_waktu = 5;

  // // melihat value dari variabel waktu
  // printf("Value waktu setelah diubah = %d\n", waktu);
  // membuat prosedur dengan parameter berupa pointer
  

  // int nilai = 90;

  // printf("Nilai awal adalah %d", nilai);

  // /* memanggil prosedur tambah_5 dengan argumen disertai simbol ampersand `&` yang
  // digunakan untuk meneruskan alamat variabel nilai ke dalam prosedur tambah_5 */
  // tambah_5(&nilai);
  // printf("\nNilai setelah ditambah adalah %d",nilai);

  int jumlah = 13;

  // membuat pointer untuk variabel jumlah
  int *ptr_1;
  // menyimpan alamat memori dari variabel jumlah
  ptr_1 = &jumlah;

  // membuat pointer untuk pointer ptr_1
  int **ptr_2;
  // menyimpan alamat memori dari pointer ptr_1
  ptr_2 = &ptr_1;

  // Menampilkan value dari variabel jumlah
  printf("Value jumlah = %d\n", jumlah);
  printf("Value jumlah menggunakan single pointer = %d\n", *ptr_1);
  printf("Value jumlah menggunakan double pointer = %d\n", **ptr_2);
  return 0;
}
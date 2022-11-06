#include <stdio.h>

int main(){

  int umurAdek;
  char tidakBawaOrtu;

  printf("Masukkan Umur Adek : ");
  scanf("%d", &umurAdek);
  printf("bawa ortu (y/t) : ");
  getchar();
  scanf("%c", &tidakBawaOrtu);
  printf("\numur adek adalah %d\n", umurAdek);
  printf("bawa ortu ? %c\n", tidakBawaOrtu);
  getchar();

  if (umurAdek > 13)
  {
    printf("Adek bisa masuk bioskop");
  }
  else if (umurAdek > 13 && tidakBawaOrtu == 'y') // true = jika salah satu kondisi itu bernilai true
  {
    printf("Adek bisa masuk bioskop dan membawa ortu");
  }
  else
  {
    printf("Adek tidak bisa masuk bioskop");
  }

  return 0;
}
#include <stdio.h>

int main(){
  char kata[30] = "aku senang belajar alpro";
  char cari;
  int arrayTemp[5];
  int k = 0;

  printf("Masukan huruf yang dicari: ");
  scanf("%c", &cari);

  for (int i = 0; i < sizeof(kata); i++)
  {
     if (cari == kata[i])
    {
      printf("ADA\n");
      break;
    }
  }
  
  for (int i = 0; i < sizeof(kata); i++)
  {
    
    if (cari == kata[i])
    {
      arrayTemp[k] = i;
      k++;
    }
    
  }

  printf("Lokasi yang sama : ");
  for (int i = 0; i < sizeof(arrayTemp)/sizeof(int); i++)
  {
    printf("%d ", arrayTemp[i]);
  }
  
  
}
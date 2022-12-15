#include <stdio.h>

int main() {
  
  char kalimat[] = "apa kabar semuanya, apakah semuanya baik baik saja";
  int panjangKalimat = sizeof(kalimat)/sizeof(char);
  for (char chr = 'a'; chr <= 'z'; chr++)
  {
    int count = 0;
    for (int i = 0; i < panjangKalimat; i++)
    {
      if (kalimat[i] == chr)
      {
       count++;
      }
    }
    if (count > 0)
    {
      printf("Huruf %c memiliki jumlah sebanyak %d\n", chr, count);
    }
    
    
  }
  
  return 0;
}
#include <stdio.h>

int main(){
  char kalimat[] = "fakultas teknologi informasi dan bisnis";
  int vokalA = 0, vokalI = 0, vokalU = 0, vokalE = 0, vokalO = 0;
  int totalVokal;

  for (int i = 0; i < sizeof(kalimat); i++)
  {
    if (kalimat[i] == 'a')
    {
      vokalA++;
    }
    else if (kalimat[i] == 'i')
    {
      vokalI++;
    }
    else if (kalimat[i] == 'u')
    {
      vokalU++;
    }
    else if (kalimat[i] == 'e')
    {
      vokalE++;
    }
    else if (kalimat[i] == 'o')
    {
      vokalO++;
    }
  }

  totalVokal = vokalA + vokalI + vokalU + vokalE + vokalO;

  printf("\nTotal huruf vokal pada '%s' sejumlah %d huruf\n", kalimat, totalVokal);
  printf("Terdiri dari huruf a sebanyak %d\n", vokalA);
  printf("Terdiri dari huruf i sebanyak %d\n", vokalI);
  printf("Terdiri dari huruf u sebanyak %d\n", vokalU);
  printf("Terdiri dari huruf e sebanyak %d\n", vokalE);
  printf("Terdiri dari huruf o sebanyak %d\n\n", vokalO);
  return 0;  
}
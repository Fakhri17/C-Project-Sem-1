#include <stdio.h>

int main(){

  char huruf[11];
  int hurufB = 0, hurufD = 0, hurufI = 0, hurufU = 0;

  fgets(huruf, sizeof(huruf), stdin);

  printf("%s\n", huruf);
  for (int i = 0; i < 11; i++)
  {
    if (huruf[i] == 'B' || huruf[i] == 'b')
    {
      hurufB++;
    }
    else if (huruf[i] == 'D' || huruf[i] == 'd')
    {
      hurufD++;
    }
    else if (huruf[i] == 'I' || huruf[i] == 'i')
    {
      hurufI++;
    }
    else if (huruf[i] == 'U' || huruf[i] == 'u')
    {
      hurufU++;
    }
  }

  printf("b: %d\n", hurufB);
  printf("d: %d\n", hurufD);
  printf("i: %d\n", hurufI);
  printf("u: %d\n", hurufU);
  
}
#include <stdio.h>
#include <stdlib.h>

int main(){
  int value, i = 0;
  int angka[5];

  printf("Input angka: "); scanf("%d", &value);
  int tmp = value;
  if (value < 1000)
  {
    printf("Inputan harus lebih dari 1000 dan kurang dari 10000");
  }
  else
  {
    while (value > 0) {
      int digit = value % 10;
      angka[i] = digit;
      value /= 10;
      i++;
    }
    if (tmp % angka[0] == 0 && tmp % angka[1] == 0 && tmp % angka[2] == 0 && tmp % angka[3] == 0)
    {
      printf("\nBilangan tersebut adalah bilangan Bravo\n");
    }
    else
    {
      printf("\nBilangan tersebut adalah bilangan biasa\n");
    }
  }
  

 return 0;
}
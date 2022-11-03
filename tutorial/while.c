#include <stdio.h>

int main(){
  int num;
  printf("Masukkan angka: ");
  scanf("%d", &num);

  while (num % 2 != 0)
  {
    printf("Masukkan angka: ");
    scanf("%d", &num);
    if (num % 2 != 0)
    {
     printf("\nGanjil");
    }
    else
    {
     printf("\n Genap");
    }
    
  }
  
}
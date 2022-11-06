#include <stdio.h>

int main(){
  int max, min, i = 1, bil;



  
  while (i<=5)
  {
    printf("Masukkan Bilangan ke %d : ", i);
    scanf("%d", &bil);
    i++;

    if (i==1)
    {
        min=bil;
	     	max=bil;
		}
    else if (bil < min)
    {
      min=bil;
    }
    else if (bil > max)
    {
      max=bil;
    }

     
    
  }
  printf("Bilangan terbesar : %d\n", max);
  printf("Bilangan terkecil : %d\n", min);
     
}
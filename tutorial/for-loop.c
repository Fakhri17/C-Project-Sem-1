#include <stdio.h>

int main(){
  int i, max_loop = 10;
  int a  = 0, b = 0;

  // For Lop
  for (i = 1; i <= max_loop; i++)
  {
    printf("Perulangan For Loop %d\n", i);
  }

  printf("\n");

  // perulangan do while
  while(a <= 10){
     printf("Perulangan While %d\n",a);
     a++;
  }

  printf("\n");

  // perulangan do while
  do
  {
   printf("Perulangan Do While %d\n",b);
   b++;
  } while (b <= 10);
  
  return 0;
}
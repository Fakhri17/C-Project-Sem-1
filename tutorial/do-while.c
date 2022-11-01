#include <stdio.h>

int main(){

  int i = 1;

  // Akan melakukan perulangan jika kondisi bersifat true
  // while loop
  // while (i <= 10)
  // {
  //   printf("%d\n", i);
  //   i++;
  // }
  

  // Perulangan sesuai kondisi dan akan berhenti jika sudah terpenuhi
  // do while-loop
  do
  {
   printf("%d\n", i);
   i = i + 1;
  } while (i <= 10);
  
  return 0;
}
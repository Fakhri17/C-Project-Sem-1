#include <stdio.h>

int main(){
  char huruf = 'A';

  do
  {
    printf("Massukan Huruf : ");
    scanf("%c", &huruf);
    getchar();
  } while (huruf == 'A' || huruf != 'B' && huruf != 'b');

  printf("perulangan berhenti anda input B");
   
   return 0;
}
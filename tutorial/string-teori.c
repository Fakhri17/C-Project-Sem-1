#include <stdio.h>

int main(){

  char kota[] = "Surabaya";
  char pulau[] = "pulau jawa";
  char kata[] = "Saya suka makan nasi goreng jawa";
  char nama[] = "Fakhri Alauddin";
  int A = 0, B = 0 , C = 0, D = 0;

  for (int i = 0; i < sizeof(kota); i++)
  {
    if (kota[i] == 'a' || kota[i] == 'A')
    {
      A++;
      
    }
    
  }


  printf("Kalimat %s memiliki huruf A sebanyak %i\n", kota, A);

   for (int i = 0; i < sizeof(pulau); i++)
  {
    if (pulau[i] == 'a' || pulau[i] == 'A')
    {
      B++;
      
    }
   
  }
  printf("Kalimat %s memiliki huruf A sebanyak %i\n", pulau, B);


   for (int i = 0; i < sizeof(kata); i++)
  {
    if (kata[i] == 'a' || kata[i] == 'A')
    {    
      C++; 
    }
    
   
  }
  printf("Kalimat %s memiliki huruf A sebanyak %i\n", kata, C);

   for (int i = 0; i < sizeof(nama); i++)
  {
    if (nama[i] == 'a' || nama[i] == 'A')
    {    
      D++; 
    }
    
   
  }
  printf("Kalimat %s memiliki huruf A sebanyak %i\n", nama, D);
   
  return 0;
}
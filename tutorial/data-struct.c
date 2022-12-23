#include <stdio.h>
#include <stdlib.h>
 
struct rectangle {
   int panjang;
   int lebar;
};
 
int main()
{
  // ---- if using static data ----- //
  
  // struct rectangle persegi;
  // persegi.panjang = 10;
  // persegi.lebar = 5;
  // printf("panjang persegi : %d \n", persegi.panjang);
  // printf("Lebar persegi   : %d \n", persegi.lebar);

  // if using array//

   struct rectangle persegi[3]; 
   persegi[0].panjang = 10;
   persegi[0].lebar = 5;
   printf("panjang persegi 1 : %d \n", persegi[0].panjang);
   printf("Lebar persegi 1   : %d \n\n", persegi[0].lebar);
  
   persegi[1].panjang = 8;
   persegi[1].lebar = 4;
   printf("panjang persegi 2 : %d \n", persegi[1].panjang);
   printf("Lebar persegi 2    : %d \n\n", persegi[1].lebar);

   persegi[2].panjang = 7;
   persegi[2].lebar = 6;
   printf("panjang persegi 3 : %d \n", persegi[2].panjang);
   printf("Lebar persegi 3   : %d \n\n", persegi[2].lebar);
   
   return 0;
}
#include <stdio.h>

int main(){
   char opt;
   int num1, num2;
   int res;

   printf("Pilih operator (+,-,*,/) :");
   scanf("%c", &opt);
   printf("Anda memilih operaotor : %c" ,opt);
   printf("\nMasukkan Angka pertama : ");
   scanf("%d", &num1);
   printf("Masukkan Angka kedua : ");
   scanf("%d", &num2);
  

   switch (opt)
   {
   case '+':
      res = num1 + num2;
      printf("Hasilnya dari %d + %d = %d", num1, num2, res);
      break;
   case '-':
      res = num1 - num2;
      printf("Hasilnya dari %d - %d =  %d",num1, num2, res);
      break;
   case '*':
      res = num1 * num2;
      printf("Hasilnya dari %d * %d =  %d",num1, num2, res);
      break;
   case '/':
      res = num1 / num2;
      printf("Hasilnya dari %d / %d = %d", num1, num2, res);
      break;
   default:
      printf("Operator tidak ada");
      break;
   }

   return 0;
}
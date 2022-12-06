#include <stdio.h>

int main(){
   FILE *FileGenap;
   FILE *FileGanjil;
   int arrayInt[7];

   FileGanjil = fopen("ganjil.txt", "a");
   FileGenap = fopen("genap.txt", "a");
   for (int i = 0; i < 7; i++)
   {
     scanf("%d", &arrayInt[i]);
   }

   for (int i = 0; i < 7; i++)
   {
      if (arrayInt[i] % 2 == 0)
      {
        fprintf(FileGenap, "%d ", arrayInt[i]);
      }
      else
      {
        fprintf(FileGanjil, "%d ", arrayInt[i]);
      }
   }
   fclose(FileGenap);
   fclose(FileGanjil);
   
   
}
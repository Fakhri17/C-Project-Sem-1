#include  <stdio.h>

void main (){

  int ArrayA[3][2] = {{43, 8}, {74, 54}, {6, 40}};
  int ArrayB[3][2] = {{6, 16}, {62, 95}, {39, 28}};
  int ArrayC[3][2];
  int tmp;
  int y, z;

 printf ("Penjumlahan");
 for (int y=0; y<3; y++){
  for (int z=0; z<2; z++){
    ArrayC[y][z] =  ArrayA[y][z] + ArrayB[y][z];
    printf ("Hasil Penjumlahan %i+%i=%i\n", ArrayA[y][z], ArrayB[y][z],ArrayC[y][z]);
  }
 }

 printf ("Pengurangan");
 for (int y=0; y<3; y++){
  for (int z=0; z<2; z++){
    ArrayC[y][z] =  ArrayA[y][z] - ArrayB[y][z];
    printf ("Hasil Pengurangan %i-%i=%i\n", ArrayA[y][z], ArrayB[y][z],ArrayC[y][z]);
  }
 }
}
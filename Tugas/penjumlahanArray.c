#include <stdio.h>

int main(){
  int A[3][2] = {{10, 11}, {12, 13}, {14, 15}};
  int B[3][2] = {{1, 2}, {3, 4}, {5, 6}};
  int C[3][2];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      C[i][j] = A[i][j] + B[i][j];
      printf("Hasil penjumlahan %d + %d = %d\n", A[i][j], B[i][j], C[i][j]);
      C[i][j] = A[i][j] - B[i][j];
      printf("Hasil pengurangan %d - %d = %d\n", A[i][j], B[i][j], C[i][j]);
    }
    
  }
  
}
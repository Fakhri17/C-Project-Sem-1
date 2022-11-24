#include <stdio.h>
#include <stdbool.h>

#define rows 3
#define cols 3


bool isSymetris(int mat[rows][cols], int row, int col){
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (mat[i][j] < 0)
      {
        return false;
      } 
    }
  }
  return true;
}

int main(){

  int mat[rows][cols];

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
     scanf("%d", &mat[i][j]);
    }
  }

  printf("\nMatrix di atas\n");

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }

  if (isSymetris(mat, rows, cols))
  {
    printf("\nSimetris");
  }
  else
  {
    printf("\nTidak simetris");
  }
  
  
  return 0;
}
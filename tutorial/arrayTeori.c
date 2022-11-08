#include <stdio.h>

int main(){

  int dataNumber[5] = {10, 11, 12, 13, 15};
  int arrayDuaDimensi[2][3] = {{1,2,3}, {4,5,6}};

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("index ke [%d][%d]  adalah = %d\n", i, j, arrayDuaDimensi[i][j]);
    }
    
  }
  
  // for (int i = 0; i < 5; i++)
  // {
  //   printf("index ke %d adalah = %d\n", i, dataNumber[i]);
  // }

  return 0;
}
#include <stdio.h>

int main(){
  int a = 7;

  for (int i = 1; i <= a; i++)
  {
    if (i % 2 != 0)
    {
      for (int j = 1; j <= i; j++)
      {
        printf("%d ", j);
      }  
    }
    else
    {
      for (int j = i; j >= 1; j--)
      {
        printf("%d ", j);
      }  
    }

    printf("\n");
    
    
  }
  
}
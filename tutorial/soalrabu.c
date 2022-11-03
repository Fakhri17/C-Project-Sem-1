#include<stdio.h>
int main(){
  int N = 14;

  for (int i = 1; i <= N; i++)
  {
    if (i % 2 == 1 && i % 3 == 1)
    {
        printf("tendangan %d gol\n", i);
    }
    
    
  }
  
}
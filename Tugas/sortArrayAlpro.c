#include <stdio.h>


int main(){
  int nilai[] = {6, 8, 9, 3, 1, 10, 23, 2 , 5, 4, 100};
  int sizeArray, temp;

  sizeArray = sizeof(nilai) / sizeof(nilai[0]);

  for (int i = 0; i < sizeArray; i++) 
  {
    for (int j = i + 1; j < sizeArray; j++)
    {
      if (nilai[i] > nilai[j])
      {
        temp = nilai[i];
        nilai[i] = nilai[j];
        nilai[j] = temp;
      }
      
    }
    
  }

  for (int i = 0; i < sizeArray; i++)
  {
    printf("%d ", nilai[i]);
  }
  
  return 0;
  
}
#include <stdio.h>

int main(){
  // for(int a = 0; a < 5; a++){
  //    printf("=== ini adalah angka looping ke satu : %d === \n",a);
  //  for(int b = 0; b < 5; b++){   
  //     printf("= ini adalah angka looping ke dua: %d = \n",b);
  //     for (int c = 0; c < 5; c++)
  //     {
  //       printf("ini adalah angka looping ke 3: %d\n",c);
  //     }
      
  //  }
   
  // }
  int n;
  int a;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    if (i % n == 0)
    {
      // a = i;
      if (i % 2 == 0)
      {
        printf("nyala");
      }
      else
      {
        printf("Mati");
      }
      
      
    }
    
    
  }
  
}
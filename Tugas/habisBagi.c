#include <stdio.h>

void HitungCoba(int a, int b, int c){

  int lenghtLoop = 0;
  for (int i = 1; i <= 100; i++)
  {
    if (i * a <= 100)
    {
      if (i % b != 0 && i % c == 0)
      {
        printf("%d ", i * a);
        lenghtLoop++;
      }
    }
  }

  printf("\n%d", lenghtLoop);  
}

int main(void){
  int a, b , c;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  HitungCoba(a, b , c);
  return 0;
}
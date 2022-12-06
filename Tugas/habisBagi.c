#include <stdio.h>

void HitungCoba(int a, int b, int c){

  int lenghtLoop = 0;
  for (int i = a; i <= 100; i = i + a)
  {
    if (i % b != 0 && i % c == 0)
    {
      printf("%d ", i);
      lenghtLoop++;
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
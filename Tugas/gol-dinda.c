#include <stdio.h>

int main(){
  int noGoal = 0, goal = 0, N;

  printf("Masukkan banyak tendangan :");
  scanf("%d", &N);

  for (int i = 1; i <= N; i++)
  {
    if (i % 2 == 0)
    {
      printf("%d ", i);
      printf("\n");
      noGoal++;
      
    }
    
    else if (i % 2 != 0)
    {
      printf("%d ", i);
      goal++;
    }
   
    
  }

  printf("Gol sebanyak %dx" , goal);
  printf("\nTidak gol sebanyak %dx", noGoal);

  return 0;
}
#include <stdio.h>

int main(){
  int num, i, flag = 0;
  printf("Masukan bilangan positif = ");
  scanf("%d", &num);

  if (num < 0)
  {
    printf("Harus bilangan positif\n");
  }
  else
  {
    for ( i = 2; i <= num / 2; i++)
    {
      if (num % i == 0)
      {
        flag++;
        break;
      }
    }
  }

	if (flag == 0 && num != 1 && num > 0)
	{
		printf("%d adalah bilangan prima", num);
	}
	else
	{
		printf("%d bukan bilangan prima", num);
	}
  
	return 0;
}
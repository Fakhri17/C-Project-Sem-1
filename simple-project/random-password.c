#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void password(int password_length)
{
  char list[] = "1234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
  printf("Hasil Password generator = ");
  srand(time(NULL));
  for (int i = 0; i < password_length; i++)
  {
    printf("%c", list[rand() % (sizeof list - 1)]);
  }
}

int main()
{
  int password_length;
  printf("\nMasukkan Panjang password ( min 10 huruf ) = ");
  scanf("%d", &password_length);
  if (password_length >= 10)
  {
    printf("\n");
    password(password_length);
  }
  else
  {
    printf("Huruf kurang dari 10 harap masukkan ulang\n");
    main();
  }

  return 0;
}
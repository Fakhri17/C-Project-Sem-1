#include <stdio.h>

int main()
{
    int tahun, dummyTahun = 0;
    int sum = 0;
    printf("Tahun : ");
    scanf("%d", &tahun);
    dummyTahun = tahun;
   
    while (dummyTahun != 0) {
      sum = sum + dummyTahun % 10;
      dummyTahun = dummyTahun / 10;
    }

    if ((tahun % 400 == 0 || tahun % 4 == 0) && sum % 4 == 0 )
    {
      printf("\nSANGAT KABISAT");
    }
    else if (tahun % 400 == 0 || tahun % 4 == 0)
    {
      printf("\nKABISAT BIASA");
    }
    else
    {
      printf("\nTAHUN BIASA");
    }
    
    return 0;
}
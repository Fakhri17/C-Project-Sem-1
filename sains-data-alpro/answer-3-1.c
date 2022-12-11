// Kabisat

// Task 1
#include <stdio.h>
int main() {
  int bulan, tahun;
  printf("Bulan : ");
  scanf("%d",&bulan);
  printf("Tahun : ");
  scanf("%d", &tahun);

  switch (bulan)
  {
  case 2:
    if (tahun % 400 == 0 || tahun % 4 == 0) 
    {
      printf("Banyak hari pada bulan ke-%d tahun %d adalah 29", bulan, tahun);
    }
    else
    {
       printf("Banyak hari pada bulan ke-%d tahun %d adalah 28", bulan, tahun);
    } 
    break;
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12: 
    printf("Banyak hari pada bulan ke-%d tahun %d adalah 31", bulan, tahun);
    break;
   case 4:
   case 6:
   case 9:
   case 11:
    printf("Banyak hari pada bulan ke-%d tahun %d adalah 30", bulan, tahun);
    break;
  default:
    printf("Format Bulan tidak ada");
    break;
  }
  return 0;
}
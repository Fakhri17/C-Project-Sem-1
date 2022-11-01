#include <stdio.h>

int main(){
  //  int nilai[5] = {10, 20, 30, 40, 50};

  //  printf("Nilai index ke 3 adalah %d", nilai[3]);
  //  printf("\n\n");

  //  for(int i = 0; i < 5; i++){
  //     printf("Nilai Index ke %d adalah %d\n", i, nilai[i]);
  //  }

  //   nilai[1] = 75;
  //   nilai[3] = 90;

  //   printf("\nNew Value:\n");

  //   for(int i = 0; i < 5; i++){
  //     printf("Nilai Index ke %d adalah %d\n", i, nilai[i]);
  //   }

  //  int banyak_data = 5;

  //  int nilai[banyak_data];

  //  for (int i = 0; i < banyak_data; i++){
  //     printf("Masukkan nilai elemen array ke-%d : ", i);
  //     scanf("%d", &nilai[i]);
  //  }
  //  printf("\n\n");

  //  for (int i = 0; i < banyak_data; i++){
  //     printf("Nilai array ke-%d : %d\n", i, nilai[i]);
  //  }

  // int matrix[2][3] = {{1, 2, 3}, {3, 4, 5}};
  // printf("%d", matrix[1][3]);

  //  int x = 2;
  //  int y = 3;

  //  int matrix [x][y];

  //  for(int i = 0; i < x; i++){
  //     for(int j = 0; j < y; j++){
  //        printf("Masukkan nilai matrix pada index ke [%d][%d] : ", i, j);
  //        scanf("%d", &matrix[i][j]);
  //     }
  //  }
  //  printf("\n\n");
  //  for(int i = 0; i < x; i++){
  //     for(int j = 0; j < y; j++){
  //        printf("Nilai matrix pada index ke [%d][%d] adalah %d\n", i, j, matrix[i][j]);
  //     }
  //  }

  char team[4][10] = {"Rose", "Jennie", "Jisoo", "Lisa"};

    // Output nilai sebuah index
    printf("%s\n", team[0]);
    printf("%s\n", team[1]);
    printf("\n");

    // Output nilai semua index (cara 1)
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 10; j++){
            printf("%c", team[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Output nilai semua index (cara 2)
    for(int i = 0; i < 4; i++){
        printf("%s", team[i]);
        printf("\n");
    }


   return 0;
}
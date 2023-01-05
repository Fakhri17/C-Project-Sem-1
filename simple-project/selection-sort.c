#include <stdio.h>
#include <stdlib.h>


typedef struct {
  char namaTim[15];
  int skorA, skorB, skorC, total;
} lomba;


void selectionSort(lomba *arr, int arrLength){
  for(int i=0; i < arrLength; i++){
		int indexNilaiMinimal=i;
		for(int j=i; j < arrLength; j++){
			if(arr[j].total > arr[indexNilaiMinimal].total){
				indexNilaiMinimal=j;
			}
		}
		//Swap value
		int temp = arr[i].total;
		arr[i].total = arr[indexNilaiMinimal].total;
		arr[indexNilaiMinimal].total = temp;
	}
}
void outputArr(lomba *arr, int arrLength){
  for (int i = 0; i < arrLength; i++)
  {
    printf("\n%s %d %d %d %d", arr[i].namaTim, arr[i].skorA, arr[i].skorB, arr[i].skorC, arr[i].total);
  }
  
}

int main(){
  int banyakTim;
  
  scanf("%d", &banyakTim);
  lomba listTim[banyakTim];
  for (int i = 0; i < banyakTim; i++)
  {
    getchar();
    scanf("%s %d %d %d", listTim[i].namaTim, &listTim[i].skorA, &listTim[i].skorB, &listTim[i].skorC);
    listTim[i].total = listTim[i].skorA + listTim[i].skorB + listTim[i].skorC;
  }

  selectionSort(listTim, banyakTim);
  outputArr(listTim, banyakTim);
  
}
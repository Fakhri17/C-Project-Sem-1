#include <stdio.h>
#include <stdlib.h>

void selectionSort(int *arr, int arrLength){
  for(int i=0; i < arrLength; i++){
		int indexNilaiMinimal=i;
		for(int j=i; j < arrLength; j++){
			if(arr[j] > arr[indexNilaiMinimal]){
				indexNilaiMinimal=j;
			}
		}
		//Swap value
		int temp = arr[i];
		arr[i] = arr[indexNilaiMinimal];
		arr[indexNilaiMinimal] = temp;
	}
}
void outputArr(char arrChar[1][15], int *arr, int arrLength){
  for (int i = 0; i < arrLength; i++)
  {
    printf("%d %s\n", arr[i]);
  }
  
}

int main(){
  int jumlahTim, s1, s2, s3, total;

  printf("Jumlah Tim : ");
  scanf("%d", &jumlahTim);
  char namaTim[jumlahTim][15];
  int totalSkor[jumlahTim];
  for (int i = 0; i < jumlahTim; i++)
  {
    printf("Masukkan Nama tim %d = ", i+1);
    scanf("%s", &namaTim[i][15]);
   
    printf("Skor Tim %d : ", i+1);
    scanf("%d %d %d", &s1, &s2, &s3);
    total = s1 + s2 + s3;
    totalSkor[i] = total;
  }
   printf("%s\n", namaTim[0][15]);
  selectionSort(totalSkor, jumlahTim);
  outputArr(namaTim, totalSkor, jumlahTim);

  

}
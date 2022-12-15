#include <stdio.h>

int binarysearch(int cari, int *array, int right){
    int left = 0;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (cari == array[mid])
            return mid;
        if (cari > array[mid])
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main(){
    int array[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    int cari, index, hasil;
    int panjangarray = (sizeof(array)/sizeof(int))/3;

    printf("%i\n", panjangarray);
    printf("Masukkan angka yang ingin dicari : \n");
    scanf("%i", &cari);

    for (index = 0; index < 3; index++){
     
        hasil = binarysearch(cari, array[index], panjangarray);
        if (hasil != -1){
            break;
        }
    }


    if (hasil==-1){
        printf("Angka tidak ditemukan");
    } else {
        printf("Angka %i terdapat pada kolom ke %i baris ke %i", cari, index+1, hasil+1);
    }

    return 0;
}
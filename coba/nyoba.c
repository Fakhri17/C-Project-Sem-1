#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total_gaji,tunjangan_anak,pilihan,anak;
    int a=500000*anak;
    int gol1=2000000;
    int gol2=4000000;

    printf(">>>>> Mengitung Gaji Karyawan <<<<<\n");
    printf("1. Karyawan Golongan 1");
    printf("\n2. Karyawan Golongan 2");
    printf("\n\nAnda Termasuk Karyawan Golongan Berapa :");
    scanf("%d", &pilihan);

    if (pilihan == 1){
        printf("\n>>>>>> Karyawan Golongan 1 <<<<<< ");
        printf("\n\nMasukkan Jumlah Anak : ");
        scanf("%d", &anak);
        total_gaji = gol1 + (a*anak);
        printf("\nTOTAL GAJI PERBULAN ADALAH :", total_gaji);
    }

    else if (pilihan == 2){
        printf("\n>>>>>> Karyawan Golongan 2 <<<<<< ");
        printf("\n\nMasukkan Jumlah Anak : ");
        scanf("%d", &anak);
        total_gaji = gol1 + (a*anak);
        printf("\nTOTAL GAJI PERBULAN ADALAH :", total_gaji);
    }

    return 0;

}
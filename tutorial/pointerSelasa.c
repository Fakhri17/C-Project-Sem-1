#include <stdio.h>

void luasPersegi (int* luas,int a, int b){
    *luas = a * b;
    printf("\nLuas persegi panjang adalah %d",*luas);
}

int main (void){
    int luas,p,l;
    printf("Masukan panjang ");
    scanf("%d",&p);
    printf("Masukan luas ");
    scanf("%d",&l);

    luasPersegi(&luas,p,l);
    printf("\nLuas persegi panjang (main) %d",luas);

    return 0;
}
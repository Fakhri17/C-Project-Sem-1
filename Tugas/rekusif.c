#include <stdio.h>

int multiply(int x, int n){
    if (n == 1){
        return x;
    } else {
        return x + multiply(x, n-1);
    }
}

void ascending(int n){
    if (n == 1){
        printf("%d ", n);
    } else {
        ascending(n-1);
        printf("%d ", n);
    }
}

void descending(int n){
    if (n == 1){
        printf("%d ", n);
    } else {
        printf("%d ", n);
        descending(n-1);
    }
}

int main(){
    int x, n;
    printf("Masukkan angka pertama: ");
    scanf("%d", &x);
    printf("Masukkan angka kedua: ");
    scanf("%d", &n);
    printf("Hasil perkalian: %d", multiply(x, n));
    printf("\n");
    ascending(5);
    printf("\n");
    descending(5);
    return 0; 
}
#include <stdio.h>

double factorial(int a){
    // int hasil = 1;
    // for (int i = 1; i <= a; i++)
    // {
    //     hasil = hasil * i;
    //     // printf("%d ", hasil);
    // }
    // return hasil;
  int hasil = 1;
  long double coba = 1;
  for (int i = 1; i <= a; i++)
  {
    hasil = hasil * i;
    coba += (1.0/hasil);
    // printf("%lf\n", coba);
  }
  return coba; 
}

void coba(int a){
  // int hasil = 1;
  // float coba = 1;
  // for (int i = 1; i <= a; i++)
  // {
  //   hasil = hasil * i;
  //   coba += (1.0/hasil);
  //   printf("%lf\n", coba);
  // } 
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%.48lf", factorial(a));
    // coba(4);
}
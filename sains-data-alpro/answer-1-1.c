#include <stdio.h>
#include <math.h>

float heron(float a, float b, float c){
  float sisi,luas,akar;
  sisi = (a+b+c)/2;
  luas = (sisi * (sisi - a) * (sisi - b) * (sisi - c));
  akar = sqrt(luas); 
  return akar;
}

int main() {
  float a,b,c;
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  printf("%.2f", heron(a,b,c));
}
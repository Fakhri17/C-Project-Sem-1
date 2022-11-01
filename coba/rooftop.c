#include<stdio.h>
int main(){
int suhucelcius,suhufahrenheit;
printf("Masukkan Nilai suhu celcius :");
scanf("%i",&suhucelcius);
printf("Masukkan Nilai suhu fahrenheit :");
scanf("%i", &suhufahrenheit);
float kelvin_celcius,fahrenheit_celcius, celcius_fahrenheit, kelvin_fahrenheit;
kelvin_celcius= suhucelcius+273;
printf("Hasil celcius ke kelvin adalah %.2f\n", kelvin_celcius);
fahrenheit_celcius=(9.0/5.0*suhucelcius) +32;
printf("Hasil celcius ke fahrenheit adalah %.2f\n",fahrenheit_celcius);
celcius_fahrenheit= 5.0/9.0* (suhufahrenheit - 32);
printf("Hasil fahrenheit ke celcius adalah %.2f\n", celcius_fahrenheit);
kelvin_fahrenheit= suhufahrenheit-273;
printf("Hasil fahrenheit ke kelvin adalah %.2f\n", kelvin_fahrenheit);
return 0;
}
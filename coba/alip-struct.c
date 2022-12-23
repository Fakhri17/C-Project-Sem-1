#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  char namaNegara[50];
  int csgo, dota2, ow, total;
} datagame;

void cariTeamUp100(datagame *arr){
  printf("Total Team Di atas 100\n");
  for (int i = 0; i < 3; i++)
  {
    if (arr[i].total >= 100)
    {
       printf("%s\n", arr[i].namaNegara);
    } 
  }
  printf("\n");  
}

void cariTeamDown100(datagame *arr){
  printf("Total Team Di bawah 100\n");
  for (int i = 0; i < 3; i++)
  {
    if (arr[i].total <= 100)
    {
       printf("%s\n", arr[i].namaNegara);
    }
  }
  printf("\n");   
}

int main(){

  datagame datateam[3];
  int total;
  for (int i = 0; i < 3; i++)
  {
    printf("Masukkan negara %d : ", i+1);
    gets(datateam[i].namaNegara);
   
    printf("Tim CSGO %d : ", i+1);
    scanf("%d", &datateam[i].csgo);
    printf("Tim Dota2 %d : ", i+1);
    scanf("%d", &datateam[i].dota2);
    printf("Tim Overwatch %d : ", i+1);
    scanf("%d", &datateam[i].ow);
    printf("\n");
    getchar();
    total = datateam[i].csgo + datateam[i].dota2 + datateam[i].ow;
    datateam[i].total = total;
  }

  printf("Tim yang terdaftar esport\n");
  printf("Negara \t Csgo \t Dota2 \t overwatch \t total\n");
  for (int i = 0; i < 3; i++)
  {
    printf("%s \t %d \t %d \t %d \t %d\n", datateam[i].namaNegara, datateam[i].csgo, datateam[i].dota2, datateam[i].ow,  datateam[i].total);
  }

  printf("\n\n");

  cariTeamUp100(datateam);
  cariTeamDown100(datateam);
  
}

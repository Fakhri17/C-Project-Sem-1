#include <stdio.h>

int main()
{
    FILE *FileBaru;
    FILE *BacaFile;
    char str[50];

    // Create file if not exist
    FileBaru = fopen("data_diri.txt", "w");
    while (fgets(str, sizeof(str), stdin) && str[0] != '\n') {
       fprintf(FileBaru,"%s", str);
    }
    fclose(FileBaru);

    
    // Read File
    BacaFile = fopen("data_diri.txt", "r");
    if (BacaFile == NULL){
        printf("WHERE IS THE FILE BRO??");
    }
    else{
        printf("Menampilkan data hasil Input di atas\n");
        while (fgets(str, sizeof(str), FileBaru)){
			printf("%s", str);
		}
    }
    fclose(BacaFile);
 
   
}
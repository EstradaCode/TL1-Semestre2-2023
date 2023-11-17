#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * dato= fopen("TXT.txt","r+");
    if(!dato){
        printf("error! no existe");
    }
    fseek(dato,0,SEEK_END);
    char nombre[40]=" super";
    fprintf(dato,"%s",nombre);
    fclose(dato);
    return 0;
}

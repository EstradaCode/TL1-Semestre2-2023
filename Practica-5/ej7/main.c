#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE*f=fopen("TXT.txt","r");
    FILE*f2=fopen("destinoc.txt","w");
    char c=fgetc(f);
    while(!feof(f)){
        fputc(c,f2);
        c=fgetc(f);
    }
    fseek(f,0,SEEK_SET); // volver al inicio
    FILE*f3=fopen("destinoS.txt","w");
    char cadena[300];
    fgets(cadena,300,f);
    while(!feof(f)){
            fputs(cadena,f3);
            fgets(cadena,300,f);
    }
    fseek(f,0,SEEK_SET);
    FILE*f4=fopen("destinoB","wb");
    if(f4){
        char texto[300];
        fread(texto,sizeof(char),273,f);
        int dato=fwrite(texto,sizeof(char),273,f4);
        if(dato==273)printf("se pasaron los datos correctamente.\n");
    }
    fclose(f);
    fclose(f2);
    fclose(f3);
    fclose(f4);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{   char c;int totalm=0,totalM=0,totaln=0;
    FILE*f=fopen("ej2.txt","r");
    if(!f){
        fprintf(stdout,"ERROR! ARCHIVO NO SE ABRIO \n");
        return 1;
    }
    c=fgetc(f);
    while(!feof(f)){
        if((c>='a') && (c<='z'))totalm++;
        if((c>='A')&&(c<='Z'))totalM++;
        if((c>='0')&&(c<='9'))totaln++;
        fprintf(stdout,"%c",c);
        c=fgetc(f);
    }
    printf("es la palabra completa!\n tiene %d minusculas, %d mayusculas, %d numeros", totalm,totalM,totaln);
    fclose(f);
    return 0;
}

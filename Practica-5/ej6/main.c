#include <stdio.h>
#include <stdlib.h>
#define COLS 8
int main()
{
    FILE * vinos=fopen("vinos.csv","r");
    if(!vinos){
        fprintf(stdout,"!!!ERROR! NO SE PUDO ABRIR EL ARCHIVO");
        return 1;
    }
    char campos[200];
    fgets(campos,200,vinos);
    puts(campos);
    /*
    int cant=getCantCampos(campos);
    double datos[cant-1]; // le estoy quitando el campo de tipos que es un str pero no me sirve;
    int i;
    for(i=0;i<cant-1;i++){
        datos[i]=0.00;
    }*/
    double datos[COLS]={0}; // maneja el dato de la fila alocada
    double promedios[COLS]={0}; // voy a colocarle los totales y luego dividirlo por la cant de filas estudiadas
    double minimos[COLS]={0};
    double maximos[COLS]={0};
    char tipo[8]="";
    fscanf(vinos,"%lf;%lf;%lf;%lf;%lf;%lf;%lf;%lf;%s",&datos[0],&datos[1],&datos[2],&datos[3],&datos[4],&datos[5],&datos[6],&datos[7],tipo);
    int i;
    for(i=0;i<COLS;i++){
        minimos[i]=datos[i];
        maximos[i]=datos[i]; // seteo datos de la fila uno que se veran modificados o no dentro del while.
    }
    int cantFilas=0;
    while(!feof(vinos)){
         cantFilas++;
        printf("leyendo...  FILA %d", cantFilas);
         for(i=0;i<COLS;i++){
            promedios[i]+=datos[i];
            if(minimos[i]>datos[i]){
                minimos[i]=datos[i];
            }
            if(maximos[i]<datos[i]){
                maximos[i]=datos[i];
            }
        }
        fscanf(vinos,"%lf;%lf;%lf;%lf;%lf;%lf;%lf;%lf;%s",&datos[0],&datos[1],&datos[2],&datos[3],&datos[4],&datos[5],&datos[6],&datos[7],tipo);
    }
    for(i=0;i<COLS;i++)promedios[i]/=cantFilas;
     FILE* report= fopen("reporte_vinos.txt","w");
     if(!report){
        fprintf(stdout,"!!!ERROR! NO SE PUDO CREAR EL ARCHIVO");
        return 1;
        }
    fprintf(report,"Atributo\tAcidez Fija\tAcidez volatil\tAcido Citrico\tAzucares Residuales\tPH\tSulfatos\tAlcohol\tCalidad\n");
    fprintf(report,"Promedio\t");
    for(i=0;i<COLS;i++){
        fprintf(report,"%.2lf\t",promedios[i]);
    }
    fprintf(report,"\n");
    fprintf(report,"Minimos\t");
    for(i=0;i<COLS;i++){
        fprintf(report,"%.2lf\t",minimos[i]);
    }
    fprintf(report,"\n");
    fprintf(report,"Maximos\t");
    for(i=0;i<COLS;i++){
        fprintf(report,"%.2lf\t",maximos[i]);
    }
    fclose(report);
    return 0;
}

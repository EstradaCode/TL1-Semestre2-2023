#include <stdio.h>
#include <stdlib.h>
#define N 10
 typedef struct{
    int  codigo;
    float monto; }apuesta;
apuesta * initArray(int);
int main()
{
    FILE * f = fopen("apuestas.txt","r");
    if(!f){
        fprintf(stdout,"error! no se abrio el archivo!");
        return 1;
    }
    //formato cod | monto;...;codigo | monto.
    apuesta * v = initArray(N); // cargo primeros 10.
    fscanf(f,"%d|%f;",&(v[0].codigo),&(v[0].monto)); // primera lectura
    int i=0;float total= 0;
    while(!feof(f)){
        if(i%N==0){
            v=realloc(v,(i+N)*sizeof(apuesta)); // me lo realoca la primera vez, pero bueno...
            if(!v){
                fprintf(stdout,"memoria insuficiente! error! \n");
                return 1;
            }
        }
        total+= v[i++].monto;
        fscanf(f,"%d|%f;",&(v[i].codigo),&(v[i].monto));

    }

    fprintf(stdout,"el monto total fue $ %.2f",total);
    fclose(f);
    return 0;
}
apuesta * initArray( int n){
    return (apuesta*) calloc(n,sizeof(apuesta));
}

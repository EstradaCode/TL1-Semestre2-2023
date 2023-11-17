#include <stdio.h>
#include <stdlib.h>
#define N 5000
typedef struct{
    int dni;
    long int desp;
}Index;
int agregarOrdenadoV(Index*,int,Index);
int main()
{   //Persona p[]
    FILE*f=fopen("personas.csv","r");
    char titulos[400];
    fgets(titulos,400,f);
    puts(titulos); // me deshago de los titulos
    Index indices[N]={0}, aux; int i=0,exito=0, id;
    while((!feof(f))&&(!exito)){
     aux.desp=ftell(f);
     fscanf(f,"%d;%d",&id,&(aux.dni)); // reutilizo titulos para el resto que no me importa
     printf("DNI %d", aux.dni);
     fgets(titulos,400,f); //lo de arriba
     exito=agregarOrdenadoV(indices,N,aux);
     printf("datos de %d dni: %d desp: %ld", i,indices[i].dni,indices[i].desp);
     i++;
    }
    printf("datos cargados");
    fclose(f);
    FILE*fdep=fopen("indices.idx","wb");
    if(fdep){
        int datos=fwrite(indices,sizeof(Index),N,fdep);
        if(datos==N)printf("todos los %d elementos se enviaron correctamente \n",N);
    }
    fclose(fdep);
    Index ind[N];
    FILE*f2=fopen("indices.idx","rb");
    if(f2){
        fread(ind,sizeof(Index),N,f2);
        for(int i2=0;i2<N;i2++){
            printf("indices: %d  dni= %d  desp = %ld \n",i2+1,ind[i2].dni,ind[i2].desp);
        }
    }
    fclose(f2);
    return 0;
}
int agregarOrdenadoV(Index * v, int size, Index dato){
    static int diml=0;
    if(diml<size){
        int i=diml;
        while(i > 0 && (dato.dni < v[i-1].dni)){ // mientras el dato sea menor que los insertados
            v[i]=v[i-1];
            i--;
        }
    v[i]=dato;
    diml++;
        return 0;
    }else{ return 1;
    }
}

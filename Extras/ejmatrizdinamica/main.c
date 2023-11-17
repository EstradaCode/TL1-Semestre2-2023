#include <stdio.h>
#include <stdlib.h>
#define FIL 3 //0-2
#define COL 4 // 0-3
int sumaUltimaFila(int *, int, int);
void mostrarMatrix(int*,int,int);
int main()
{
    int V[FIL][COL] = {0}, *ptr;
    int * m = (int*) calloc(FIL*COL,sizeof(int));
    printf("%d %d\n", sizeof(V), sizeof(m));
    V[1][1]=10;
    m[1]=10;
    ptr = &V[1][0];
    *(ptr-2)=21;// cambia fila 0 col 3
    *(m+5)=21; // fila 1 col 0?
    *(ptr+5)=22;
    *(m+12*COL/4-1)=22; // m+11= elemento 12
    printf("La suma de los nros. ");
    printf("de la ultima fila de m es = \n");
    printf("%d\n",sumaUltimaFila(m, FIL, COL));
    printf("La suma de los nros. ");
    printf("de la ultima fila de V es = \n");
    printf("%d",sumaUltimaFila(*V, FIL, COL));
    mostrarMatrix(m,FIL,COL);
    printf("\n");
    mostrarMatrix(*V,FIL,COL);
    free(m);
    //free(V); no libero memoria de algo estatico
    return 0;
}
int sumaUltimaFila(int*m,int fila, int colum){
    int suma=0;
    for(int i=0;i<colum;i++){
        suma+= m[(fila-1)*colum + i];
    }
    return suma;
}
void mostrarMatrix(int * v,int fila,int colum){
    int i,j;
    for(i=0;i<FIL;i++){
        for(j=0;j<COL;j++){
        printf(" %d\t", v[i*COL + j]);
         }
        printf("\n");
       }
}

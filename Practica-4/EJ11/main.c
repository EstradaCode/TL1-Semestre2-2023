#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void ShowHeapMatrix(double**,int,int);
void LoadHeapMatrix(double**,int,int);
double** HeapMatrix(int,int);
int main()
{   srand(time(NULL));
    int n,m;
    printf("inserte numero filas");
    scanf("%d", &n);
    printf("inserte numero columnas");
    scanf("%d",&m);
    double ** matriz=HeapMatrix(n,m);
    LoadHeapMatrix(matriz,n,m);
    ShowHeapMatrix(matriz,n,m);
    return 0;
}
void ShowHeapMatrix(double**matrix,int n, int m){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if((int)matrix[i][j] % 3 ==0)printf(" %.2lf ", matrix[i][j]);
        }
        printf("\n");
    }
}
void LoadHeapMatrix(double ** matrix, int n, int m){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            matrix[i][j]= rand() % 20;
        }
    }
}
double ** HeapMatrix(int n, int m){
    double **matrix=(double**) calloc(n,sizeof(double*)); // genera las filas
    int i;
    for(i=0;i<n;i++){
        matrix[i]= (double*)calloc(m,sizeof(double));
    }
    return matrix;
}

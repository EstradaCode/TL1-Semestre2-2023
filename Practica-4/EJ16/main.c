#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int ** HeapMatrix(int);
void LoadTriMatrix(int**,int);
void ShowTriMatrix(int**,int);
void freeTriMatrix(int**,int);
int main()
{
    int n;
    printf("defina matriz cuadrada:");
    scanf("%d", &n);
    int ** matriz = HeapMatrix(n);
    LoadTriMatrix(matriz,n);
    ShowTriMatrix(matriz,n);
    freeTriMatrix(matriz,n);
    return 0;
}
void ShowTriMatrix(int**matrix,int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
         printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void LoadTriMatrix( int ** matrix, int n){
    int i,j;
    matrix[0][0]=1;
    matrix[1][0]=1;
    matrix[1][1]=1; //genere la piramide de unos
    for(i=2;i<n;i++){
        matrix[i][0]=1;
        for(j=1;j<i;j++){
         matrix[i][j]= matrix[i-1][j] + matrix[i-1][j-1];
        }
        matrix[i][j]=1;
    }
}
void freeTriMatrix(int**matrix,int n){
    int i;
    for(i=0;i<n;i++){
        free(matrix[i]);
    }
    free(matrix);
}
int ** HeapMatrix(int n){
    int **matrix=(int**) calloc(n,sizeof(int*)); // genera las filas
    int i;
    for(i=0;i<n;i++){
        matrix[i]= (int*)malloc((i+1)*sizeof(int));
    }
    return matrix;
}

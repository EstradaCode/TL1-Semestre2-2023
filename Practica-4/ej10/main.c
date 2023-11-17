#include <stdio.h>
#include <stdlib.h>
double promedioPtr(const double *,int);
double promedioVec(const double [],int);
double * ReservarVector(int);
int main()
{   int n;
    printf("imprima la cantidad de numeros double");
    scanf("%d", &n);
    double * v = ReservarVector(n);
    int i;double num;
    for(i=0;i<n; i++){
        printf("dato en %d", i);
        scanf("%lf", &num);
        v[i]= num;
    }
    printf(" promedio como vector %lf \n",promedioVec(v,n));
    printf("promedio como puntero %lf \n", promedioPtr(v,n));

    return 0;
}
double promedioVec(const double v[], int dimf ){
    int i; double promedio=0;
    for(i=0;i<dimf;i++){
        promedio+=v[i];
    }
    return (promedio/dimf);
}
double promedioPtr( const double * v,int dimf){
    int i; double promedio=0;
    for(i=0;i<dimf;i++){
        promedio+=*(v+i);
    }
    return (promedio/dimf);
}
double* ReservarVector(int dimf){
    return (double*) calloc(dimf,sizeof(double));
}

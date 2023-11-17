#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /* representa un vector que representa a la matriz de m*n
        si, pero moviendote con el vector de dimension m*n; m[i
        */
    srand(time(NULL));
    int x=2, y=3;
    int * m= (int*) malloc(x*y*sizeof(int)); // vector de 10 2 filas de 5;
    int i;
    for(i=0;i<x*y;i++){
        m[i]=rand() % 10;
    }
    for(i=0;i<x*y;i++){
        printf(" %d ", m[i]);
        if(i == y-1) printf("\n");
    }
    return 0;
}

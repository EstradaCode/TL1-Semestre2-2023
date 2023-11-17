#include <stdio.h>
#include <stdlib.h>
#define size 25
void imprimir(int * v, int Size){
int i;
for (i=0; i<size; i++){
    printf("v[%d]= %d \n", i, v[i]);
}
}
int main(){
int v[size]={0};
imprimir(v, size);
return 0;
}
//error. size es el mismo nombre que la variable de imprimir y el define size, por lo tanto hay conflicto en la declaracion del imprimir y causa errores.
// error muestra datos de un vector cuyos campos no tienen definidos un valor, por lo tanto tienen basura.
// se cambió el int Size (deberia haber puesto define SIZE para saber como diferenciar variables de defines

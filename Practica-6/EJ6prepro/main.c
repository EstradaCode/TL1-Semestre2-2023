#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
#define AREA_CIRCULO(r) ((PI)*(r)*(r))
/*Realice un programa que defina una macro AREA_CIRCULO(r) que permita calcular el área de un círculo
para un radio r. El cuerpo del programa debe generar aleatoriamente 10 valores diferentes que
representan radios e imprimir el área correspondiente.*/
#include <time.h>
#define size 10
int main()
{
    srand(time(NULL));
    int dato=0,i;
    for(i=0;i<size;i++){
        dato= rand() % 10;
        printf("Area de circulo de radio %d es: %.2lf \n", dato,AREA_CIRCULO(dato));
    }

    return 0;
}

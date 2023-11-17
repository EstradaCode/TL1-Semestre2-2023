#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SQUAREOF(x) ((x)*(x))
int main() {
int xin=3;
printf("\nxin=%i",xin);
printf("\nSQUAREOF(xin)=%i", SQUAREOF(xin));
printf("\nSQUAREOF(xin+4)=%i", SQUAREOF(xin+4));
printf("\nSQUAREOF(xin+xin)=%i", SQUAREOF(xin+xin));
}
/* a-calcula con una macro el cuadrado de un numero
b- no son los esperados debido a que le faltan parentesis a la definicion de la macro
c-solucionado con los parentesis
*/

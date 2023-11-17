#include <stdio.h>
#include <stdlib.h>
typedef enum {CIRCULO,ELIPSE,TRIANGULO,CUADRADO,RECTANGULO} Figuras;
typedef struct{
    Figuras tipo;
    union{
      int radio;
      int base;
      int lado;
    }; // pedir ayuda con la estructura;

}
int main()
{
    printf("Hello world!\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
typedef enum bits {VIBRAR=1,LINTERNA=2, TRASERA=4, FRONTAL=8, DATOS=16, GPS=32, WIFI=64, BLUETOOTH=128}Bits;
int main()
{
    const modulo=255;
    const ningunmod=0;
    Bits b = 0;
    printf("Hello world!\n");
    return 0;
}
void activarModulo(Bits b){

}
void desactivarModulo(Bits b){

}
void InvertirEstado(Bits b){

}
void estaActivo (Bits b){

}

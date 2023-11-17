#include <stdio.h>
#include <stdlib.h>
typedef struct jugador{
    char nom[20];
    char ape[20];
    int cantTitulos;
    int ranking;
    double fortuna;
}Jugador;
int main()
{
    FILE*f=fopen("ListaJugadores.dat","rb");
    if(f){
        fseek(f,0,SEEK_END); // raro.
        printf("memoria del archivo %ld \n",ftell(f));
    }
    return 0;
}

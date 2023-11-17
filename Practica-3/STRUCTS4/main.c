#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAZO 50
#define NUM 11
enum palo{ORO, COPA, BASTO, ESPADA};typedef enum palo Palo;
typedef struct carta {
    Palo palo;
    int numero;
}Carta;

void BarajarMazo(Carta []);
Carta SacarCarta(Carta[],int *);
void imprimirCarta(Carta);
int main()
{   Carta mazo[MAZO];
    int diml= MAZO;
    BarajarMazo(mazo);
    Carta c = SacarCarta(mazo,&diml);
    printf("---SAQUE UNA CARTA: \n");
    imprimirCarta(c);
    printf("---------------- \n");
    printf("MAZO RESTANTE: \n");
    int i;
    for(i=0;i<diml;i++){
        imprimirCarta(mazo[i]);
    }
    return 0;
}
void imprimirCarta(Carta c){
    printf("palo: ");
    switch(c.palo){
        case ORO: printf("ORO ");
            break;
        case COPA: printf("COPA ");
            break;
        case BASTO: printf("BASTO ");
            break;
        case ESPADA: printf("ESPADA");
            break;
    }
    printf(" numero: %d \n", c.numero);
}
Carta SacarCarta(Carta mazo[], int * diml){
    int i,x; srand(time(NULL));
    x= rand() % *diml;
    Carta c= mazo[x];
    for(i=x;i< *diml;i++){
        mazo[i]=mazo[i+1];
    }
    (*diml)--;
    return c;
}
void BarajarMazo(Carta mazo[] ){
    int i; srand(time(NULL));
    for(i=0;i < MAZO ;i++){
        mazo[i].palo = rand() % (ESPADA+1);
        mazo[i].numero= (rand() % NUM) + 1;
    }
}

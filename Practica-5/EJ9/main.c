#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 3
typedef struct jugador{
    char nom[20];
    char ape[20];
    int cantTitulos;
    int ranking;
    double fortuna;
}Jugador;
void LeerJugador(Jugador*);
int main()
{
    Jugador jugadores[N];
    int i;
    for(i=0;i<N;i++){
        LeerJugador(&jugadores[i]);
    }
    printf("Jugadores cargados!\n");
    printf("pasar a un archivo? 1 o otro numero=si 0=no");
    int opcion;
    scanf("%d",&opcion);
    if(opcion){
        int pasados;
        FILE*f=fopen("ListaJugadores.dat","wb");
        if(f){
            pasados= fwrite(jugadores,sizeof(Jugador),N,f);
            if(pasados==N)printf("se escribieron correctamente todos los %djugadores \n",pasados);
            fclose(f);
        }
        //me vuelvo a pasar los datos para verificar
    }
    FILE*f2=fopen("ListaJugadores.dat","rb");
    if(f2){
        fread(jugadores,sizeof(Jugador),N,f2);
        char nomaperanking[60]; int ranking=99999,titulos=0;
        char nomapetitulos[60];
        int i;
        for(i=0;i<N;i++){
            if(jugadores[i].cantTitulos > titulos){
                titulos=jugadores[i].cantTitulos;
                strcpy(nomapetitulos,jugadores[i].nom);
                strcat(nomapetitulos," ");
                strcat(nomapetitulos,jugadores[i].ape);
            }
            if(jugadores[i].ranking < ranking){
                ranking=jugadores[i].ranking;
                strcpy(nomaperanking,jugadores[i].nom);
                strcat(nomaperanking," ");
                strcat(nomaperanking,jugadores[i].ape);
            }
        }
        printf("jugador con mas titulos:  %s \n",nomapetitulos);
        printf("jugador con mejor ranking:  %s \n",nomaperanking);
    }
    fclose(f2);
    return 0;
}
void LeerJugador(Jugador*j){
    printf("nombre: \n");
    scanf("%s", j->nom);
    printf("apellido: \n");
    scanf("%s", j->ape);
    printf("cantidad de titulos: \n");
    scanf("%d", &(j->cantTitulos));
    printf("ranking: \n");
    scanf("%d", &(j->ranking));
    printf("fortuna: \n");
    scanf("%lf",&(j->fortuna));
}

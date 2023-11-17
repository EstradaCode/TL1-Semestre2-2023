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
int actualizarRanking(char*,char*,int);
void mostrarJugador(Jugador);
int main()
{
    char nombre[30]="Gio";
    char apellido[30]= "gottu";
    int ranking = 1;
    while(strcmp(nombre,"ZZZ")){
        if(actualizarRanking(nombre,apellido,ranking))printf("se aplicò correctamente el cambio!");
        else printf("no se encontro ese nombre en el archivo!");
        scanf("%s",nombre);
        if(strcmp(nombre,"ZZZ")){
            scanf("%s",apellido);
            scanf("%d",&ranking);
        }
    }
    FILE*f=fopen("ListaJugadores.dat","rb");
    if(f){
        Jugador jugadores[N];
        int dato =fread(jugadores,sizeof(Jugador),N,f);
        if(dato==N) printf("datos extraidos correctamente\n");
        int i;
        for(i=0;i<N;i++){
            mostrarJugador(jugadores[i]);
        }
    }
    printf("%d",actualizarRanking(nombre,apellido,ranking));
    return 0;
}
int actualizarRanking(char*nombre,char*apellido, int ranking){
    FILE*f=fopen("ListaJugadores.dat","rb+");
    if( f){
        Jugador jugador;
        fread(&jugador,sizeof(Jugador),1,f);
        while((!feof(f))&&(strcmp(jugador.nom,nombre)!=0) &&(strcmp(jugador.ape,apellido)!=0)){
            fread(&jugador,sizeof(Jugador),1,f);
        }
        if(feof(f))return 0;
        if(strcmp(jugador.nom,nombre)==strcmp(jugador.ape,apellido)){
            fseek(f,-sizeof(Jugador),SEEK_CUR);
            jugador.ranking=ranking;
            fwrite(&jugador,sizeof(Jugador),1,f);
            fclose(f);
            return 1;
        } else return 0;
    }else return 0;
}
void mostrarJugador(Jugador j){
    printf("nombre: %s  ",j.nom);
    printf("apellido: %s  ",j.ape);
    printf("cantidad de titulos: %d  ",j.cantTitulos);
    printf("fortuna: %lf  ",j.fortuna);
    printf("ranking: %d \n",j.ranking);
}

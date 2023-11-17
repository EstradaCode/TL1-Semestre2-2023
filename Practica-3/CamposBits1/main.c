#include <stdio.h>
#include <stdlib.h>
typedef struct {
    unsigned int hora:4;
    unsigned int minutos:6;
    unsigned int segs:6;
} tiempo;
void leerTiempo(tiempo*);
void mostrarTiempo(tiempo);
int main()
{
    tiempo time;
    leerTiempo(&time);
    mostrarTiempo(time);
    return 0;
}
void mostrarTiempo(tiempo time){
    printf("- %u : ", time.hora);
    printf("%u : ", time.minutos);
    printf("%u -", time.segs);
}
void leerTiempo(tiempo * t){
    unsigned int h,m,s;
    printf("hora! \n");
    scanf("%u",&h);
    printf("mins! \n");
    scanf("%d", &m);
    printf("segs! \n");
    scanf("%d", &s);
    t->hora = h;
    t->minutos=m;
    t->segs=s;
}

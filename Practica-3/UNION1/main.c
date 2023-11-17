#include <stdio.h>
#include <stdlib.h>
typedef struct coordenadas{
    int x;
    int y;
} coord;
typedef struct ventana {
    int x; int y;
    float ancho; float largo;
}window;
typedef struct rectangulo{
    coord xy;
    float ancho; float largo;
}rectangle;
typedef union Screen{
    coord pares;
    window win;
    rectangle rect;
} screen;
typedef struct pantalla{
    int tipo;
    screen pantalla;
} panta;
int main(){
    panta pan;
    pan.tipo=1;
    pan.pantalla.pares.x=1;
    pan.pantalla.pares.y=2;
    printf("la union es de tipo : %d \n ----------------- \n", pan.tipo);
    switch (pan.tipo)
    {
    case 1: printf("< %d , %d >\n", pan.pantalla.pares.x,pan.pantalla.pares.y);
        break;
    }
    
    return 0;
}
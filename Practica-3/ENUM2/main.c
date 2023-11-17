#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIMF 6
typedef enum semana{lunes,martes,miercoles,jueves,viernes,sabado,domingo } dias;
void decirDia(dias);
void DevolverDia(dias);
int main(){
    dias dia=4;
    decirDia(dia);
    DevolverDia(dia);

    return 0;
}
void decirDia(dias dia){
    char * vector[]={"lunes","martes","miercoles","jueves","viernes","sabado","domingo"};
    printf("%s ", vector[dia]);
}
void DevolverDia(dias dia){
    switch (dia)
    {
    case lunes: printf(" el dia es lunes!");
        break;
    case martes: printf("el dia es martes!");
        break;
    case miercoles: printf("el dia es miercoles!");
        break;
    case jueves: printf("el dia es jueves!");
        break;
    case viernes: printf("el dia es viernes!!");
        break;
    case sabado: printf("el dia es sabado!");
        break;
    case domingo: printf("el dia es domingo!");
        break;
    }
}
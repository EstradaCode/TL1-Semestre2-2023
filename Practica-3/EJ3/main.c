#include <stdio.h>
#include <stdlib.h>
#define DIMF 3
typedef struct direccion {
    char calle [50];
    char ciudad[30];
    char pais [40];
} dir;
typedef struct alumno{
    char apellido[50];
    char nombre[50];
    char legajo[8];
    float promedio;
    dir domicilio;
} alu;
void LeerAlumno(alu *); // convertira el dato en puntero.
void ImprimirAlumno(alu);
void ImprimirDireccion(dir);

int main(){
    alu primero[DIMF];
    int i;
    for(i=0;i<DIMF; i++){
        LeerAlumno(primero+i); // es donde està almacenado pedro.
    }
    float max = -1;
    for(i=0;i<DIMF;i++){
        if(primero[i].promedio > max) max=primero[i].promedio;
        ImprimirAlumno(primero[i]);
        printf("\n");
    }
    printf(" maximo promedio: %.2f\n", max);
    return 0;
}


void LeerAlumno(alu * a){
    printf("Escriba su apellido:  \n");
    scanf("%s", a->apellido);
    printf("Escriba su nombre:  \n");
    scanf("%s", a->nombre);
    printf("Escriba su legajo:  \n");
    scanf("%s", a->legajo);
    printf("Escriba su promedio:  \n");
    scanf("%f", &(a->promedio));
    dir *d; d = &(a->domicilio);
    printf("Escriba su ciudad:  \n");
    scanf("%s", (*d).ciudad);
    printf("Escriba su calle:  \n");
    scanf("%s", (*d).calle);
    printf("Escriba su pais:  \n");
    scanf("%s", (*d).pais);
}
void ImprimirAlumno(alu a){
    printf("%s  ", a.apellido);
    printf("%s  ", a.nombre);
    printf("%s  ", a.legajo);
    printf("%.2f  ", a.promedio);
    ImprimirDireccion(a.domicilio);
}
void ImprimirDireccion(dir d){
    printf("%s  ", d.calle);
    printf("%s  ", d.ciudad);
    printf("%s  ", d.pais);
}

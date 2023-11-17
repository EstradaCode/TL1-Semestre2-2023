#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LONG 20
typedef union documentacion{
    int DNI;
    char PASAPORTE[12];
} doc;
typedef struct estudiante{
    char apellido[LONG];
    char nombre[LONG];
    char legajo[7];
    doc documento;
    } Student; 
void LeerEstudiante(Student *, int);
int main(){
    Student student;
    srand(time(NULL));
    int ran = rand() % 2;
    printf("rand: %d \n", ran);
    scanf("%s", student.apellido);
    scanf("%s", student.nombre);
    scanf("%s", student.legajo);
    if(ran == 1){
        scanf("%s", student.documento.PASAPORTE);
    } else {
        scanf("%d", &(student.documento.DNI));
    }
    LeerEstudiante(&student, ran);
    return 0;
}
void LeerEstudiante(Student * s, int tipo){
    printf("%s  ", s->apellido);
    printf("%s  ", s->nombre);
    printf("%s  ", s->legajo);
    if(tipo==1) printf(" pasaporte: %s  ", s->documento.PASAPORTE);
    else printf(" dni: %d  ", s->documento.DNI);
}
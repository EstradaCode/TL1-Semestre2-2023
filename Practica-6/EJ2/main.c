#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{   if( argc == 5){
        int i;double promedio=0;
        for(i=1;i<argc;i++){
            promedio+= atoi(argv[i]);
        }
        promedio/=(argc-1);
        printf("promedio de los %d numeros insertados: %.2lf", (argc-1),promedio);
    }else{
        printf("ERROR, CANTIDAD DE ARGUMENTOS INCORRECTA!\n");
    }
    return 0;
}

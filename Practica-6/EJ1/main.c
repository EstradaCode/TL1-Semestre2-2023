#include <stdio.h>
#include <stdlib.h>
int main (int argc, char * argv[]) {
    printf("\nargc = %d",argc); // imprime la cantidad de argumentos que recibe el main, la direccion del ejecutable y el/los textos
    printf("\nargv[0] => %s",argv[0]); // imprime la direccion del ejecutable
return 0;
}

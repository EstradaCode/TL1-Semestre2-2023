#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[]){
    if(argc!=4){
        printf("ERROR!FALTA DE ARGUMENTOS\n");
    }else{
        switch(*argv[3]){
            case '+' : printf(" %s + %s = %d",argv[1],argv[2],atoi(argv[1])+atoi(argv[2]) );
                        break;
            case '-': printf(" %s - %s = %d",argv[1],argv[2],atoi(argv[1])-atoi(argv[2]) );
                        break;
            case '*': printf(" %s * %s = %ld",argv[1],argv[2],atol(argv[1])*atol(argv[2]) );
                        break;
            case '/': printf(" %s - %s = %.2lf",argv[1],argv[2],atof(argv[1])/atof(argv[2]) );
                        break;
            default: printf("ERROR! OPERACION DESCONOCIDA!\n");
        }
    }
    return 0;
}

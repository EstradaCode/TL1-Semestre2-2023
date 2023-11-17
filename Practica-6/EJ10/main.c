#include <stdio.h>
#include <stdlib.h>
#include "istack.h"
int main()
{
    printf("programa pila!!\n");
    Stack  s = s_create();
    printf("pila creada!");
    int n;
    printf("escriba un numero (0 para salir): \n");
    scanf("%d", &n);
    while(n!=0){
        s_push(&s,n);
        printf("escriba un numero (0 para salir): \n");
        scanf("%d",&n);
    }
    printf("la longitud de la pila es: %d \n", s_length(s));
    printf("despilar..\n");
    int del= s_length(s), i;
    for(i=0;i<del;i++){
        s_pop(&s);
    }
    if(s_empty(s)){
        printf("pila vacia\n");
    }else{ printf("error! quedo algo en la pila!\n");}
    return 0;
}

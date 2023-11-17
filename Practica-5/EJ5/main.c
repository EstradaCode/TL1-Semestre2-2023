#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30
struct Nodo{
    char palabra[N];
    struct Nodo *sig;
};
typedef struct Nodo * stack;
void push(stack*,char*);
int isHere(stack,char*);
void getElements(stack);
int main()
{   FILE*f=fopen("diccionario.txt","r");
    if(!f){
        fprintf(stdout,"error! no se abrio el archivo \n");
        return 1;
    }
    stack  s = NULL;
    char palabra[N];
    fscanf(f,"%s\n",palabra);
    while(!feof(f)){
        push(&s,palabra);
        fscanf(f,"%s\n",palabra);
    }
    push(&s,palabra);
    fprintf(stdout,"diccionario listo\n");
    getElements(s);
    scanf("%s", palabra);
    while(strcmp(palabra,"ZZZ")){
        if(!isHere(s,palabra))fprintf(stdout," %s esta en el diccionario! \n", palabra);
        else fprintf(stdout," %s NO esta en el diccionario! \n", palabra);
        scanf("%s", palabra);
    }
    return 0;
}
void push(stack * s, char * dato){
    stack aux = (stack) malloc(sizeof(struct Nodo));
    strcpy(aux->palabra,dato);
    (aux->sig) = *s;
    *s = aux;
}
void getElements(stack s){
    if(s==NULL){
        printf("lista vacia");
        return;
    }
    while( s!=NULL){
        printf(" %s -", (s->palabra));
        s = (s->sig);
    }
}
int isHere(stack s, char * dato){
    while(s!=NULL){
        if(strcmp(s->palabra,dato)==0)return 0;
        s=s->sig;
    }
    return 1;
}

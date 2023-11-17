#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node * sig;
}Node;
Node* initList();
void getElements(Node*);
int getnum(Node*);
void deleteList(Node**);
void addLast(Node**, int);
void addFirst(Node**,int);
int isEmpty(Node*);
int main()
{
    Node * l= initList();
    int i;
    if(isEmpty(l)){
        printf("esta vacio. \n");
    }else{
        printf("esta lleno \n");
    }
    for(i=0;i<11;i++){
        addLast(&l,i);
    }
    printf("%d", getnum(l));
    printf("Elementos \n -------------- \n");
    getElements(l);
    printf("\n");
    if(isEmpty(l)){
        printf("esta vacio. \n");
    }else{
        printf("esta lleno \n");
    }
    deleteList(&l);
    if(isEmpty(l)){
        printf("esta vacio. \n");
    }else{
        printf("esta lleno \n");
    }
    return 0;
}

void getElements(Node*p){
    if( p== NULL){
        printf("lista vacia");
        return;
    }
    while( p!=NULL){
        printf(" %d ,", (p->data));
        p = (p->sig);
    }
}
int getnum(Node*p){
    int i=0;
    while( p!=NULL){
        i++;
        p = (p->sig);
    }
    return i;
}
void addLast(Node **p, int dato){
    Node * act;
    Node * aux = (Node*) malloc(sizeof(Node));
    (aux->data)= dato;
    (aux->sig) = NULL;
    if(*p!=NULL){
        act= *p;
        while( act->sig!= NULL) act = act->sig;
        (act->sig)= aux;
    }else *p = aux;
}
void addFirst(Node**p, int dato){
    Node * aux = (Node*) malloc(sizeof(Node));
    (aux->data)= dato;
    (aux->sig) = *p;
    *p = aux;
}
int isEmpty(Node*p){
    if( p == NULL) return 1;
    else return 0;
}
void deleteList(Node ** p){
    Node * act;
    while(*p != NULL){
        act = *p; // actual tiene el nodo 1
        *p= act->sig; // puntero apunta al siguiente
        free(act); // borro el uno
    }
    *p= NULL;
}
Node * initList(){
    return NULL;
}

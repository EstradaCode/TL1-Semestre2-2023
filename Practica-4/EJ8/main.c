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
void deleteMult(Node **, int);
int main()
{
    Node * l= initList();
    int i;
    printf("carga un numero(0=fin)");
    scanf("%d", &i);
    while(i!=0){
        addLast(&l,i);
        printf("carga otro numero (0 = fin)");
        scanf("%d", &i);
    }
    printf("%d", getnum(l));
    printf("\n Elementos l1 \n -------------- \n");
    getElements(l);
    printf("la cantidad de elementos: %d", getnum(l));
    printf("\n");
    printf("escribe un numero para borrar sus multiplos de la lista: \n");
    scanf("%d", &i);
    deleteMult(&l,i);
    printf("volviò");
    getElements(l);
    deleteList(&l);

    return 0;
}

void deleteMult(Node ** p, int num){
    Node * act,*ant,*aux;
    if( *p== NULL) return;
    act=*p;
    ant=act;
    while( act!=NULL){
        if((act->data) % num == 0){
           aux=act;
           act=act->sig;
           ant->sig=act;
           free(aux);
        }else{
            ant=act;
            act=act->sig;
        }
    }
}
void getElements(Node*p){
    if(isEmpty(p)){
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
    if(isEmpty(p)){
        printf("lista vacia");
        return -1;
    }
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


#include "istack.h"
#include <stdio.h>
#include <stdlib.h>
Stack s_create(){
    Stack s =NULL;
    return s;
 }
 void s_push(Stack * s, int n){
    Stack aux= (Stack) malloc(sizeof(struct Node));
    aux->data=n;
    aux->next=*s;
    *s=aux;
 }
  int s_empty (Stack s){
    if(s == NULL){ //pola vacia
        return 1;
    }else return 0; // `pila no vacia
 }
 int s_pop(Stack*s){
    if(s_empty(*s)){printf("pila vacia!\n");return -1;}
    Stack aux= *s; int data=aux->data;
    *s= aux->next;
    free(aux);
    return data;

 }
 int s_top(Stack s ){
    return (s->data);
 }
 int s_length(Stack s){
    int length=0;
    while(s!=NULL){
        length++;
        s=s->next;
    }
    return length;
 }


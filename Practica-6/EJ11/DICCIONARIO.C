#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "DICCIONARIO.H"
Diccionario d_create(){
    Diccionario d = NULL;
    return d;
 }
  void d_load(Diccionario * d, char * word){
    Diccionario aux= (Diccionario) malloc(sizeof(struct Node));
    strcpy(aux->Word,word);
    aux->next=*d;
    *d=aux;
 }
 int d_exist(Diccionario d, char * word){
    while(d!=NULL){
        if(strcmp(d->Word,word) ==0) return 1;
        d = d->next;
    }
    return 0;
 }
 int d_delete(Diccionario * d, char * word){
    Diccionario act = *d,ant;
    while((act!=NULL) && (strcmp(act->Word,word))){
        ant=act;
        act= act->next;
    }
    if(act!=NULL){
        if(act==*d){
            *d=act->next;
        }else ant->next=act->next;
        free(act);
        return 1;
    }else return 0;
 }
 void d_loadFromFile(Diccionario * d, char * namefile){
    FILE * f=fopen(namefile,"r");
    if(!f){
        printf("Error! al abrir archivo!\n");
        return;
    }
    char word[50];
    fscanf(f,"%s\n", word);
    while(!feof(f)){
        d_load(d,word);
        fscanf(f,"%s\n",word);
    }
    fclose(f);
 }
 void d_SaveInFile(Diccionario d, char * nameFile){
    FILE* f=fopen(nameFile,"w");
    if(!f){
        printf("Error! no se pudo crear el archivo %s \n", nameFile);
    }
    while(d!=NULL){
        fprintf(f,"%s\n", d->Word);
        d=d->next;
    }
    fclose(f);
 }
 void d_destroy(Diccionario * d){
    Diccionario h;
    while(*d!=NULL){
        h=*d;
        *d = (*d)->next;
        free(h);
    }
 }

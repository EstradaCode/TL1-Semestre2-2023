#ifndef DICCIONARIO_H_INCLUDED
#define DICCIONARIO_H_INCLUDED
#include <string.h>
 struct Node{
    char Word[50];
    struct Node * next;
 };
 typedef struct Node * Diccionario;

 Diccionario d_create();
  void d_load(Diccionario *, char *);
 int d_exist(Diccionario, char *);
 int d_delete(Diccionario * , char *);
 void d_loadFromFile(Diccionario *, char *);
 void d_SaveInFile(Diccionario d, char *);
 void d_destroy(Diccionario *);

#endif // DICCIONARIO_H_INCLUDED

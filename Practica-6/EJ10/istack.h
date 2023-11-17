#ifndef ISTACK_H_INCLUDED
#define ISTACK_H_INCLUDED
 struct Node{
    int data;
    struct Node * next;
 };
 typedef struct Node * Stack;

 Stack s_create();
 void s_push(Stack * s, int n);
  int s_empty (Stack s);
 int s_pop(Stack*s);
 int s_top(Stack s);
 int s_length(Stack s);
#endif // ISTACK_H_INCLUDED

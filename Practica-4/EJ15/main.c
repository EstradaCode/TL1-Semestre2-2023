#include <stdio.h>
#include <stdlib.h>
typedef struct TreeNode{
    int data;
    struct TreeNode * HI;
    struct TreeNode * HD;
}Tree;
int main()
{
    printf("Hello world!\n");
    return 0;
}
Tree* CreateNode(int value){
    Tree * Node =(Tree*)malloc(sizeof(Tree)); // esto genera el nodo del arbol
    Node->data= value;
    Node->HI=NULL;
    Node->HD=NULL;
    return Node;
}
void SetPascalPyramid(Tree** T, int n){
    if(n<=0){
        *T=NULL;
    }
    *T= CreateNode(1); // genera el primer puntero
    *(T->HI)= CreateNode(n-1);
    *(T->HD)=CreateNode(n-1);
    if((*(T->HI)!=NULL) && (*(T->HD)!=NULL)){

    }
}

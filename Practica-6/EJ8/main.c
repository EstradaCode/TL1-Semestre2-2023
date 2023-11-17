#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 10
#define DEBUG 0
int buscarvector(int[],int,int);
int main()
{
    srand(time(NULL));
    int dato[size]={0},i;
    for(i=0;i<size;i++){
        dato[i]= rand() % 10;
    }
    int result = buscarvector(dato,size,3);
    if(result!=-1){
        printf("el numero 3 esta en la posicion %d\n",result);
    }else printf("el numero 3 no existe en el vector\n");

    return 0;
}
int buscarvector(int dato[], int length, int datito){
int i=0, pos=-1;
#if DEBUG
for(i=0; i < length ;i++){
    if(dato[i] == datito){
        pos=i;
        break;
    }
}
    printf("cantidad de iteraciones %d", i);
#endif // DEBUG
return pos;
}

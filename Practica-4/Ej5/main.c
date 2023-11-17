#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100
void cantLetras(char*,int*,int*);
char *AllocStr(int);
int main()
{   char * c = AllocStr(N);
    int i,min,may;
     for(i=0;i<10;i++){
        gets(c);
        cantLetras(c,&min,&may);
        printf("cant de minusculas: %d ---- cant de mayusculas: %d  \n", min,may);
     }
     free(c);
    return 0;
}
void cantLetras(char*c, int * min, int * may){
    int i;*min=0;*may=0;
    for(i=0;c[i]!= '\0';i++){
        printf("%d", *(c+i));
        if((*(c+i) <= 122) && (*(c+i) >= 97)){
              *min+=1;
        } else if((*(c+i) <= 90) && (*(c+i) >= 65))*may+=1;
    }
}
char *AllocStr(int length){
    return (char*) calloc (length,sizeof(char));
}

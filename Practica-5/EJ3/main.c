#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int a,b;
    scanf("%d/%d", &a, &b);
//    scanf("%d");
    printf("%d y %d", a, b);
//    printf("Hello world!\n");
    return 0;*/
    int dias[30];
    FILE*f=fopen("precipitaciones.txt","r");
    if(!f){
        printf("ERROR! ARCHIVO NO SE ABRIO \n");
        return 1;
    }
    int i=0;
    int n=0;
    fscanf(f,"%d-",&(dias[i]));
    while(!feof(f)&&(n<30)){
        n++;
        fscanf(f,"%d-",&(dias[++i]));
    }
    for(i=0;i<n;i++){
        fprintf(stdout,"%d-",dias[i]);
    }
    fclose(f);
    return 0;
}

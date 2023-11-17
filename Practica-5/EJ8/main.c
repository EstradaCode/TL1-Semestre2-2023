#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE*f=fopen("numeros.txt","w");
    if(!f){
        printf("error! no se pudo crear el archivo de texto!");
    }
    FILE*f2=fopen("numeros.dat","wb");
    if(!f){
        printf(" no se pudo crear el archivo .dat");
    }
    printf("ESCRIBA UN NUMERO ENTRE 0 Y 9 (EXIT= -1)");
    scanf("%d",&num);
     while(num!=-1){
        fprintf(f,"%d-",num);
        if(fwrite(&num,sizeof(int),1,f2)){
                printf("ESCRIBA UN NUMERO ENTRE 0 Y 9 (EXIT= -1)");
                scanf("%d",&num);
        }
     }
     fclose(f);
     fclose(f2);
     // en archivos de texto puedo visualizarlo
     // en binario no, es como una encriptacion de los datos almacenados. interesante y hay que consultar su funcionamiento. Es el doble de grande que el de texto simple. Supongo que es recomendable usar binario cuando es un archivo que cumple una funcion importante y no quiero que se vea modificado tan facilmente como un texto.
     printf("fin de la ejecucion!");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "imath.h"
int main()
{
    int x,y;
    printf("escriba dos numeros!\n");
    scanf("%d %d", &x,&y);
    printf("sus numeros son x = %d e y= %d \n", x,y);
    if(parNumber(x)){
        printf("x es par! \n calcularemos su cuadrado y cubo");
        printf("cuadrado de x = %d\n",squareOf(x));
        printf("cubo de x = %d\n",cubeOf(x));
    }else{
        printf("x es impar! \n calcularemos su factorial");
        printf("factorial: %d \n", factorial(x));
    }
    if(parNumber(y)){
        printf("y es par! \n calcularemos su cuadrado y cubo");
        printf("cuadrado de y = %d\n",squareOf(y));
        printf("cubo de y = %d\n",cubeOf(y));
    }else{
        printf("y es impar! \n calcularemos su factorial");
        printf("factorial: %d \n", factorial(y));
    }
    return 0;
}

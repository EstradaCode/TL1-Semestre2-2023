#include <stdio.h>
#include <stdlib.h>
typedef struct pun3D{
    float x;
    float y;
    float z;
} P3D;
int main()
{
    P3D p;
    printf("%lu", sizeof(P3D)); // 12
    printf("%lu", sizeof(p)); // 12 bytes si, ya que es la creacion del tipo de dato, perse, solo de dimos nombre a una instancia de ese tipo de dato que vale 12 bts;
    P3D p2[4];
    printf("%lu", sizeof(p2)); // 12 bytes cada campo * 4;
    printf("Hello world!\n");
    return 0;
}

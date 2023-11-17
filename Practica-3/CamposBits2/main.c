#include <stdio.h>
#include <stdlib.h>
typedef struct{
    unsigned int R:8;
    unsigned int G:8;
    unsigned int B:8;
}RGB24;
typedef struct {
    unsigned int R:5;
    unsigned int G:6;
    unsigned int B:5;
}RGB16;
int main()
{
    printf("Hello world!\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define MAX(x,y) (((x) < (y))? (y) : (x))
int main () {
int a, b;
scanf("%d%d", &a, &b);
printf("\n MAX(%d, %d) = %d\n", a, b, MAX(a,b));
#define DEBUG 0
printf("ej 2 \n--------\n");
int x= 15;
while (x<50){
#if DEBUG
printf( " x= %d " , x);
y= y+1;
#endif
x++;
printf("%d \n",x); // ej 2 suma hasta llegar a 50 pero no muestra lo dentro del if por que debug==0 si debug !=0 causa error por la var y
}

return 0;
}

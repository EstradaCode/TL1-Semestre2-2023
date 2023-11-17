#ifndef IMATH_H_INCLUDED
#define IMATH_H_INCLUDED
int potencia(int x, int y){
    int pow=x,i;
    for(i=1;i<y;i++){
        pow*=x;
    }
    return pow;
}
int squareOf(int x){
    return x*x;
}
int cubeOf(int x){
    return x*x*x;
}
int factorial(int i){
    int f=1,j;
    for(j=1;j<=i;j++){
        f*=j;
    }
    return f;
}
int summeOf(int i){
    int res=0,h;
    for(h=1;h<=i;h++)res+=h;
    return res;
}
int multipleOf(int x, int y){
    // si y es div de x
    if(y % x){
        return 0;
    }else return 1;
}
int dividerOf(int x, int y){
    return multipleOf(x,y);
}
int parNumber(int i){
    if(i % 2){
        return 0;
    }else return 1;
}
int imparNumber(int i){
    if(!parNumber(i)){
        return 1;
    }else return 0;
}
#endif // IMATH_H_INCLUDED

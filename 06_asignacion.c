//Operador de Asignación en C

#include <stdio.h>

int main(){
    int a; //declaración simple
    int b; //declaración simple
    int c,d,e; //declaración múltiple

    a = 2;
    b = 10;
    b = b+7;
    a+=7; // a += 7; es igual a a=a+7; 
    c=d=e=20;

    a-=2; // a -= 2; es igual a a=a-2;
    b=b*2; // b *= 2; es igual a b = b * 2;
    d /= 2; //d /= 2; es igual a d=d/2;

    printf("El valor de a es: %i\n",a);
    printf("El valor de b es: %i\n",b);
    printf("El valor de las variables c,d y e son: %i %i %i",c,d,e);
    return 0;
}
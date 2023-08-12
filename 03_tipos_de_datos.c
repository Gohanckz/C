// Tipos de datos en C

#include <stdio.h>
#include <stdbool.h> //librería necesaria para utilizar valores booleanos

int main(){
    int a = 1; // variable a con valor 1. 2 bytes rango desde -32768 -> 32767
    char b = 'z'; // variable b con valor z. 1 byte rango desde 0  -> 255
    float c = 1.5; // variable flotante c con valor 1.5.
    double d = 1555555.5555555555; // variable de con valores double. 8 bytes
    short v = 2; // parecido a un int con menos valores. 2 bytes desde -128 -> 127
    long e = 12.3; // 4 bytes
    unsigned int f = 123; // 2 bytes Rango 0 -> 65535
    long double r = 12.3332333232;
    printf("El valor del int es %i \n", a);
    printf("El valor del char es %c \n ",b);
    printf("El valor del float es %f \n",c);
    printf("El valor del double es : %lf \n",d);
    printf("El valor del short es %i \n",v);
    printf("El valor del long es: %li \n",e);
    printf("El valor del long double es : %lf \n",r);
    printf("El valor del long unsigned es de : %i \n",f);


    return 0;

}
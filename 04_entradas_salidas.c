// Entradas y salidas

#include <stdio.h>

int main(){
    char e[40];
    int a;
    
    printf("Escribe tu nombre");
    fgets(e);
    printf("Bienvenido %s \n", e);
    
    printf("Escribe tu edad");
    scanf("%i",&a);
    printf("Tu edad es: %i",a);
    
    
    return 0;
}
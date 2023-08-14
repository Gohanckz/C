#include <stdio.h>

// Variables locales

// Variable i solo es accesible dentro del ciclo

int main(){

    for (int i=0; i<16; i++){
        printf("\nValor de i: %i",i);
        i+=3;
    }
    // Si se intenta ejecutat la linea de abajo dará un error, ya que, la variable no está definida fuera del ciclo
    //printf("\nValor final de i: %d",i);
    return 0;
}



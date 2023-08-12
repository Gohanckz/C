// Directivas de procesador y variables

#include <stdio.h> //librería
#define PI 3.1416 //Macro

int y = 5; // variable global

int main(){
    int x = 10; // variable local
    float Suma = 0;
    Suma = PI + x;
    printf("La suma es: %.4f",Suma); //Impresión de 4 caracteres para un valor float
    /* Es posible calcular la cantidad de caracteres y el tipo de valor a mostrar
    %.2f = dos decimales de un valor flotante
    %.4i = 4 digitos de un valor entero
    %d = todos los valores de un valor double*/
    return 0;
}
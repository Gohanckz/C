/*
Crea un programa que calcule las areas de un triangulo y un cuadrado.
*/

#include <stdio.h>

int main(){
    float lado1,lado2,base,altura,area_cuadrado,area_triangulo;

    printf("Ingrese el lado 1 del cuadrado:\n");
    scanf("%f",&lado1);
    printf("Ingrese el lado 2 del cuadrado:\n");
    scanf("%f",&lado2);

    area_cuadrado = lado1 * lado2;
    printf("El area del cuadrado es: %.2f\n",area_cuadrado);
    printf("Ingrese la base del triangulo :");
    scanf("%f",&base);
    printf("Ingrese la altura del triangulo :");
    scanf("%f",&altura);
    area_triangulo = (base*altura)/2;
    printf("El area del triangulo es : %.2f",area_triangulo);

    return 0;
}
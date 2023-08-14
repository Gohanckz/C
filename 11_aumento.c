/*
Genere un programa que solicite el nombre de un trabajador
y su salario, luego imprima un aumento del salario de un 10%.
*/

#include <stdio.h>

int main(){
    char nombre[40];
    int salario;
    float aumento;

    printf("Ingrese su nombre: ");
    gets(nombre);
    printf("Bienvenido %s",nombre);

    printf("Ingrese su salaraio :");
    scanf("%i",&salario);

    aumento = salario*1.1;
    printf("Felicidades %s, ha recibido un aumento del 10\%, su nuevo sueldo es : %.2f",nombre,aumento);

}
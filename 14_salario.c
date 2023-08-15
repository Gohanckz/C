/*
Genere un programa que permita calcular el salariod e una persona
indicando la cantidad de horas trabajadas y el valor x hora.
*/

#include <stdio.h>

int main(){
    float horas,valor,salario;
    printf("Ingrese la cantidad de horas trabajadas : ");
    scanf("%f",&horas);

    printf("Ingrese el valor por hora : ");
    scanf("%f",&valor);

    salario = horas*valor;
    printf("El salario total es de : %f",salario);

    return 0;
}
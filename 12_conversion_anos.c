/*
Cree un programa que convierta una cantidad de años en meses, semanas, días y horas.
*/

#include <stdio.h>

int main(){
    int anos,meses,semanas,dias,horas;

    printf("Ingrese la cantidad de anos que desea convertir : ");
    scanf("%i",&anos);

    meses = anos*12;
    semanas = meses*4;
    dias = semanas*7;
    horas = dias*24;

    printf("Los anos ingresados equivalen a %i meses, %i semanas, %i dias y %i horas.",meses,semanas,dias,horas);

}

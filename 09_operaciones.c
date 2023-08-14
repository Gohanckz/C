/*
Pedirle al usuario que digite dos numeros y 
tenemos que sumarlos, restarlos, multiplicarlos y dividirlos
*/

#include <stdio.h>


int main(){

    
    float a,b,suma,resta,div,mul;

    printf("Escribe el primer numero:");
    scanf("%f",&a);
    printf("Escribe el segundo numero:");
    scanf("%f",&b);
    

    suma = a+b;
    resta = a-b;
    div=a/b;
    mul=a*b;

    printf("La suma de a +  b es = %.2f\n",suma);
    printf("La resta de a -  b es = %.2f\n",resta);
    printf("La division de a /  b es = %.2f\n",div);
    printf("La multiplicacion de a *  b es = %.2f\n",mul);

    return 0;
}
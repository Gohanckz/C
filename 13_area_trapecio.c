#include <stdio.h>

int main(){
    float base_mayor,base_menor,altura,area;
    printf("Escribe la base mayor :");
    scanf("%f",&base_mayor);

    printf("Escribe la base menor : ");
    scanf("%f",&base_menor);

    printf("Escribe la altura :");
    scanf("%f",&altura);

    area = ((base_mayor+base_menor)*altura)/2;
    printf("\n El area es : %.2f",area);

}
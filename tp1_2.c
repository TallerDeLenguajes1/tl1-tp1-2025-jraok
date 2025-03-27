#include <stdio.h>

int main(){

    float numero;
    
    printf("\nIngrese un numero: ");
    scanf("%f", &numero);
    printf("\nEl cuadrado del numero es: %.2f", cuadrado(numero));

    return 0;
}

float cuadrado(float numero){
    return(numero*numero);
}

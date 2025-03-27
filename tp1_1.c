#include <stdio.h>

int main(){

    printf("\nHola Mundo\n");

    int variable = 1;
    int *puntero = &variable;

    printf("\n1-\tContenido del punteto: %d", *puntero);
    printf("\n2-\tDireccion de memoria almacenada en el puntero puntero: %p", puntero);
    printf("\n3-\tDireccion de memoria de la variable: %p", &variable);
    printf("\n4-\tDireccion de memoria del puntero: %p", &puntero);
    printf("\n5-\tTamanio de memoria usado por la variable: %lu bytes\n", sizeof(variable));

    return 0;
}

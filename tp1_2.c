#include <stdio.h>
#include <math.h>

float cuadrado(float numero);
void cuadradoVoid();

int main(){

    float numero;
    int op=0;

    do{
        puts("\n\t\t---Seleccione una funcion para utilizar---");
        puts("\n1-\tCuadrado");
        puts("\n2-\tCuadradoVoid");
        puts("\n1-\tSalir");
        scanf("%d", &op);
        switch (op){
        case 1:
            printf("\nIngrese un numero: ");
            scanf("%f", &numero);
            printf("\nEl cuadrado del numero es: %.2f", cuadrado(numero));
            break;
        
        case 2:
            cuadradoVoid();
            break;

        default:
            break;
        }
        
    } while (op<1 || op>3);
       
    return 0;
}

float cuadrado(float numero){
    return(numero*numero);
}

void cuadradoVoid(){
    float numero;
    
    printf("\nIngrese un numero: ");
    scanf("%f", &numero);
    printf("\nEl cuadrado del numero es: %.2f", numero*numero);
} 

#include <stdio.h>
#include <math.h>

float cuadrado(float numero);
void cuadradoVoid();
void direccionDeMemoria();

int main(){

    float numero;
    int op=0;

    do{
        puts("\n\t\t---Seleccione una funcion para utilizar---");
        puts("1-\tCuadrado");
        puts("2-\tCuadradoVoid");
        puts("3-\tDireccion de memoria de una variable");
        puts("4-\tSalir");
        scanf("%d", &op);
        switch (op){
        case 1:
            printf("\nIngrese un numero: ");
            scanf("%f", &numero);
            printf("\nEl cuadrado del numero es: %.2f\n", cuadrado(numero));
            break;
        
        case 2:
            cuadradoVoid();
            break;
            
        case 3:
            direccionDeMemoria();
            break;

        default:
            break;
        }
        if (op<1 || op>4){
            printf("\nopcion invalida");
        }
    } while (op != 4);
       
    return 0;
}

float cuadrado(float numero){
    return(numero*numero);
}

void cuadradoVoid(){
    float numero;
    fflush(stdin);
    printf("\nIngrese un numero: ");
    scanf("%f", &numero);
    printf("\nEl cuadrado del numero es: %.2f\n", numero*numero);
} 

void direccionDeMemoria(){
    
    int opcion=0;
    do{
        puts("\n\n\t\t--Seleccione el tipo de variable--");
        puts("1-\tCaracter");
        puts("2-\tNumerica");
        puts("3-\tSalir");
        scanf("%d",&opcion);
        fflush(stdin);
        if (opcion==1){
            char caracter;
            printf("\nIngrese un unico caracter: ");
            scanf("%c",&caracter);
            printf("Direccion de memoria de la variable: %p\n", &caracter);
            printf("Contenido de la variable: %c\n", caracter);
        }
        if (opcion==2){
            float num;
            printf("\nIngrese un numero: ");
            scanf("%f", &num);
            printf("Direccion de memoria de la variable: %p\n", &num);
            printf("Contenido de la variable: %.2f\n", num);
        }
        if (opcion < 1 || opcion>3){
            printf("\nopcion invalida");
        }
        
    } while (opcion != 3);
}

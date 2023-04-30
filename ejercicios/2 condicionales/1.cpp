#include <stdio.h>
//Ingresar dos valores, indicar si son iguales


int main() {
    int valor1, valor2;
    
    printf("Ingrese el primer valor: ");
    scanf("%d", &valor1);
    
    printf("Ingrese el segundo valor: ");
    scanf("%d", &valor2);
    
    if (valor1 == valor2) {
        printf("Los valores ingresados son iguales\n");
    } else {
        printf("Los valores ingresados son diferentes\n");
    }
    
    return 0;
}


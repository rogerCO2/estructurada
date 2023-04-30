#include <stdio.h>
//2. Ingresar un valor e indicar si es positivo, negativo o cero


/*
int main() {
    int valor1;
    
    printf("Ingrese el primer valor: ");
    scanf("%d", &valor1);
    
    
    if (valor1 > 0) {
        printf("es positivo");
    } else {
        if (valor1 < 0){
        	printf("es negativo");
		} else {
			printf("es cero");
		}
    }
    
    return 0;
}
*/

int main() {
    int valor1;
    
    printf("Ingrese el primer valor: ");
    int valorEscaneado1 = scanf("%d", &valor1);
    
    if (valorEscaneado1 != 1) { // Si la entrada no es un número entero, es decir 0=false
        printf("Error: Entrada no valida");
        return 1; // Salir del programa con un código de error
    }
    
    if (valor1 > 0) {
        printf("es positivo");
    } else if (valor1 < 0) {
        printf("es negativo");
    } else {
        printf("es cero");
    }
    
    return 0;
}

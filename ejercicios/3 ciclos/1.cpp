#include <stdio.h>
//1. Ingresar 25 números y calcular su promedio.

int main(){
	int contador = 0;
	int suma = 0;
	int num,promedio;
	
	
	for(contador=0;contador<25;contador++){
		printf("ingrese numero: ");
		scanf("%d", &num);
		suma = suma + num;
		//printf("suma parcial: %d\n", suma);
	}
	
	printf("suma total: %d\n", suma);
	
	promedio = suma/25;
	
	printf("El promedio es de: %d\n", promedio);
	
	
	
	return 0;
}

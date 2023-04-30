#include <iostream>
int resta(int valor1, int valor2);

int main(){
	int valor1, valor2, resultado;
	
	printf("ingrese un primer valor: ");
	scanf("%d", &valor1);
	
	printf("ingrese un segundo valor: ");
	scanf("%d", &valor2);
	
	if(valor1>valor2){
		resultado = resta(valor1,valor2);
		printf("%d\n", resultado);
	}else if(valor2>valor1){
		resultado = resta(valor2,valor1);
		printf("%d\n", resultado);
	}
	
	
	return 0;
}

int resta(int valor1, int valor2){
	return valor1 - valor2;
}




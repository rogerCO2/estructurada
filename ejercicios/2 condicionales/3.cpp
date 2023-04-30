#include <stdio.h>
//3. Ingresar dos valores y realizar el producto, si el primero es mayor al segundo, si son iguales solo indicarlo


/*
int main(){
	int valor1, valor2;
	
	printf("ingrese un primer valor: ");
	scanf ("%d", &valor1);
	
	printf("ingrese un segundo valor: ");
	scanf ("%d", &valor2);
	
	if (valor1>valor2){
		int resultado = valor1*valor2;
		printf ("el resultado es: %d", resultado);
	}else if(valor1==valor2){
		printf ("son iguales");
	}
	return 0;
	
}*/



int multiplicar(int a, int b);


int main(){
	int valor1, valor2, resultado;
	
	printf("ingrese un primer valor: ");
	scanf ("%d", &valor1);
	
	printf("ingrese un segundo valor: ");
	scanf ("%d", &valor2);
	
	if(valor1>valor2){
		resultado = multiplicar(valor1, valor2);
    	printf("El resultado de la multiplicacion es: %d\n", resultado);
	}else if(valor1 == valor2){
		printf("son iguales");
	}else{
		printf("el primer valor debe ser mayor al segundo");
	};
	

	return 0;
}

int multiplicar(int a, int b){
	return a*b;
}








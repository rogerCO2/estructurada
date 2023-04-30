#include <iostream>
//6. Ingresar tres valores, sumarlos, calcular el promedio e indicar cuál de estos valores es mayor al promedio
int calcularPromedio(int valor1, int cantidadAPromediar);
int calcularValorMayor(int valor1, int valor2, int valor3);
int sumar(int valor1, int valor2, int valor3);


int main(){
	int valorMayor, promedio, valor1, valor2, valor3, resultadoSuma;
	
	printf("ingrese el primer valor: ");
	scanf("%d", &valor1);
	
	printf("ingrese el segundo valor: ");
	scanf("%d", &valor2);
	
	printf("ingrese el tercer valor: ");
	scanf("%d", &valor3);
	
	resultadoSuma = sumar(valor1, valor2, valor3);
	printf("%d\n", resultadoSuma);
	
	promedio = calcularPromedio(resultadoSuma, 3);
	printf("%d\n", promedio);
	
	calcularValorMayor(valor1,valor2,valor3);

}

int sumar(int valor1, int valor2, int valor3){
	return valor1+valor2+valor3;
}

int calcularPromedio(int valor1, int cantidadAPromediar){
	return valor1/cantidadAPromediar;
}

int calcularValorMayor(int valor1, int valor2, int valor3){
	if(valor1>=valor2 && valor1>=valor3){
		printf("el valor ingresado mayor al promedio es %d\n", valor1);
	}else if(valor2>valor1 && valor2<valor3){				
		printf("el valor ingresado mayor al promedio es %d\n", valor3);
	}else if(valor1>=valor2 && valor1<valor3){				
		printf("el valor ingresado mayor al promedio es %d\n", valor3);
	}else{
		printf("el valor ingresado mayor al promedio es %d\n", valor2);
	}
}


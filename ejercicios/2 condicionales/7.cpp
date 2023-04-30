#include <stdio.h>
//7. Ingresar cuatro valores, sumar el 1ero y el 2do, el 3ero y el 4to, indicar cuál de estas sumas es mayoR


int main(){
	int valor1,valor2,valor3,valor4, suma1, suma2;
	
	printf("ingrese un valor: ");
	scanf("%d", &valor1);
	
	printf("ingrese un valor: ");
	scanf("%d", &valor2);
	
	printf("ingrese un valor: ");
	scanf("%d", &valor3);
	
	printf("ingrese un valor: ");
	scanf("%d", &valor4);
	
	suma1 = valor1+valor2;
	suma2 = valor3+valor4;
	
	if(suma1>suma2){
		printf("la suma mayor es de valor1+valor2");
	}else if(suma1<suma2){
		printf("la suma mayor es de valor3+valor4");
	}else{
		//no es necesario, no pide el sistema
		printf("las sumas son iguales")
	}
	
	return 0;
}



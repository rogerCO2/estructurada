#include <stdio.h>

int main(){
	int sueldo, categoria, antiguedad, sueldoFinal;
	
	printf("sueldo: ");
	scanf("%d", &sueldo);
	
	printf("categoria: ");
	scanf("%d", &categoria);
	
	printf("antiguedad: ");
	scanf("%d", &antiguedad);
	
	if(categoria==1){
		sueldoFinal = sueldo + (50*antiguedad);
		printf("su sueldo es de: %d\n", sueldoFinal);
	}
	else{
		sueldoFinal = sueldo;
		printf("su sueldo es de: %d\n", sueldoFinal);
	}
	
	return 0;
}



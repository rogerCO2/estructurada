#include <stdio.h>

int main(){
	int horasTrabajadas, categoria, sueldoFinal;
	
	printf("horas trabajadas: ");
	scanf("%d", &horasTrabajadas);
	
	printf("categoria: ");
	scanf("%d", &categoria);
	
	if(categoria==1){
		sueldoFinal = 50*horasTrabajadas;
		printf("su sueldo es de: %d\n", sueldoFinal);
	}else if(categoria==2){
		sueldoFinal = 70*horasTrabajadas;
		printf("su sueldo es de: %d\n", sueldoFinal);
	}else if(categoria==3){
		sueldoFinal = 80*horasTrabajadas;
		printf("su sueldo es de: %d\n", sueldoFinal);
	}else{
		printf("ingrese categoria valida!!");
	}
	return 0;
}




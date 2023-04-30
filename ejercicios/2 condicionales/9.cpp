#include <stdio.h>
/*9. Ingresar el valor de la hora y el tiempo trabajado por un empleado, calcular su sueldo si se
sabe que recibe
un premio de $100 si trabajo más de 50hs. y si trabajo más de 150hs le
dan $100 adicionales.*/

int main(){
	int valorHora, tiempoTrabajado, sueldo;
	
	printf("ingrese valor hora: ");
	scanf("%d", &valorHora);
	
	printf("ingrese tiempo trabajado: ");
	scanf("%d", &tiempoTrabajado);
	
	if (tiempoTrabajado >50){
		sueldo = (tiempoTrabajado * valorHora) + 100;
		printf("su sueldo es de: %d\n",sueldo);
	}else if(tiempoTrabajado > 150){
		sueldo = (tiempoTrabajado * valorHora) + 200;
		printf("su sueldo es de: %d\n",sueldo);
	}else{
		sueldo = tiempoTrabajado*valorHora;
		printf("su sueldo es de: %d\n",sueldo);
	}
	
	return 0;
}




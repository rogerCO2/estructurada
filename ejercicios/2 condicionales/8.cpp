#include <stdio.h>

int main(){
	int edad1, edad2, altura1, altura2, estaturaMayor;
	
	printf("ingrese edad primera persona: ");
	scanf("%d", &edad1);
	
	printf("ingrese altura primera persona: ");
	scanf("%d", &altura1);
	
	printf("ingrese edad segunda persona: ");
	scanf("%d", &edad2);
	
	printf("ingrese altura segunda persona: ");
	scanf("%d", &altura2);
	
	if(edad1>edad2){
		estaturaMayor = altura1;
		printf("la altura de la persona mayor es de %d\n", estaturaMayor);
	}else if(edad1<edad2){
		estaturaMayor = altura2;
		printf("la altura de la persona mayor es de %d\n", estaturaMayor);
	}else{
		printf("Ambas personas tienen la misma edad. No se puede determinar la estatura de la persona mayor.\n");
		//en caso de querer edad1=edad2
		/*if(altura1>altura2){
			estaturaMayor = altura1;
			printf("la altura de la persona mayor es de %d\n", estaturaMayor);
		}else{
			estaturaMayor = altura2;
			printf("la altura de la persona mayor es de %d\n", estaturaMayor);
		}*/
		
		
	}
	
	return 0;
	
}

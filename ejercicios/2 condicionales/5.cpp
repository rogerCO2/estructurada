#include <iostream>

int main(){
	int ladoA, ladoB, ladoC;
	
	printf("ingrese el primer lado: ");
	scanf("%d", &ladoA);
	
	printf("ingrese el segundo lado: ");
	scanf("%d", &ladoB);
	
	printf("ingrese el tercer lado: ");
	scanf("%d", &ladoC);
	
	if(ladoA==ladoB && ladoA==ladoC){
		printf("triangulo equilatero");
	}else if(ladoA==ladoB || ladoA==ladoC || ladoB==ladoC){
		printf("triangulo isosceles");
	}else{
		printf("triangulo escaleno");
	}
	
	
	return 0;
}





#include <stdio.h>
#include <stdbool.h>
bool comprobarFecha(int dia, int mes, int anio);
bool esBiciesto(int anio);

int main(){
	int dia, mes, anio;
	
	printf("dia: ");
	scanf("%d", &dia);
	
	printf("mes: ");
	scanf("%d", &mes);
	
	printf("anio: ");
	scanf("%d", &anio);
	
	
	if(comprobarFecha(dia, mes, anio)==true){
		printf("FECHA VALIDA");
	}else{
		printf("FECHA INVALIDA");
	}
	
	return 0;
}

bool esBiciesto(int anio){
	if(anio%400==0){
		return true;
	}else if(anio%100==0){
		return false;
	}else if(anio%4 == 0){
		return true;
	}
	return false;
}

bool comprobarFecha(int dia, int mes, int anio){
	if(mes<1 || mes>12){
		return false;
	}
        
    if(dia<1 || dia>31){
    	return false;  
	}
	
	if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if(dia > 30)
            return false;
    }
	
	if(mes==2){
		if(esBiciesto(anio)){
			if(dia>29){
			return false;
			}
			}
		else{
			if(dia>28){
			return false;
				}
			}
	}
    
	return true;
	}
	





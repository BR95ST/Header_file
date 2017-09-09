#include "primo.h"

/*  A função recebe um número e retorna 1 em caso de primo ou 0 se o número não for primo.*/
int prime(int x){
	int i, cont = 0;
	for(i=1;i<x+1;i++){
		if(x % i == 0){
		    cont++;	
		}
	}
	if(cont == 2){
		return 1;
	}
	else{
		return 0;
	}
}
/* A função recebe um número e devolve sua posição entre os números primos.
   EX: caso a função receba o número 139 será retornado o valor 34, pois o numero 139 é o 34º primo.
*/
int primeForIndex(int x){
	int index = 0, i = 1;
	if(prime(x)){
		while(i <= x){
  	        if(prime(i)){
                index++;            
	        }	 
			i++;   
		}
	}
	else{
		return 0;
	}
	return index;
}

/*  A função recebe um número inteiro que representa o index de um número primo e devolve o número primo.
    EX: caso a função receba o número 34 será retornado o valor 139, pois o numero 139 é o 34º primo. 
*/
int indexForPrime(int x){
	int contPrimo = 0, cont = 2;
	while(contPrimo < x){
		if(prime(cont)){
			contPrimo++;			
		}
		cont++;
	}
	return cont-1;
}

/* A função recebe um número inteiro e o decompõe ele em fatores primos*/
void decompose(int x){
	int* arrayLocal = (int *)malloc(25 * sizeof(int));
	int i = 0, j, cont = 2;
	while(x > 1){
		if(prime(cont)){
			if(x % cont == 0){
                x = x / cont;
			    arrayLocal[i] = cont;
				i++;				
			}
			else{
				cont++;
			}				
		}
		else{
			cont++;
		}
	}
	printf("Decompose: ");
	for(j=0;j<i;j++){
		printf("%d, ", arrayLocal[j]);
	}
}

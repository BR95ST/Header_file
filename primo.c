#include "primo.h"

/*  A função recebe um número e retorna 1 em caso de primo ou 0 se o número não for primo.*/
int primo(int x){
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
int indexPrimo(int x){
	int index = 0, i = 1;
	if(primo(x)){
		while(i <= x){
  	        if(primo(i)){
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

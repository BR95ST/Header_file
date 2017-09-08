#include "primo.h"

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

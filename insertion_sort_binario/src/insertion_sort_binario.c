#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "insertion_sort_binario.h"

void insertion_sort_binario(dado_t ** dados, int n_linhas){
	for(int i = 1; i < n_linhas; i++){
		dado_t * tmp = dados[i];
		int esquerda = 0;
		int direita = i;

		while(esquerda < direita){
			int meio = (esquerda + direita) / 2;

			if(retornar_temperatura(tmp) >= retornar_temperatura(dados[meio])){
				esquerda = meio + 1;
			}else{
				direita = meio;
			}
		}

		for(int j = i; j > esquerda; j--){
			dado_t * aux = dados[j - 1];
			dados[j - 1] = dados[j];
			dados[j] = aux;
		}
	}
}

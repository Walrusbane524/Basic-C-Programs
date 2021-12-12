#include <stdio.h>
#include <stdlib.h>
#include "./api.h"

//Contém funções para alocação de memória de um vetor, atribuição de valor, retorno de valor e uma
// função para liberar a memória alocada.

// Contains functions for array memory allocation, value atribuition, value return and a function
// to free the allocated memory.

void *criar_vetor(int tamanho){
	
	void *v;
	
	v = (void*)malloc(tamanho * sizeof(double));
	
	return v;
}

double obter_vetor(void *mem, int x){

	double valor, *vetor;
	
	vetor = mem;
	valor = vetor[x];
	
	return valor;
}

int atribuir_vetor(void *mem, int x, double valor){
	
	double *vetor;
	vetor = mem;
	vetor[x] = valor;
	
	return 0;
}
void liberar_vetor(void *mem){

	free(mem);

}

#include <stdio.h>
#include <stdlib.h>
#include "./api.h" 

//Contém funções para alocação de memória de uma matriz, atribuição de valor, retorno de valor e uma
// função para liberar a memória alocada.

// Contains functions for matrix memory allocation, value atribuition, value return and a function
// to free the allocated memory.

void *criar_matriz(int tamanho_x, int tamanho_y){
	
	int i;
	long int *matriz;
	matriz = malloc(tamanho_y * sizeof(double));

	for(i = 0; i < tamanho_y; i++) 
		matriz[i] = (long int)malloc(tamanho_x * sizeof(double));

	return (void*) matriz;
}

double obter_matriz(void *mem, int x, int y){

	long int *vetorX;
	double *vetorY, valor;
	vetorX = mem;
	vetorY = (double*) vetorX[y];
		
	valor = vetorY[x];
	
	return valor;

}

int atribuir_matriz(void *mem, int x, int y, double valor){

	long int *vetorX;
	double *vetorY;
	vetorX = mem;
	vetorY = (double*) vetorX[y];
	
	vetorY[x] = valor;

	return 0;
}

void liberar_matriz(void *mem, int y){
	
	long int* vetorX = (long int*)mem;
	double* vetorY;
	for(int i = 0; i < y; i++){
		vetorY = (double*)vetorX[i];
		free((void*)vetorY);
	}
	free((void*)vetorX);
}

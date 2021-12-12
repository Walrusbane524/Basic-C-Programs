#include <stdio.h>
#include <stdlib.h>
#include "./api.h" 

// Usada apenas para testar as funcionalidades da API.

// Used only to test the API.

int main(){

	long int *m = (long int*)criar_matriz(2, 2);
	double *v = (double*)criar_vetor(4);
	
	atribuir_matriz(m, 0, 0, 1.5);
	atribuir_matriz(m, 0, 1, 2.5);
	atribuir_matriz(m, 1, 0, 3.5);
	atribuir_matriz(m, 1, 1, 4.5);
	printf("Matriz[0][0] = %f\n", obter_matriz(m, 0, 0));
	printf("Matriz[0][1] = %f\n", obter_matriz(m, 0, 1));
	printf("Matriz[1][0] = %f\n", obter_matriz(m, 1, 0));
	printf("Matriz[1][1] = %f\n", obter_matriz(m, 1, 1));
	
	liberar_matriz(m, 2);
	
	atribuir_vetor(v, 0, 0.25);
	atribuir_vetor(v, 1, 0.50);
	atribuir_vetor(v, 2, 0.75);
	atribuir_vetor(v, 3, 1.0);
	printf("Vetor[0] = %f\n", obter_vetor(v, 0));
	printf("Vetor[1] = %f\n", obter_vetor(v, 1));
	printf("Vetor[2] = %f\n", obter_vetor(v, 2));
	printf("Vetor[3] = %f\n", obter_vetor(v, 3));
	
	liberar_vetor(v);
	
	return 0;
}

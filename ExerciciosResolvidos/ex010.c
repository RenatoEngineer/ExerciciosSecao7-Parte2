/*
 * ex010.c
 *
 *  Criado em: 24 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao7-Parte2
 */

#include <stdio.h>

int main(){

	int matriz[3][3];
	int soma = 0;
	int contador = 0;
	char ordinal = 176;

	// Lendo os Elementos da Matriz
	for (int i = 0; i < 3; i ++){
		for (int j = 0; j < 3; j ++){
			printf("Digite o %d%c Elemento da Matriz 3x3: ", contador + 1, ordinal);
			fflush(stdout);
			scanf("%d", &matriz[i][j]);
			contador ++;
		}
	}

	// Exibindo a Matriz
	printf("\n.:: MATRIZ 3X3 ::.\n");
	for (int i = 0; i < 3; i ++){
		for (int j = 0; j < 3; j ++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

	// Calculando a Soma dos Elementos que estao na Diagonal Principal
	for (int i = 0; i < 3; i ++){
		soma += matriz[i][i];
	}

	// Imprimindo a Soma dos Elementos que estao na Diagonal Principal
	printf("\nA Soma dos Elementos que estao na diagonal Principal e: %d", soma);

	return 0;
}

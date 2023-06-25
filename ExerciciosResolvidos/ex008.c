/*
 * ex008.c
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

	// Calculando a Soma dos Elementos Acima da Diagonal Principal
	for (int i = 0; i < 3; i ++){
		for (int j = i + 1; j < 3; j ++){
			soma += matriz[i][j];
		}
	}

	// Imprimindo a Soma dos Elementos acima da Diagonal Principal
	printf("\nA Soma dos Elementos acima da diagonal Principal e: %d", soma);

	return 0;
}

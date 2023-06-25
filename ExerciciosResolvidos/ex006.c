/*
 * ex006.c
 *
 *  Criado em: 24 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao7-Parte2
 */

#include <stdio.h>

int main(){

	int matriz1[4][4];
	int matriz2[4][4];
	int matrizResultante[4][4];
	int contador1 = 0;
	int contador2 = 0;
	char ordinal = 176; // Tabela ASCII

	// Lendo Elementos da Matriz 1
	printf(".:: Matriz 1 ::.\n");
	for (int i = 0; i < 4; i ++){
		for (int j = 0; j < 4; j ++){
			printf("Digite o %d%c Elemento da Matriz 1: ", contador1 + 1, ordinal);
			fflush(stdout);
			scanf("%d", &matriz1[i][j]);
			contador1 ++;
		}
	}

	// Exibindo a Matriz 1
	printf("\n");
	for (int i = 0; i < 4; i ++){
		for (int j = 0; j < 4; j ++){
			printf("%d ", matriz1[i][j]);
		}
		printf("\n");
	}

	// Lendo Elementos da Matriz 2
	printf("\n\n.:: Matriz 2 ::.\n");
	for (int i = 0; i < 4; i ++){
		for (int j = 0; j < 4; j ++){
			printf("Digite o %d%c Elemento da Matriz 2: ", contador2 + 1, ordinal);
			fflush(stdout);
			scanf("%d", &matriz2[i][j]);
			contador2 ++;
		}
	}

	// Exibindo a Matriz 2
	printf("\n");
	for (int i = 0; i < 4; i ++){
		for (int j = 0; j < 4; j ++){
			printf("%d ", matriz2[i][j]);
		}
		printf("\n");
	}

	// Exibindo da Matriz Resultante
	printf("\n.:: Matriz 3 ::.\n");
	printf("A Matriz Resultante dos Maiores Elementos e:\n");
	for (int i = 0; i < 4; i ++){
		for (int j = 0; j < 4; j ++){
			if (matriz1[i][j] > matriz2[i][j]){
				matrizResultante[i][j] = matriz1[i][j];
			} else {
				matrizResultante[i][j] = matriz2[i][j];
			}
			printf("%d ", matrizResultante[i][j]);
		}
		printf("\n");
	}

	return 0;
}

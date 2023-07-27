/*
 * ex023.c
 *
 *  Criado em: 27 de jul de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao7-Parte2
 */

#include <stdio.h>

#define TAMANHO 3

int main(){

	int matrizA[TAMANHO][TAMANHO];
	int matrizB[TAMANHO][TAMANHO];

	//Lendo a Matriz A
	printf("Digite os Elementos da Matriz A:\n");
	fflush(stdout);
	for (int i = 0; i < TAMANHO; i ++){
		for (int j = 0; j < TAMANHO; j ++){
			scanf("%d", &matrizA[i][j]);
		}
	}

	//Calculando a Matriz B = (A²)
	for (int i = 0; i < TAMANHO; i ++){
		for (int j = 0; j < TAMANHO; j ++){
			matrizB[i][j] = 0;
			for (int k = 0; k < TAMANHO; k ++){
				matrizB[i][j] += matrizA[i][k] * matrizA[k][j];
			}
		}
	}

	//Impressao da Matriz B
	printf("\nMatriz B (Resultado de A²):\n");
	for (int i = 0; i < TAMANHO; i ++){
		for (int j = 0; j < TAMANHO; j ++){
			printf("%d	", matrizB[i][j]);
		}
		printf("\n");
	}

	return 0;
}

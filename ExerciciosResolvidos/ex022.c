/*
 * ex022.c
 *
 *  Criado em: 26 de jul de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao7-Parte2
 */

#include <stdio.h>

int main(){

	int A[3][3];
	int B[3][3];
	int C[3][3];

	printf("Digite os Elementos da Matriz A:\n");
	fflush(stdout);
	for (int i = 0; i < 3; i ++){
		for (int j = 0; j < 3; j ++){
			scanf("%d", &A[i][j]);
		}
	}

	printf("\nDigite os Elementos da Matriz B:\n");
	fflush(stdout);
	for (int i = 0; i < 3; i ++){
		for (int j = 0; j < 3; j ++){
			scanf("%d", &B[i][j]);
		}
	}

	//Calculando o produto das Matrizes A e B e Armazenando em C
	for (int i = 0; i < 3; i ++){
		for (int j = 0; j < 3; j ++){
			C[i][j] = 0; //Inicializando o Elemento C[i][j] com Zero antes de Calcular seu valor
			for (int k = 0; k < 3; k ++){
				C[i][j] += A[i][k] * B[k][j]; //Multiplicando os elementos das Matrizes A e B e Soma ao Valor de C[i][j]
			}
		}
	}

	printf("\nResultado da Multiplicacao (C = A * B):\n");
	for (int i = 0; i < 3; i ++){
		for (int j = 0; j < 3; j ++){
			printf("%d	", C[i][j]);
		}
		printf("\n");
	}

	return 0;
}

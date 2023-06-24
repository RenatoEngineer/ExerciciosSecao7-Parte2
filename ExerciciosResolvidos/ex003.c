/*
 * ex003.c
 *
 *  Criado em: 24 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao7-Parte2
 */

#include <stdio.h>

int main(){

	int matriz[4][4];

	// Preenchimento da Matriz com o Produto dos Indices
	for (int i = 0; i < 4; i ++){
		for (int j = 0; j < 4; j ++){
			matriz [i][j] = i * j;
		}
	}

	//Exibicao da Matriz
	printf("Matriz Resultante:\n\n");
	for (int i = 0; i < 4; i ++){
		for (int j = 0; j < 4; j ++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}

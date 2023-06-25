/*
 * ex007.c
 *
 *  Criado em: 24 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao7-Parte2
 */

#include <stdio.h>

int main(){

	int matriz[10][10];

	// Preenchendo a Matriz
	for (int i = 0; i < 10; i ++){
		for (int j = 0; j < 10; j ++){
			if (i < j){
				matriz[i][j] = 2 * i + 7 * j - 2;
			} else {
				if (i == j){
					matriz[i][j] = 3 * i * i - 1;
				} else {
					matriz[i][j] = 4 * i * i * i - 5 * j * j + 1;
				}
			}
		}
	}

	// Imprimindo a Matriz
	printf(".:: MATRIZ ::.\n\n");
	for (int i = 0; i < 10; i ++){
		for (int j = 0; j < 10; j ++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}

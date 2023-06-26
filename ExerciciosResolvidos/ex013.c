/*
 * ex013.c
 *
 *  Criado em: 26 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao7-Parte2
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int matriz[4][4];

	// Gerando valores aleatorios no intervalo [1, 20]
	srand(time(0));
	for (int i = 0; i < 4; i ++){
		for (int j = 0; j < 4; j ++){
			matriz[i][j] = rand() % 20 + 1;
		}
	}

	// Imprimindo a matriz original
	printf(".:: MATRIZ ORIGINAL GERADA ::.\n");
	for (int i = 0; i < 4; i ++){
		for (int j = 0; j < 4; j ++){
			printf("%4d ", matriz[i][j]);
		}
		printf("\n");
	}

	// Transformando a matriz em uma matriz triangular inferior
	for (int i = 0; i < 4; i ++){
		for (int j = i + 1; j < 4; j ++){
			matriz[i][j] = 0;
		}
	}

	// Imprimindo a Matriz Transformada
	printf("\n.:: MATRIZ TRIANGULAR INFERIOR ::.\n");
	for (int i = 0; i < 4; i ++){
		for (int j = 0; j < 4; j ++){
			printf("%4d ", matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}

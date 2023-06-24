/*
 * ex002.c
 *
 *  Criado em: 24 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao7-Parte2
 */

#include <stdio.h>

int main(){

	int matriz[5][5];

	//Preenchimento da Matriz
	for (int i = 0; i < 5; i ++){
		for (int j = 0; j < 5; j ++){
			if (i == j){
				matriz[i][j] = 1;
			}else{
				matriz[i][j] = 0;
			}
		}
	}

	//Exibindo a Matriz
	printf("Matriz Resultante:\n\n");
	for (int i = 0; i < 5; i ++){
		for (int j = 0; j < 5; j ++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}

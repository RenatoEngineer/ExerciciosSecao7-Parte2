/*
 * ex001.c
 *
 *  Criado em: 24 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao7-Parte2
 */

#include <stdio.h>

int main(){

	int matriz[4][4];
	int contaMaior10 = 0;
	int contador = 0;
	char ordinal = 176; //Tabela ASCII

	// Leitura da Matriz
	for (int i = 0; i < 4; i ++){
		for (int j = 0; j < 4; j ++){
			printf("Digite o %d%c Valor da Matriz 4x4: ", contador + 1, ordinal);
			fflush(stdout);
			scanf("%d", &matriz[i][j]);
			contador ++;
		}
	}

	//Contagem dos Valores Maiores que 10
	for (int i = 0; i < 4; i ++){
		for (int j = 0; j < 4; j ++){
			if (matriz[i][j] > 10){
				contaMaior10 ++;
			}
		}
	}

	// Exibicao do Resultado
	printf("\nA Matriz possui %d valores maiores que 10!!!", contaMaior10);

	return 0;
}

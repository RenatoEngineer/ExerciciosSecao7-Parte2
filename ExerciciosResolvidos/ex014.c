/*
 * ex014.c
 *
 *  Criado em: 27 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao7-Parte2
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(){

	int cartela[5][5] = {0};	 // Armazena a Cartela de Bingo
	int numeros[100] = {0};		// Vetor para controlar numeros que foram utilizados

	// Inicia o Gerador de Numeros Aleatorios
	srand(time(NULL));

	// Preenche a cartela com numeros unicos
	for (int i = 0; i < 5; i ++){
		for (int j = 0; j < 5; j ++){
			bool numeroUnico = false;
			while (!numeroUnico){
				int num = rand() % 100;		 // Gera um numero aleatorio entre 0 e 99
				if (numeros[num] == 0){		// Verifica se o numero ja foi utilizado
					numeros[num] = 1;	   // Marca o numero como utilizado
					cartela[i][j] = num;  // Armazena o numero na cartela
					numeroUnico = true;	 // Sai do loop para prosseguir com o proximo numero
				}
			}
		}
	}

	// Imprime a cartela de bingo

	printf("   .:: BINGO ::.\n");
	for (int i = 0; i < 5; i ++){
		for (int j = 0; j < 5; j ++){
			printf("%3d ", cartela[i][j]); 	//Imprime cada numero da cartela
		}
		printf("\n");
	}

	return 0;
}

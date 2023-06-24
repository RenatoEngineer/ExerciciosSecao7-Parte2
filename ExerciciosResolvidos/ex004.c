/*
 * ex004.c
 *
 *  Criado em: 24 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao7-Parte2
 */

#include <stdio.h>

int main(){

	int matriz[4][4];
	int maiorValor = 0;
	int linhaMaior;
	int colunaMaior;
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

	// Impressao da Matriz
	printf("\nMatriz:\n");
	for (int i = 0; i < 4; i ++){
		for (int j = 0; j < 4; j ++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

	// Encontrar o maior Valor e sua Localizacao
	for (int i = 0; i < 4; i ++){
		for (int j = 0; j < 4; j ++){
			if (matriz[i][j] > maiorValor){
				maiorValor = matriz[i][j];
				linhaMaior = i;
				colunaMaior = j;
			}
		}
	}

	// Exibindo o Resultado
	printf("\nO Maior Valor da Matriz e: %d\nEsta localizado na Linha %d, e coluna %d", maiorValor, linhaMaior + 1, colunaMaior + 1);

	return 0;
}

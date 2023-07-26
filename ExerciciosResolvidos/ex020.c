/*
 * ex020.c
 *
 *  Criado em: 25 de jul de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao7-Parte2
 */

#include <stdio.h>

int main(){

	float matriz[3][6];
	float somaColunasImpares = 0;
	float mediaColunas2e4 = 0;

	//Lendo a Matriz
	for (int i = 0; i < 3; i ++){
		for (int j = 0; j < 6; j ++){
			printf("Digite o Elemento da Linha %d e Coluna %d: ", i + 1, j + 1);
			fflush(stdout);
			scanf("%f", &matriz[i][j]);
		}
	}

	//Imprimindo a soma de todos os elementos das colunas impares
	for (int i = 0; i < 3; i ++){
		somaColunasImpares += matriz[i][0] + matriz[i][2] + matriz[i][4];
	}
	printf("\nA Soma de todos os Elementos das Colunas Impares e %.2f\n", somaColunasImpares);

	//Imprimindo a media aritmetica dos elementos da Segunda e Quarta Colunas
	for (int i = 0; i < 3; i ++){
		mediaColunas2e4 += matriz[i][1] + matriz[i][3];
	}
	mediaColunas2e4 /= 2;
	printf("\nA Media Aritmetica dos Elementos da Segunda e Quarta Colunas e: %.2f\n\n", mediaColunas2e4);

	//Substituindo os Valores da Sexta Coluna pela Soma dos Valores das Colunas 1 e 2
	for (int i = 0; i < 3; i ++){
		matriz[i][5] = matriz[i][0] + matriz[i][1];
	}

	//Imprimindo a Matriz Modificada
	for (int i = 0; i < 3; i ++){
		for (int j = 0; j < 6; j ++){
			printf("%.2f	", matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}

/*
 * ex021.c
 *
 *  Criado em: 26 de jul de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao7-Parte2
 */

#include <stdio.h>

#define linhas 2
#define colunas 2

int main(){

	float matriz1[linhas][colunas];
	float matriz2[linhas][colunas];
	float resultado[linhas][colunas];
	float constante;
	char opcao;

	printf("Digite os Elementos da Primeira Matriz:\n");
	fflush(stdout);
	for (int i = 0; i < linhas; i ++){
		for (int j = 0; j < colunas; j ++){
			scanf("%f", &matriz1[i][j]);
		}
	}

	printf("Digite os Elementos da Segunda Matriz:\n");
	fflush(stdout);
	for (int i = 0; i < linhas; i ++){
		for (int j = 0; j < colunas; j ++){
			scanf("%f", &matriz2[i][j]);
		}
	}

	printf("\n.:: ESCOLHA UMA OPCAO ::.\n");
	printf("(a) Somar as duas Matrizes\n");
	printf("(b) Subtrair a Primeira Matriz da Segunda\n");
	printf("(c) Adicionar uma Constante as duas Matrizes\n");
	printf("(d) Imprimir as Matrizes\n");
	fflush(stdout);
	scanf(" %c", &opcao);

	switch(opcao){
	case 'a':
		//Soma as Duas Matrizes e Imprime o Resultado
		printf("Resultado da Soma:\n");
		for (int i = 0; i < linhas; i ++){
			for (int j = 0; j < colunas; j ++){
				resultado[i][j] = matriz1[i][j] + matriz2[i][j];
				printf("%.2f	", resultado[i][j]);
			}
			printf("\n");
		}
		break;

	case 'b':
		//Subtrai a Primeira Matriz da Segunda e Imprime o Resultado
		printf("Resultado da Subtracao:\n");
		for (int i = 0; i < linhas; i ++){
			for (int j = 0; j < linhas; j ++){
				resultado[i][j] = matriz1[i][j] - matriz2[i][j];
				printf("%.2f	", resultado[i][j]);
			}
			printf("\n");
		}
		break;

	case 'c':
		//Adiciona uma Constante as Duas Matrizes e Imprime o Resultado
		printf("Digite a Constante a ser Adicionada as Matrizes: ");
		fflush(stdout);
		scanf("%f", &constante);
		printf("\nResultado da Adicao da Constante na Matriz 1:\n");
		for (int i = 0; i < linhas; i ++){
			for (int j = 0; j < colunas; j ++){
				matriz1[i][j] += constante;
				printf("%.2f	", matriz1[i][j]);
			}
			printf("\n");
		}
		printf("\nResultado da Adicao da Constante na Matriz 2:\n");
		for (int i = 0; i < linhas; i ++){
			for (int j = 0; j < colunas; j ++){
				matriz2[i][j] += constante;
				printf("%.2f	", matriz2[i][j]);
			}
			printf("\n");
		}
		break;

	case 'd':
		//Imprime as Matrizes
		printf("Matriz 1:\n");
		for (int i = 0; i < linhas; i ++){
			for (int j = 0; j < colunas; j ++){
				printf("%.2f	", matriz1[i][j]);
			}
			printf("\n");
		}
		printf("\nMatriz 2:\n");
		for (int i = 0; i < linhas; i ++){
			for (int j = 0; j < colunas; j ++){
				printf("%.2f	", matriz2[i][j]);
			}
			printf("\n");
		}
		break;

	default:
		printf("Opcao Invalida!\n");
		break;

	}

	return 0;
}

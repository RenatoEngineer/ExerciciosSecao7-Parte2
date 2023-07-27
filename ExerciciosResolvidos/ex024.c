/*
 * ex024.c
 *
 *  Criado em: 27 de jul de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao7-Parte2
 */

#include <stdio.h>

#define LINHAS 20
#define COLUNAS 20

int main(){

	int matriz[LINHAS][COLUNAS];
	int maiorProduto = 0;

	//Lendo a Matriz
	printf("Digite os elementos da Matriz 20 x 20:\n");
	fflush(stdout);
	for (int i = 0; i < LINHAS; i ++){
		for (int j = 0; j < COLUNAS; j ++){
			scanf("%d", &matriz[i][j]);
		}
	}

	//Exibindo a Matriz Digitada
	printf("\n.:: MATRIZ DIGITADA ::.\n\n");
	for (int i = 0; i < LINHAS; i ++){
		for (int j = 0; j < COLUNAS; j ++){
			printf("%02d ", matriz[i][j]); //Preenche com Zero a esquerda
		}
		printf("\n");
	}

	//Verificacao Horizontal
	for (int i = 0; i < LINHAS; i ++){
		for (int j = 0; j < COLUNAS - 3; j ++){
			int produto = matriz[i][j] * matriz[i][j + 1] * matriz[i][j + 2] * matriz[i][j + 3];
			if (produto > maiorProduto){
				maiorProduto = produto;
			}
		}
	}

	//Verificacao Vertical
	for (int i = 0; i < LINHAS - 3; i ++){
		for (int j = 0; j < COLUNAS; j ++){
			int produto = matriz[i][j] * matriz[i + 1][j] * matriz[i + 2][j] * matriz[i + 3][j];
			if (produto > maiorProduto){
				maiorProduto = produto;
			}
		}
	}

	//Verificacao das diagonais (Direita e Esquerda)
	for (int i = 0; i < LINHAS - 3; i ++){
		for (int j = 0; j < COLUNAS - 3; j ++){
			int produtoDiagDir = matriz[i][j] * matriz[i + 1][j + 1] * matriz[i + 2][j + 2] * matriz[i + 3][j + 3];
			int produtoDiagEsq = matriz[i][j + 3] * matriz[i + 1][j + 2] * matriz[i + 2][j + 1] * matriz[i + 3][j];
			int produtoDiagonal = (produtoDiagDir > produtoDiagEsq) ? produtoDiagDir : produtoDiagEsq;
			if (produtoDiagonal > maiorProduto){
				maiorProduto = produtoDiagonal;
			}
		}
	}

	//Imprimindo maior Produto Encontrado
	printf("\nMaior Produto de Quatro Numeros Adjacentes em qualquer direcao e: %d\n", maiorProduto);

	return 0;
}

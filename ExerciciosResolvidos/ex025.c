/*
 * ex025.c
 *
 *  Criado em: 28 de jul de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao7-Parte2
 */

#include <stdio.h>

#define TAMANHO 3
#define VAZIO 0
#define JOGADOR -1
#define OPONENTE 1

int main(){

	int tabuleiro[TAMANHO][TAMANHO] = {
			{-1, 1, 1},
			{-1, -1, 0},
			{0, 1, 0}
	};

	int melhorLinha = -1;
	int melhorColuna = -1;
	int melhorPontuacao = -1000;

	//Loop para encontrar a melhor jogada
	for (int i = 0; i < TAMANHO; i ++){
		for (int j = 0; j < TAMANHO; j ++){
			if (tabuleiro[i][j] == VAZIO){
				tabuleiro[i][j] = JOGADOR;

				//Calculo da Pontuacao da Jogada
				int pontuacaoAtual = 0;
				for (int x = 0; x < TAMANHO; x ++){
					for (int y = 0; y < TAMANHO; y ++){
						if (tabuleiro[x][y] == VAZIO){
							tabuleiro[x][y] = OPONENTE;
							pontuacaoAtual ++;
							tabuleiro[x][y] = VAZIO;
						}
					}
				}

				tabuleiro[i][j] = VAZIO;

				//Atualiza a melhor jogada
				if (pontuacaoAtual > melhorPontuacao){
					melhorPontuacao = pontuacaoAtual;
					melhorLinha = i;
					melhorColuna = j;
				}
			}
		}
	}

	printf("Proxima Jogada Recomendada: Linha: %d, Coluna: %d\n", melhorLinha + 1, melhorColuna + 1);

	return 0;
}

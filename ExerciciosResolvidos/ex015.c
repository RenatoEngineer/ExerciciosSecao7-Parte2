/*
 * ex015.c
 *
 *  Criado em: 6 de jul de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao7-Parte2
 */

#include <stdio.h>

#define ALUNOS 5
#define QUESTOES 10

int main(){

	char gabarito[QUESTOES];				//Armazena o gabarito de respostas
	char respostas[ALUNOS][QUESTOES];		//Armazena as respostas dos alunos
	int resultado[ALUNOS] = {0};			//Armazena as pontuacoes dos alunos
	char ordinal = 176;						//Tabela ASCII

	printf("Digite o Gabarito de Respostas (a, b, c ou d):\n");
	fflush(stdout);
	for (int i = 0; i < QUESTOES; i ++){
		scanf(" %c", &gabarito[i]);			//Le as respostas do gabarito e as armazena no array gabarito[]
	}

	for (int i = 0; i < ALUNOS; i ++){
		printf("\nDigite as respostas do %d%c aluno (a, b, c ou d):\n", i + 1, ordinal);
		fflush(stdout);
		for (int j = 0; j < QUESTOES; j ++){
			scanf(" %c", &respostas[i][j]);		//Le as respostas de cada aluno e armazena na matriz respostas[][]
		}
	}

	for (int i = 0; i < ALUNOS; i ++){
		for (int j = 0; j < QUESTOES; j ++){
			if (respostas[i][j] == gabarito[j]){		//Compara as respostas de cada aluno com o gabarito
				resultado[i]++;							//Incrementa a pontuacao do aluno se a resposta estiver correta
			}
		}
	}

	printf("\n.:: RESULTADOS ::.\n");
	for (int i = 0; i < ALUNOS; i ++){
		printf("%d%c Aluno: %d pontos\n", i + 1, ordinal, resultado[i]);		//Exibe o vetor de resultados, mostrando a pontuacao de cada aluno
	}

	return 0;
}

/*
 * ex016.c
 *
 *  Criado em: 7 de jul de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao7-Parte2
 */

#include <stdio.h>

#define ALUNOS 3
#define QUESTOES 10
#define APROVACAO 7.0

int main(){

	char gabarito [QUESTOES];
	int matricula [ALUNOS];
	char respostas [ALUNOS][QUESTOES];
	float nota[ALUNOS];
	int numAprovados = 0;
	char ordinal = 176;

	printf("Digite o Gabarito de Respostas (a, b, c, d ou e):\n");
	fflush(stdout);
	for (int i = 0; i < QUESTOES; i ++){
		scanf(" %c", &gabarito[i]);
	}

	for (int i = 0; i < ALUNOS; i ++){
		printf("\nDigite a Matricula do %d%c Aluno: ", i + 1, ordinal);
		fflush(stdout);
		scanf("%d", &matricula[i]);

		printf("Digite as Respostas do %d%c Aluno (a, b, c, d ou e):\n", i + 1, ordinal);
		fflush(stdout);
		for (int j = 0; j < QUESTOES; j ++){
			scanf(" %c", &respostas[i][j]);
		}

		//Correcao da Prova e Calculo da Nota
		nota[i] = 0;
		for (int j = 0; j < QUESTOES; j ++){
			if (respostas[i][j] == gabarito[j]){
				nota[i]++;
			}
		}

		printf("Aluno: Matricula %d\nRespostas: ", matricula[i]);
		for (int j = 0; j < QUESTOES; j++){
			printf("%c ", respostas[i][j]);
		}

		printf("\nNota: %.1f\n", nota[i]);

		//Verificacao da Aprovacao
		if (nota[i] >= APROVACAO){
			numAprovados++;
		}
	}

	float percentualAprovados = (float)numAprovados / ALUNOS * 100;
	printf("\nPercentual de Aprovacao: %.1f\n", percentualAprovados);

	return 0;
}

/*
 * ex019.c
 *
 *  Criado em: 25 de jul de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao7-Parte2
 */

#include <stdio.h>

int main(){

	//Declarando uma Matriz de 5 linhas e 4 colunas
	int notas[5][4];
	char ordinal = 176; //Tabela ASCII

	printf(".:: CALCULO DO ALUNO COM MAIOR NOTA FINAL ::.\n");

	//Lendo as informacoes de cada aluno
	for (int i = 0; i < 5; i ++){
		printf("\nDigite o Numero da Matricula do %d%c Aluno: ", i + 1, ordinal);
		fflush(stdout);
		scanf("%d", &notas[i][0]);

		printf("Digite a Media das provas do %d%c Aluno: ", i + 1, ordinal);
		fflush(stdout);
		scanf("%d", &notas[i][1]);

		printf("Digite a Media dos trabalhos do %d%c Aluno: ", i + 1, ordinal);
		fflush(stdout);
		scanf("%d", &notas[i][2]);

		printf("================================================\n");
	}

	//Calculando a Nota Final como sendo a soma da Media das Provas e da Media dos trabalhos
	for (int i = 0; i < 5; i ++){
		notas[i][3] = notas[i][1] + notas[i][2];
	}

	//Imprimindo a Matricula do aluno que obteve a maior Nota final
	int maiorNota = notas[0][3];
	int maiorMatricula = notas[0][0];
	for (int i = 1; i < 5; i ++){
		if (notas[i][3] > maiorNota){
			maiorNota = notas[i][3];
			maiorMatricula = notas[i][0];
		}
	}
	printf("\nA Matricula do Aluno com Maior Nota Final e: %d\n", maiorMatricula);

	//Imprimindo a Media Aritmetica das Notas Finais
	int somaNotas = 0;
	for (int i = 0; i < 5; i ++){
		somaNotas += notas[i][3];
	}
	float mediaAritmetica = (float)somaNotas / 5;
	printf("A Media Aritmetica das Notas Finais e: %.2f\n", mediaAritmetica);

	return 0;
}

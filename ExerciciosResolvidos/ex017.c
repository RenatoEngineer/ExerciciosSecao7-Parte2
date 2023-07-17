/*
 * ex017.c
 *
 *  Criado em: 17 de jul de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao7-Parte2
 */

#include <stdio.h>

int main(){

	int notas[10][3];
	int piorNotaProva1 = 0;
	int piorNotaProva2 = 0;
	int piorNotaProva3 = 0;

	// Le notas dos alunos
	for (int i = 0; i < 10; i ++){
		for (int j = 0; j < 3; j ++){
			printf("Digite a Nota do Aluno %d na Prova %d: ", i + 1, j + 1);
			fflush(stdout);
			scanf("%d", &notas[i][j]);
		}
	}

	//Calcula o numero de alunos cuja poir nota foi em cada prova
	for (int i = 0; i < 10; i ++){
		if (notas [i][0] < notas [i][1] && notas[i][0] < notas[i][2]){
			piorNotaProva1++;
		} else if (notas[i][1] < notas[i][0] && notas[i][1] < notas[i][2]){
			piorNotaProva2++;
		} else if (notas[i][2] < notas[i][0] && notas[i][2] < notas[i][1]){
			piorNotaProva3++;
		}
	}

	printf("\nO Numero de Alunos cuja pior nota foi na prova 1 e: %d\n", piorNotaProva1);
	printf("O Numero de Alunos cuja pior nota foi na prova 2 e: %d\n", piorNotaProva2);
	printf("O Numero de Alunos cuja pior nota foi na prova 3 e: %d\n", piorNotaProva3);

	return 0;
}

/*
 * ex005.c
 *
 *  Criado em: 24 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao7-Parte2
 */

#include <stdio.h>

int main(){

	int matriz[5][5];
	int valorX;
	int encontrado = 0;		  // Verifica se o Valor foi encontrado
	int linhaEncontrado;
	int colunaEncontrado;
	int contador = 0; 	   //Conta os Numeros Digitados
	char ordinal = 176;   // Tabela ASCII

	// Leitura da Matriz
	for (int i = 0; i < 5; i ++){
		for (int j = 0; j < 5; j ++){
			printf("Digite o %d%c Valor da Matriz 5x5: ",contador + 1, ordinal);
			fflush(stdout);
			scanf("%d", &matriz[i][j]);
			contador ++;
		}
	}

	// Leitura do Valor X
	printf("\nDigite o Valor a ser buscado na Matriz: ");
	fflush(stdout);
	scanf("%d", &valorX);

	// Busca do Valor X na Matriz
	for (int i = 0; i < 5; i ++){
		for (int j = 0; j < 5; j ++){
			if (matriz[i][j] == valorX){
				encontrado = 1;
				linhaEncontrado = i;
				colunaEncontrado = j;
				break; //Valor encontrado, encerra a busca
			}
		}
		if (encontrado)
			break; //Valor encontrado, encerra a busca
	}

	//Exibindo a Matriz
	printf("\nMatriz Resultante:\n");
	for (int i = 0; i < 5; i ++){
		for (int j = 0; j < 5; j ++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

	// Exibindo o Resultado
	if (encontrado){
		printf("\nO Valor %d foi encontrado na linha %d e coluna %d.", valorX, linhaEncontrado + 1, colunaEncontrado + 1);
	} else {
		printf("\nO Valor %d não foi encontrado na Matriz!!!", valorX);
	}

	return 0;
}

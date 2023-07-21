/*
 * ex018.c
 *
 *  Criado em: 21 de jul de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao7-Parte2
 */

#include <stdio.h>

int main() {
  int matriz[3][3];
  int somaColunas[3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Digite o elemento da matriz na linha %d e coluna %d: ", i + 1, j + 1);
      fflush(stdout);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("\nA matriz digitada é: \n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d	", matriz[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < 3; i++) {
    somaColunas[i] = matriz[0][i] + matriz[1][i] + matriz[2][i];
  }

  printf("\nA soma das colunas da matriz é: \n");
  for (int i = 0; i < 3; i++) {
    printf("%d	", somaColunas[i]);
  }

  printf("\n");

  return 0;
}


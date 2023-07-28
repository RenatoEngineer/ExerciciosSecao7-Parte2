# .:: Exercicios Seção 7 - Parte 2 ::.

#### 1- Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.

[Resposta](./ExerciciosResolvidos/ex001.c)

#### 2- Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.

[Resposta](./ExerciciosResolvidos/ex002.c)

#### 3- Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da coluna de cada elemento. Em seguida, imprima na tela a matriz.

[Resposta](./ExerciciosResolvidos/ex003.c)

#### 4- Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.

[Resposta](./ExerciciosResolvidos/ex004.c)

#### 5- Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma busca desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de "não encontrado".

[Resposta](./ExerciciosResolvidos/ex005.c)

#### 6- Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas.

[Resposta](./ExerciciosResolvidos/ex006.c)

#### 7- Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos são da forma:
**<p>𝐴[𝑖][𝑗]=2𝑖+7𝑗−2 𝑠𝑒 𝑖<𝑗;</p>**
**<p>𝐴[𝑖][𝑗]=3𝑖2−1 𝑠𝑒 𝑖=𝑗;</p>**
**<p>𝐴[𝑖][𝑗]=4𝑖3−5𝑗2+1 𝑠𝑒 𝑖>𝑗.</p>**

[Resposta](./ExerciciosResolvidos/ex007.c)

#### 8- Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acima da diagonal principal.

[Resposta](./ExerciciosResolvidos/ex008.c)

#### 9- Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão abaixo da diagonal principal.

[Resposta](./ExerciciosResolvidos/ex009.c)

#### 10- Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na diagonal principal.

[Resposta](./ExerciciosResolvidos/ex010.c)

#### 11- Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na diagonal secundária.

[Resposta](./ExerciciosResolvidos/ex011.c)

#### 12- Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.

[Resposta](./ExerciciosResolvidos/ex012.c)

#### 13- Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos acima da diagonal principal. Imprima a matriz original e a matriz transformada.

[Resposta](./ExerciciosResolvidos/ex013.c)

#### 14- Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de modo a não ter números repetidos dentro das cartelas. O programa deve exibir na tela a cartela gerada.

[Resposta](./ExerciciosResolvidos/ex014.c)

#### 15- Leia uma matriz 5 x 10 que se refere respostas de 10 questões de múltipla escolha, referentes a 5 alunos. Leia também um vetor de 10 posições contendo o gabarito de respostas que podem ser a, b, c ou d. Seu programa deverá comparar as respostas de cada candidato com o gabarito e emitir um vetor denominado resultado, contendo a pontuação correspondente a cada aluno.

[Resposta](./ExerciciosResolvidos/ex015.c)

#### 16- Faça um programa para corrigir uma prova com 10 questões de múltipla escolha (a, b, c, d ou e), em uma turma com 3 alunos. Cada questão vale 1 ponto. Leia o gabarito, e para cada aluno leia sua matricula (número inteiro) e suas respostas. Calcule e escreva: Para cada aluno, escreva sua matrícula, suas respostas, e sua nota. O percentual de aprovação, assumindo média 7.0.

[Resposta](./ExerciciosResolvidos/ex016.c)

#### 17- Leia uma matriz 10 x 3 com as notas de 10 alunos em 3 provas. Em seguida, escreva o número de alunos cuja pior nota foi na prova 1, o número de alunos cuja pior nota foi na prova 2, e o número de alunos cuja pior nota foi na prova 3. Em caso de empate das piores notas de um aluno, o critério de desempate é arbitrário, mas o aluno deve ser contabilizado apenas uma vez.

[Resposta](./ExerciciosResolvidos/ex017.c)

#### 18- Faça um programa que permita ao usuário entrar com uma matriz de 3 x 3 números inteiros. Em seguida, gere um array unidimensional pela soma dos números de cada coluna da matriz e mostrar na tela esse array. Por exemplo, a matriz:

**<p>5 −8 10</p>**
**<p>1 2 15</p>**
**<p>25 10 7</p>**
**<p>Vai gerar um vetor, onde cada posição é a soma das colunas da matriz. A primeira posição será 5 + 1 + 25, e assim por diante:</p>**
**<p>31 4 3</p>**

[Resposta](./ExerciciosResolvidos/ex018.c)

#### 19- Faça um programa que leia uma matriz de 5 linhas e 4 colunas contendo as seguintes informações sobre alunos de uma disciplina, sendo todas as informações do tipo inteiro:
**<p>• Primeira coluna: número de matrícula (use um inteiro)</p>**
**<p>• Segunda coluna: média das provas</p>**
**<p>• Terceira coluna: média dos trabalhos</p>**
**<p>• Quarta coluna: nota final</p>**

**<p>Elabore um programa que:</p>**
**<p>(a) Leia as três primeiras informações de cada aluno</p>**
**<p>(b) Calcule a nota final como sendo a soma da média das provas e da média dos trabalhos</p>**
**<p>(c) Imprima a matrícula do aluno que obteve a maior nota final (assuma que só existe uma maior nota)</p>**
**<p>(d) Imprima a média aritmética das notas finais</p>**

[Resposta](./ExerciciosResolvidos/ex019.c)

#### 20- Faça programa que leia uma matriz 3 x 6 com valores reais.
**<p>(a) Imprima a soma de todos os elementos das colunas ímpares.</p>**
**<p>(b) Imprima a média aritmética dos elementos da segunda e quarta colunas.</p>**
**<p>(c) Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2.</p>**
**<p>(d) Imprima a matriz modificada.</p>**

[Resposta](./ExerciciosResolvidos/ex020.c)

#### 21- Faça um programa que leia duas matrizes 2 x 2 com valores reais. Ofereça ao usuário um menu de opções:

**<p>(a) somar as duas matrizes</p>**
**<p>(b) subtrair a primeira matriz da segunda</p>**
**<p>(c) adicionar uma constante às duas matrizes</p>**
**<p>(d) imprimir as matrizes</p>**

**<p>Nas duas primeiras opções uma terceira matriz 3 x 3 deve ser criada. Na terceira opção o valor da constante deve ser lido e o resultado da adição da constante deve ser armazenado na própria matriz.</p>**

[Resposta](./ExerciciosResolvidos/ex021.c)

#### 22- Faça um programa que leia duas matrizes A e B de tamanho 3 x 3 e calcule 𝐶=𝐴∗𝐵.

[Resposta](./ExerciciosResolvidos/ex022.c)

#### 23- Faça um programa que leia uma matriz A de tamanho 3 x 3 e calcule 𝐵=𝐴².

[Resposta](./ExerciciosResolvidos/ex023.c)

#### 24- Na matriz de 20 x 20 abaixo, quatro números ao longo de uma linha diagonal foram marcadas em negrito. O produto desses números é 26 * 63 * 78 * 14 = 1788696.

**<p>08 02 22 97 38 15 00 40 00 75 04 05 07 78 52 12 50 77 91 08</p>**
**<p>49 49 99 40 17 81 18 57 60 87 17 40 98 43 69 48 04 56 62 00</p>**
**<p>81 49 31 73 55 79 14 29 93 71 40 67 53 88 30 03 49 13 36 65</p>**
**<p>52 70 95 23 04 60 11 42 69 24 68 56 01 32 56 71 37 02 36 91</p>**
**<p>22 31 16 71 51 67 63 89 41 92 36 54 22 40 40 28 66 33 13 80</p>**
**<p>24 47 32 60 99 03 45 02 44 75 33 53 78 36 84 20 35 17 12 50</p>**
**<p>32 98 81 28 64 23 67 10 26 38 40 67 59 54 70 66 18 38 64 70</p>**
**<p>67 26 20 68 02 62 12 20 95 63 94 39 63 08 40 91 66 49 94 21</p>**
**<p>24 55 58 05 66 73 99 26 97 17 78 78 96 83 14 88 34 89 63 72</p>**
**<p>21 36 23 09 75 00 76 44 20 45 35 14 00 61 33 97 34 31 33 95</p>**
**<p>78 17 53 28 22 75 31 67 15 94 03 80 04 62 16 14 09 53 56 92</p>**
**<p>16 39 05 42 96 35 31 47 55 58 88 24 00 17 54 24 36 29 85 57</p>**
**<p>86 56 00 48 35 71 89 07 05 44 44 37 44 60 21 58 51 54 17 58</p>**
**<p>19 80 81 68 05 94 47 69 28 73 92 13 86 52 17 77 04 89 55 40</p>**
**<p>04 52 08 83 97 35 99 16 07 97 57 32 16 26 26 79 33 27 98 66</p>**
**<p>88 36 68 87 57 62 20 72 03 46 33 67 46 55 12 32 63 93 53 69</p>**
**<p>04 42 16 73 38 25 39 11 24 94 72 18 08 46 29 32 40 62 76 36</p>**
**<p>20 69 36 41 72 30 23 88 34 62 99 69 82 67 59 85 74 04 36 16</p>**
**<p>20 73 35 29 78 31 90 01 74 31 49 71 48 86 81 16 23 57 05 54</p>**
**<p>01 70 54 71 83 51 54 69 16 92 33 48 61 43 52 01 89 19 67 48</p>**

**<p>Qual é o maior produto de quatro números adjacentes em qualquer direção (cima, baixo, esquerda, direita, ou na diagonal) na matriz de 20 x 20?</p>**

[Resposta](./ExerciciosResolvidos/ex024.c)

#### 25- Faça um programa para determinar a próxima jogada em um Jogo da Velha. Assumir que o tabuleiro é representado por uma matriz de 3 x 3, onde cada posição representa uma das casas do tabuleiro. A matriz pode conter os seguintes valores -1, 0, 1 representando respectivamente uma casa contendo uma peça minha (-1), uma casa vazia do tabuleiro (0), e uma casa contendo uma peça do meu oponente (1).

**<p>-1  1  1</p>**
**<p>-1 -1  0</p>**
**<p> 0  1  0</p>**

[Resposta](./ExerciciosResolvidos/ex025.c)


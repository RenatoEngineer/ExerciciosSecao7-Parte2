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


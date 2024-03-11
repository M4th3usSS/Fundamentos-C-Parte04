#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*  Aula 98 - Vetores (Arrays unidimensionais homog�nios)

    Estrutura de dados homog�nia - Vetores (arrays unidimensionais).
    Um vetor � um conjunto de elementos do MESMO TIPO armazenados de forma sequencial na mem�ria.
    Um �ndice � usado para acessar cada elemento do vetor.
*/

void aula_99()
{

    /*
        Criando um vetor do tipo inteiro, char e float:
    */

    /*
        Primeira forma.:
        Criando vetores definindo tamanho sem atribui��o de valores.
    */
    // int num1[10];

    /*
        Segunda forma.:
        Criando vetores sem definir tamanho com atribui��o de valores
        OBS.: O tamanho do vetor se ajustar� para a quantidade de elementos do conjunto sendo atribu�do.
    */
    // int num2[] = {1, 5, 9, 15, 43};

    /*
        Terceira forma.:
        Criando vetores definindo tamanho com atribui��o de valores
        OBS.: Se faltar elementos no conjunto sendo atribu�do a um vetor, a linguagem ir� atribuir 0 para completar o
        vetor;

        OBS.: Se a quantidade de elementos do conjunto sendo atribu�do a um vetor for maior que o tamanho do vetor,
        os elementos sobressalentes do conjunto ser�o desconsiderados na atriui��o.
    */
    // int num3[5] = {4, 6 , 5};
    // int num4[5] = {1, 2, 3, 4, 5, 6};

    /*
        Quarta forma.:
        Criando vetor com inicializa��o de valor padr�o
    */
    // int num5[5] = {0}; // Todos os elementos do vetor sendo inicializados com 0;

    /*
        Vetor do tipo char
    */
    // char letras[100];
    // char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

    /*
        Vetor do tipo float
    */
    // float notas[3] = {7.5 , 8.3, 9.5};
}

void aula_100()
{

    /*
        Como imprimir o conteudo de um vetor
    */

    int num2[] = {1, 5, 9, 15, 43};
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    float notas[3] = {7.5, 8.3, 9.5};

    // Iterando no vetor de inteiros - num2
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", num2[i]);
    }
    printf("\n");

    // Iterando no vetor de char - vogais
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", vogais[i]);
    }
    printf("\n");

    // Iterando no vetor de float - notas
    for (int i = 0; i < 3; i++)
    {
        printf("%.1f ", notas[i]);
    }
    printf("\n");
}

void aula_101()
{

    /*
        Como ler um vetor
    */

    int num1[10] = {0};

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o elemento da posi��o %d: ", i);
        scanf("%d", &num1[i]);
    }
    printf("\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", num1[i]);
    }
    printf("\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Elemento da posi��o %d = %d\n", i, num1[i]);
    }
    printf("\n\n");
}

void aula_102()
{

    /*
        Como alterar o conte�do de um vetor:
    */

    int num1[10] = {0};

    // Entrada dos valores de cada elemento do vetor.:
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o elemento da posi��o %d: ", i);
        scanf("%d", &num1[i]);
    }
    printf("\n\n");

    // Impress�o dos valores de cada elemento do vetor.:
    for (int i = 0; i < 10; i++)
    {
        printf("Elemento da posi��o %d = %d\n", i, num1[i]);
    }
    printf("\n\n");

    // Alterando o valor de cada elemento do vetor (Multiplicando por 3).:
    for (int i = 0; i < 10; i++)
    {
        num1[i] *= 3;
    }

    // Impress�o dos novos valores de cada elemento do vetor.:
    for (int i = 0; i < 10; i++)
    {
        printf("Elemento da posi��o %d = %d\n", i, num1[i]);
    }
    printf("\n\n");
}

void aula_103()
{
    /*
        Como gerar n�meros aleat�rios com as fuin��es rand e srand
    */

    int num1[10] = {0};

    // OBS.: inclua o <time.h> para usar a fun��o time
    srand(time(NULL));

    // Entrada dos valores de cada elemento do vetor.:
    for (int i = 0; i < 10; i++)
        num1[i] = rand();
    printf("\n\n");

    // Impress�o dos valores de cada elemento do vetor.:
    for (int i = 0; i < 10; i++)
        printf("Elemento da posi��o %d = %d\n", i, num1[i]);
    printf("\n\n");
}

void aula_104()
{
    /*
        Como gerar n�meros aleat�rios com as fuin��es rand e srand - intervalo determinado
        Sorteando n�meros de 0 a 10
    */

    int num1[50] = {0};

    // OBS.: inclua o <time.h> para usar a fun��o time
    srand(time(NULL));

    // Entrada dos valores de cada elemento do vetor.:
    for (int i = 0; i < 50; i++)
        num1[i] = rand() % 11;
    printf("\n\n");

    // Impress�o dos valores de cada elemento do vetor.:
    for (int i = 0; i < 50; i++)
        printf("Elemento da posi��o %02d = %2d\n", i, num1[i]);
    printf("\n\n");
}

/* Aula 105 - Matrizes (Arrays bidimensionais homog�nios)

    Uma matriz � um conjunto de elementos do mesmo tipo organizado de forma bidimensional, ou seja, possui dois �ndices.

*/

void aula_106()
{

    /*
        Como criar uma matriz
    */

    // int matriz[n�mero_de_linhas][n�mero_de_colunas]

    //int mat1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    /*
           c1  c2  c3
     l1    1   2   3
     l2    4   5   6
     l3    7   8   9
    */

    //int mat2[][3] = {1, 2, 3, 4, 5, 6};
    /*
          c1  c2  c3
    l1    1   2   3
    l2    4   5   6
   */

    //int mat3[][3] = {1, 2, 3, 4, 5, 6, 7};
    /*
          c1  c2  c3
    l1    1   2   3
    l2    4   5   6
    l3    7   0   0
   */

    //int mat4[3][3] = {0};
    /*
          c1  c2  c3
    l1    0   0   0
    l2    0   0   0
    l3    0   0   0
   */   

    //float mat5[4][5] = {0};
    /*
          c1    c2    c3    c4
    l1   0.0   0.0   0.0   0.0
    l2   0.0   0.0   0.0   0.0    
    l3   0.0   0.0   0.0   0.0    
    l4   0.0   0.0   0.0   0.0    
    l5   0.0   0.0   0.0   0.0    
   */  

    //har mat6[4][4];

}

void aula_107()
{
    /*
        Como imprimir o conte�do de uma matriz?
    */

    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    char mat2[3][4] = {{'a', 'b', 'c', 'd'}, {'e', 'f', 'g', 'h'}, {'i', 'j', 'k', 'l'}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", mat1[i][j]);

        printf("\n");
    }
        
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%c ", mat2[i][j]);
        
        printf("\n");
    } 
   
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    aula_107();
    return 0;
}
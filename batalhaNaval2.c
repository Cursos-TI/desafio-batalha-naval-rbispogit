#include <stdio.h>
// Definindo constantes do tamanho de linhas e colunas
#define LINHAS 10
#define COLUNAS 10
// Definindo o tamnho do navio
#define TAMANHO 3

// Batalha naval nível aventureiro
int main()
{
    int tabuleiro[LINHAS][COLUNAS];
    int navio1[TAMANHO], navio2[TAMANHO];
    int navio3[TAMANHO], navio4[TAMANHO];

    // Atribui zero a todas as posições do tabuleiro
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            tabuleiro[i][j] = 0;
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Atribui três ao tamanho dos navios
    for (int i = 0; i < TAMANHO; i++)
    {
        navio1[i], navio2[i] = TAMANHO;
        navio3[i], navio4[i] = TAMANHO;
    }

    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j > TAMANHO; j++)
        {
            tabuleiro[i][0] = navio1[i];
            printf("%d", tabuleiro[i][j]);
        }
        printf("\n");
    }


    printf("\n\n");


}
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
        }
    }

    // Atribui três ao tamanho dos navios
    for (int i = 0; i < TAMANHO; i++)
    {
        navio1[i] = TAMANHO;
        navio2[i] = TAMANHO;
        navio3[i] = TAMANHO;
        navio4[i] = TAMANHO;
    }

    // Posiciona o navio1 na vertical
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j == 0; j++)
        {
            tabuleiro[i][j] = navio1[i];
        }
    }

    // Posiciona o navio2 na horizontal
    for (int i = 0; i < 3; i++)
    {
        for (int j = 9; j > 6; j--)
        {
            tabuleiro[9][j] = navio2[0];
        }
    }

    // Posiciona o navio3 na diagonal
    for (int i = 9; i >= 0; i--)
    {
        for (int j = 0; j < 10; j++)
        {   
            if (i == 9 && j == 0 || (i == 8 && j == 1) || (i == 7 && j == 2))
            {
                tabuleiro[i][j] = navio3[0];
            }
        }
    }

    // Posiciona o navio4 na diagonal
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 10; j++)
        {   
            if (i == 1 && j == 4 || (i == 2 && j == 5) || (i == 3 && j == 6))
            {
                tabuleiro[i][j] = navio4[0];
            }
        }
    }

    // Exibe o tabuleiro atualizado
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
// Definindo constantes do tamanho de linhas e colunas
#define LINHAS 10
#define COLUNAS 10
// Definindo o tamanho do navio
#define TAMANHO 3
// Define o ataque
#define ATAQUE 1
// Define o tamanho da matriz de ataque
#define MATRIZ_ATAQUE 5

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

    // Ataque em Cone
    for (int i = 0; i < MATRIZ_ATAQUE; i++) // Matriz 5x5 no canto superior esquerdo
    {
        for (int j = 0; j < MATRIZ_ATAQUE; j++)
        {
            if (i == 0) // Condicionante para acessar a primeira linha
            {
                tabuleiro[i][2] = ATAQUE; // Grava 1 no primeiro índice
            }
            else if (i == 1) // Acessa a segunda linha
            {
                for (int i = 1; i < 4; i++)
                {
                    for (int j = 1; j < 4; j++)
                    {
                        tabuleiro[1][j] = ATAQUE;
                    }
                }
            }
            else if (i == 2) // Acessa a terceira linha
            {
                for (int i = 0; i < 5; i++)
                {
                    for (int j = 0; j < 5; j++)
                    {
                        tabuleiro[2][j] = ATAQUE;
                    }
                }
            }
        }
    }

    // Ataque em Cruz
    for (int i = 9; i > 4; i--) // Matriz 5x5 no canto inferior direito
    {
        for (int j = 9; j > 4; j--)
        {
            if (i == 8) // Acessa a linha 8, que é o centro do ataque
            {
                for (int i = 5; i < 10; i++) 
                {
                    for (int j = 5; j < 10; j++)
                    {
                        tabuleiro[8][j] = 1; // A linha 8 é sempre fixa
                    }
                }
            }
            else if (i == 9) // Acessa a linha 9 e fecha a cruz
            {
                for (int i = 9; i > 6; i--)
                {
                    for (int j = 9; j > 6; j--)
                    {
                        tabuleiro[i][7] = 1; // A coluna 7 é sempre fixa
                    }
                }
            }
        }
    }

    // Ataque em octaedro
    for (int i = 9; i > 4; i--) // Matriz 5x5 no canto inferior esquerdo
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 8)
            {
               tabuleiro[8][1] = 1;
               tabuleiro[8][2] = 1;
               tabuleiro[8][3] = 1;
            }
            else if (i == 9)
            {
                tabuleiro[9][2] = 1;
                tabuleiro[8][2] = 1;
                tabuleiro[7][2] = 1;
            }
        }
    }

    // Exibe o tabuleiro
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
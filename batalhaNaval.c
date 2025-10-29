#include <stdio.h>

int main() {
    // Declaração do tabuleiro 10x10
    int tabuleiro[10][10];
    int i, j; // Removido o '~' após 'j;'

    // 1. Inicializa o tabuleiro com '0' para água (vazio)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Adiciona o **Primeiro Navio (de 3 células)**
    // Posição: (1, 1), (1, 2), (1, 3) - Horizontal
    // Representamos o navio com '1'
    tabuleiro[1][1] = 1;
    tabuleiro[1][2] = 1;
    tabuleiro[1][3] = 1;

    // 3. Adiciona o **Segundo Navio (de 2 células)**
    // Posição: (5, 5), (6, 5) - Vertical
    tabuleiro[5][5] = 1;
    tabuleiro[6][5] = 1;

    // Opcional: Imprime o tabuleiro para verificar (Apenas para teste)
    printf("TABULEIRO BATALHA NAVAL:\n");
    
    printf("  A B C D E F G H I J\n"); // Dois espaços no início para alinhar com o índice da linha
    
    for (i = 0; i < 10; i++) {
        printf("%d ", i); // CORREÇÃO: Adicionado o índice da linha
        for (j = 0; j < 10; j++) {
            // CORREÇÃO: Removida a linha incorreta de printf ('A', 'B', ...)
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
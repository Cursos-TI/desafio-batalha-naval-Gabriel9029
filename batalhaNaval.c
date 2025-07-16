#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int i, j;

    // Matriz 5x5 para Habilidade CONE
    int cone[5][5] = {0};

    // Preenchendo CONE (padrão pirâmide invertida)
    for (i = 0; i < 3; i++) {                // 3 linhas preenchidas
        for (j = 2 - i; j <= 2 + i; j++) {  // colunas centrais se expandem
            cone[i][j] = 1;
        }
    }

    // Matriz 5x5 para Habilidade CRUZ
    int cruz[5][5] = {0};

    // Preenchendo CRUZ (linha e coluna do meio)
    for (i = 0; i < 5; i++) {
        cruz[2][i] = 1; // linha central inteira
        cruz[i][2] = 1; // coluna central inteira
    }

    // Matriz 5x5 para Habilidade OCTAEDRO
    int octaedro[5][5] = {0};

    // Preenchendo OCTAEDRO (losango)
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            // A distância de Manhattan do centro é 2
            if ((i - 2 < 0 ? 2 - i : i - 2) + (j - 2 < 0 ? 2 - j : j - 2) == 2) {
                octaedro[i][j] = 1;
            }
        }
    }

    // Exibindo padrão CONE
    printf("Habilidade CONE:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    // Exibindo padrão CRUZ
    printf("\nHabilidade CRUZ:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    // Exibindo padrão OCTAEDRO
    printf("\nHabilidade OCTAEDRO:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

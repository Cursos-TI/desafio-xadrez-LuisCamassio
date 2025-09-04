#include <stdio.h>

int main(void) {
    // Desafio de Xadrez - Movimentação das Peças
    // Torre, Bispo, Rainha, Cavalo

    printf("Desafio Jogo de Xadrez\n");

    // ------------------ Torre ------------------
    // Torre anda em linha reta (5 casas para a direita)
    int casasTorre = 5;
    printf("\n--- Movimento da Torre ---\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    // ------------------ Bispo ------------------
    // Bispo anda em diagonal (5 casas para cima e direita)
    int casasBispo = 5;
    printf("\n--- Movimento do Bispo ---\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita (%d)\n", i);
        i++;
    }

    // ------------------ Rainha ------------------
    // Rainha pode andar em todas as direções (8 casas para a esquerda)
    int casasRainha = 8;
    printf("\n--- Movimento da Rainha ---\n");
    int j = 1;
    do {
        printf("Esquerda (%d)\n", j);
        j++;
    } while (j <= casasRainha);

    // ------------------ Cavalo ------------------
    // Cavalo anda em "L" → 2 casas para baixo + 1 para esquerda
    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("\n--- Movimento do Cavalo ---\n");

    for (int k = 1; k <= casasBaixo; k++) {  // loop para as casas para baixo
        int cont = 0;
        while (cont < 1) { // while interno imprime o movimento
            printf("Baixo (%d)\n", k);
            cont++;
        }
    }

    // movimento final para esquerda
    for (int m = 1; m <= casasEsquerda; m++) {
        printf("Esquerda (%d)\n", m);
    }

    return 0;
}



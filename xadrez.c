#include <stdio.h>

int main() {
    // Número de casas para cada peça se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ------------------ Torre ------------------
    // A Torre anda em linha reta. Vamos simular 5 casas para a direita.
    printf("--- Movimento da Torre ---\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i); // cada passo da torre
    }

    // ------------------ Bispo ------------------
    // O Bispo anda em diagonal. Vamos simular 5 casas para cima e à direita.
    printf("\n--- Movimento do Bispo ---\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita (%d)\n", i); // cada passo do bispo
        i++;
    }

    // ------------------ Rainha ------------------
    // A Rainha pode andar em todas as direções. Vamos simular 8 casas para a esquerda.
    printf("\n--- Movimento da Rainha ---\n");
    int j = 1;
    do {
        printf("Esquerda (%d)\n", j); // cada passo da rainha
        j++;
    } while (j <= casasRainha);

    return 0;
}

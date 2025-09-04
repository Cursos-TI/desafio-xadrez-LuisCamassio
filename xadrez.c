#include <stdio.h>

// ---------------- Funções Recursivas ----------------

// Torre anda em linha reta (direita)
void moverTorre(int casas, int passo) {
    if (casas == 0) return; // condição de parada
    printf("Direita (%d)\n", passo);
    moverTorre(casas - 1, passo + 1); // chamada recursiva
}

// Bispo anda em diagonal (cima e direita)
void moverBispoRecursivo(int casas, int passo) {
    if (casas == 0) return;
    printf("Cima, Direita (%d)\n", passo);
    moverBispoRecursivo(casas - 1, passo + 1);
}

// Rainha anda em linha reta (esquerda)
void moverRainha(int casas, int passo) {
    if (casas == 0) return;
    printf("Esquerda (%d)\n", passo);
    moverRainha(casas - 1, passo + 1);
}

int main(void) {
    printf("Desafio Jogo de Xadrez - Nivel Mestre\n");

    // ---------------- Torre ----------------
    int casasTorre = 5;
    printf("\n--- Movimento da Torre (Recursao) ---\n");
    moverTorre(casasTorre, 1);

    // ---------------- Bispo ----------------
    int casasBispo = 5;
    printf("\n--- Movimento do Bispo (Recursao) ---\n");
    moverBispoRecursivo(casasBispo, 1);

    // Bispo também com loops aninhados (vertical + horizontal)
    printf("\n--- Movimento do Bispo (Loops Aninhados) ---\n");
    for (int v = 1; v <= casasBispo; v++) {   // movimento vertical
        for (int h = 1; h <= 1; h++) {        // movimento horizontal (1 passo por vez)
            printf("Cima, Direita (%d)\n", v);
        }
    }

    // ---------------- Rainha ----------------
    int casasRainha = 8;
    printf("\n--- Movimento da Rainha (Recursao) ---\n");
    moverRainha(casasRainha, 1);

    // ---------------- Cavalo ----------------
    // Cavalo em L → 2 para cima + 1 para a direita
    printf("\n--- Movimento do Cavalo (Loops Complexos) ---\n");
    int movimentos = 0;

    // loop externo controla direção vertical
    for (int v = 1; v <= 3; v++) {
        // loop interno controla direção horizontal
        for (int h = 1; h <= 2; h++) {
            movimentos++;

            // ignorar movimentos extras (usando continue/break)
            if (movimentos > 3) {
                break; // já temos 2 cima + 1 direita
            }

            if (v <= 2 && h == 1) {
                printf("Cima (%d)\n", v);
            } else if (v == 3 && h == 2) {
                printf("Direita (1)\n");
            } else {
                continue; // pula iteração inválida
            }
        }
    }

    return 0;
}


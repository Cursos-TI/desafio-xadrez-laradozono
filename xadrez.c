#include <stdio.h>

int main() {
    // Simulação dos movimentos das peças de xadrez
    // Peças: Torre, Bispo e Rainha

    // ---------- TORRE ----------
    // A Torre move-se em linha reta (horizontal ou vertical).
    // Simulação de 5 casas para a direita usando o laço "for".
    int i; // variável de controle do laço
    int casasTorre = 5;

    printf("=== Movimento da Torre ===\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);  // Mostra o número da casa percorrida
    }

    printf("\n");

    // ---------- BISPO ----------
    // O Bispo move-se nas diagonais.
    // Simulação: 5 casas na diagonal para cima e à direita usando o laço "while".
    int j = 1;
    int casasBispo = 5;

    printf("=== Movimento do Bispo ===\n");
    while (j <= casasBispo) {
        printf("Cima, Direita (%d)\n", j);
        j++;
    }

    printf("\n");

    // ---------- RAINHA ----------
    // A Rainha pode mover-se em todas as direções.
    // Simulação: 8 casas para a esquerda usando o laço "do-while".
    int k = 1;
    int casasRainha = 8;

    printf("=== Movimento da Rainha ===\n");
    do {
        printf("Esquerda (%d)\n", k);
        k++;
    } while (k <= casasRainha);

    printf("\n");

    // Finalização do programa
    printf("Simulação concluída com sucesso!\n");

    return 0;
}

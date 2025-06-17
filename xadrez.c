#include <stdio.h>

int main() {
    // Variáveis para controlar o número de casas de cada peça
    int casas_torre = 5;        // Torre move 5 casas para a direita
    int casas_bispo = 5;        // Bispo move 5 casas na diagonal (cima-direita)
    int casas_rainha = 8;       // Rainha move 8 casas para a esquerda
    
    // Variáveis de controle para os loops
    int contador_torre;
    int contador_bispo = 0;
    int contador_rainha = 0;

    printf("=== SIMULAÇÃO DE MOVIMENTAÇÃO DAS PEÇAS DE XADREZ ===\n\n");

    // ========== MOVIMENTO DA TORRE ==========
    // A Torre move-se em linha reta (horizontal ou vertical)
    // Movimento: 5 casas para a direita
    
    printf("TORRE:\n");
    printf("Movimentando 5 casas para a direita\n");
    
    for (contador_torre = 1; contador_torre <= casas_torre; contador_torre++) {
        printf("Direita\n");
    }
    
    printf("Torre finalizou o movimento!\n\n");

    // ========== MOVIMENTO DO BISPO ==========
    // O Bispo move-se na diagonal
    // Movimento: 5 casas na diagonal
    
    printf("BISPO:\n");
    printf("Movimentando 5 casas na diagonal\n");
    
    while (contador_bispo < casas_bispo) {
        printf("Cima\n Direita\n");
        contador_bispo++;
    }
    
    printf("Bispo finalizou o movimento!\n\n");

    // ========== MOVIMENTO DA RAINHA ==========
    // A Rainha move-se em todas as direções
    // Movimento: 8 casas para a esquerda
    
    printf("RAINHA:\n");
    printf("Movimentando 8 casas para a esquerda\n");
    
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < casas_rainha);
    
    printf("Rainha finalizou o movimento!\n\n");


    printf("Todas as peças se movimentaram!\n");

    return 0;
}
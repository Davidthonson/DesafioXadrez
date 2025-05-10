#include <stdio.h>

// Constantes para facilitar a escrita do código
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8

// Função recursiva para mover o Bispo (usada no Nível Mestre)
void moverBispoRecursivo(int casas) {
    // Caso base: quando não há mais casas para mover
    if (casas <= 0) {
        return;
    }
    
    // Movimento na diagonal superior direita
    printf("Diagonal (Cima e Direita) - Casa %d\n", MOVIMENTO_BISPO - casas + 1);
    
    // Chamada recursiva para a próxima casa
    moverBispoRecursivo(casas - 1);
}

// Função recursiva para mover a torre (usada no nível mestre)
void moverTorreRecursiva(int casas) {
    // Caso base: quando não há mais casas para mover
    if (casas <= 0) {
        return;
    }
    
    // Movimento para a direita
    printf("Direita - Casa %d\n", MOVIMENTO_TORRE - casas + 1);
    
    // Chamada recursiva para a próxima casa
    moverTorreRecursiva(casas - 1);
}

// Função recursiva para mover a rainha (usada no nível mestre)
void moverRainhaRecursiva(int casas) {
    // Caso base: quando não há mais casas para mover
    if (casas <= 0) {
        return;
    }
    
    // Movimento para a esquerda
    printf("Esquerda - Casa %d\n", MOVIMENTO_RAINHA - casas + 1);
    
    // Chamada recursiva para a próxima casa
    moverRainhaRecursiva(casas - 1);
}

int main() {
    int i, j;
    
    printf("\n===== DESAFIO DE XADREZ - MATECHECK =====\n\n");
    
    // ===== NÍVEL NOVATO =====
    printf("===== NÍVEL NOVATO =====\n\n");
    
    // Movimentação do bispo - 5 casas na diagonal superior direita
    printf("Movimentação do Bispo (5 casas na diagonal superior direita):\n");
    for (i = 1; i <= MOVIMENTO_BISPO; i++) {
        printf("Diagonal (Cima e Direita) - Casa %d\n", i);
    }
    printf("\n");
    
    // Movimentação da torre - 5 casas para a direita
    printf("Movimentação da Torre (5 casas para a direita):\n");
    i = 1;
    while (i <= MOVIMENTO_TORRE) {
        printf("Direita - Casa %d\n", i);
        i++;
    }
    printf("\n");
    
    // Movimentação da rainha - 8 casas para a esquerda
    printf("Movimentação da Rainha (8 casas para a esquerda):\n");
    i = 1;
    do {
        printf("Esquerda - Casa %d\n", i);
        i++;
    } while (i <= MOVIMENTO_RAINHA);
    printf("\n");
    
    // ===== NÍVEL AVENTUREIRO =====
    printf("===== NÍVEL AVENTUREIRO =====\n\n");
    
    // Movimentação do Cavalo - em L para baixo e para a esquerda
    printf("Movimentação do Cavalo (em L para baixo e para a esquerda):\n");
    
    // Loop externo (for) para controlar o movimento para baixo
    for (i = 1; i <= 2; i++) {
        printf("Baixo - Passo %d\n", i);
        
        // Quando completar o movimento para baixo, inicia o movimento para a esquerda
        if (i == 2) {
            // Loop interno (while) para controlar o movimento para a esquerda
            j = 1;
            while (j <= 1) {
                printf("Esquerda - Passo %d\n", j);
                j++;
            }
        }
    }
    printf("Movimento em L completo!\n\n");
    
    // ===== NÍVEL MESTRE =====
    printf("===== NÍVEL MESTRE =====\n\n");
    
    // Movimentação do Bispo usando função recursiva
    printf("Movimentação do Bispo (recursivo - 5 casas na diagonal superior direita):\n");
    moverBispoRecursivo(MOVIMENTO_BISPO);
    printf("\n");
    
    // Movimentação da Torre usando função recursiva
    printf("Movimentação da Torre (recursivo - 5 casas para a direita):\n");
    moverTorreRecursiva(MOVIMENTO_TORRE);
    printf("\n");
    
    // Movimentação da Rainha usando função recursiva
    printf("Movimentação da Rainha (recursivo - 8 casas para a esquerda):\n");
    moverRainhaRecursiva(MOVIMENTO_RAINHA);
    printf("\n");
    
    // Movimentação do Cavalo com loops complexos e break/continue
    printf("Movimentação do Cavalo (loops complexos - em L para cima e para a direita):\n");
    
    // Loop com múltiplas variáveis e condições
    for (i = 1, j = 0; i <= 3 && j < 2; i++) {
        // Pula a segunda iteração
        if (i == 2) {
            continue;
        }
        
        // Movimento para cima
        printf("Cima - Passo %d\n", i);
        
        // Quando completar o movimento para cima, inicia o movimento para a direita
        if (i == 3) {
            j++;
            printf("Direita - Passo %d\n", j);
            
            // Encerra o loop após o movimento para a direita
            break;
        }
    }
    printf("Movimento em L completo!\n");
    
    return 0;
}

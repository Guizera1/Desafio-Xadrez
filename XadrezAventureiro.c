#include <stdio.h>

int main() {
    // Torre usando for para se mover 5 vezes para a direita
    for(int movimentoTorre = 0; movimentoTorre < 5; movimentoTorre++) {
        printf("Torre: Direita\n");
    }

    printf("\n");

    // Bispo usando while para se mover 5 vezes na diagonal
    int movimentoBispo = 0;
    while(movimentoBispo < 5) {
        printf("Bispo: Cima, Direita\n");
        movimentoBispo++;
    }

    printf("\n");

    // Rainha usando do while para se mover 8 vezes para esquerda
    int movimentoRainha = 0;
    do {
        printf("Rainha: Esquerda\n");
        movimentoRainha++;
    } while (movimentoRainha < 8);

    printf("\n");

    // Cavalo usando for para se mover em "L" 3 vezes
    int movimentoCavalo = 1;

    while (movimentoCavalo > 0) {
        for (int i = 0; i < 2; i++) {
            printf("Cavalo: Baixo\n");
        }
        printf("Cavalo: Esquerda\n");
        movimentoCavalo--;
    }

    return 0;
}

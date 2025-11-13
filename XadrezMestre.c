#include <stdio.h>

void movimentoTorre(int moverTorre) {
    if (moverTorre > 0) {
        printf("Torre: Direita\n");
        movimentoTorre(moverTorre - 1);
    }
}

void movimentoBispo(int casas) {
    if (casas <= 0) return;

    for (int vertical = 0; vertical < casas; vertical++) {
        for (int horizontal = 0; horizontal < casas; horizontal++) {
            printf("Bispo: Cima\n");
            printf("Bispo: Direita\n");
        }
    }
    movimentoBispo(casas - 1);
}

void movimentoRainha(int moverRainha) {
    if (moverRainha > 0) {
        printf("Rainha: Esquerda\n");
        movimentoRainha(moverRainha - 1);
    }
}

void movimentoCavalo(int movimentos) {
    int vertical = 0, horizontal;
    while (vertical < movimentos) {
        for (horizontal = 0; horizontal < 3; horizontal++) {
            if (horizontal == 2) {
                printf("Cavalo: Direita\n");
            } else {
                printf("Cavalo: Cima\n");
            }
            if (horizontal == 1) continue;
            if (vertical == movimentos - 1 && horizontal == 2) break;
        }
        vertical++;
    }
}

int main() {
    movimentoTorre(5);
    printf("\n");
    movimentoBispo(5);
    printf("\n");
    movimentoRainha(8);
    printf("\n");
    movimentoCavalo(3);

    return 0;
}

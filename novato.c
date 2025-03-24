#include <stdio.h>

int main() {
    int torre;
    int bispo;
    int rainha;
    int b = 1;
    int r = 1;
    int t = 1;


    // movimentação da torre

    printf("Movimentação da torre\n");
    while (t <= 5) {
    printf("Torre moveu-se para a Direita\n");
    t++;
    
    }
     // movimentação do bispo
     printf("Movimentação do bispo\n");
     do {
        printf("Bispo se moveu para cima, direita\n");
        b++; //incremento
    } while (b <= 5);
        // movimentação da rainha

        printf("movimentação da rainha");

        for (int r = 0; r <= 8; r++) {
            printf("Rainha se moveu para a Esquerda\n"); // Imprimindo a movimentação da rainha
        }
    












}
#include <stdio.h>

// Torre
// Mover torre 5 casas para a direita
void recursivo(int numero) {
    if (numero > 0) {
        printf("Direita \n");   // Imprime a direção
        recursivo(numero - 1);
    }
}

// Rainha                  
// Mover rainha 8 casas para a esquerda
void recursivo2(int numero) {
    if (numero > 0) {
        printf("Esquerda\n");   // Imprime a direção
        recursivo2(numero - 1);
    }
}

// Bispo
// Mover bispo 5 casa na diagonal
void recursivo3(int numero) {
    int i, j;
    if (numero > 0) {
        for (i = 1; i <= 1; i++) {
            printf("Cima, ");   // Imprime a direção

            for (j = 1; j <= 1; j++) {
                printf("Direita\n");    // Imprime a direção
            }
        }
        recursivo3(numero - 1);
    }
}

int main() {

    int torre = 5, bispo = 5, rainha = 8;   // Quantidade de movimentos
    int i, j;

    // Torre
    recursivo(torre);   //Repetição de movimentos

    printf("\n");   //Linha em branco

    // Bispo
    recursivo3(bispo);  //Repetição de movimentos

    printf("\n");   //Linha em branco

    // Rainha                  
    recursivo2(rainha); //Repetição de movimentos

    printf("\n");   //Linha em branco

    // Cavalo
    for (i = 1; i <= 2; i++) {
        printf("Cima\n");       //Dois movimentos para cima
    }

    for (j = 1; j <= 2; j++) {
        if (j > 1) break;
        printf("Direita\n");    //Um movimento para direita
    }

    return 0;
}
#include <stdio.h>

int main() {
    
    int bispo = 0, rainha = 0, cavalo = 1;

    //Torre
    // Mover torre 5 casas para a direita
    for (int torre = 0; torre < 5; torre ++) { 
        printf("Direita\n");    //Imprime a direção do movimento
    }

    printf("\n");   //Linha em branco

    //Bispo
    //Mover bispo 5 casa na diagonal
    while (bispo < 5) {

        printf("Cima, Direita\n");    //Imprime a direção do movimento

        bispo ++;
    }

    printf("\n");   //Linha em branco

    //Rainha
    //Mover rainha 8 casas para a esquerda
    do {

        printf("Esquerda\n");
        rainha++;   //Imprime a direção do movimento

        }
    while (rainha < 8);

    printf("\n");   //Linha em branco

    //Cavalo
    //Mover cavalo 3 casas: 2 para baixo e 1 para a esquerda
    while (cavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n");      //Imprime a direção do movimento
        }
        printf("Esquerda\n");       //Imprime a direção do movimento
    }

    return 0;
}
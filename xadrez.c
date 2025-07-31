#include <stdio.h>

int main() {
    
    int bispo = 0, rainha, movimento;

    // Mover Torre 5 casas para a direita

    for (int torre = 0; torre < 5; torre ++) { 
        printf("Direita\n");    //Imprime a direção do movimento
    }
    
    //Mover Bispo cinco casas na diagonal para cima e à direita

    while (bispo < 5) {

        printf("Cima, Direita\n");    //Imprime a direção do movimento
        
        bispo ++;
    }

    // Mover Rainha oito casas para a esquerda

    do {
    
        printf("Digite o número de movimentos da (Rainha): ");
        scanf("%d", &movimento);        //Entrada da quantidade de movimentos

        for (int rainha = 0; rainha < movimento; rainha ++) {
            printf("Esquerda\n");   //Imprime a direção do movimento
        }
    }
    while (rainha == movimento);
    printf("Acabou sua rodada!\n");    //Finaliza quando atinge a quantidade de movimentos


    return 0;
}
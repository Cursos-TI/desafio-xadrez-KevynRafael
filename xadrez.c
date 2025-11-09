#include <stdio.h>

int main() {

    int menuOption1, peca;
    int numero = 5;

    do {
        printf("\n== Bem-vindo ao Jogo de Xadrez! ==\n");
        printf("MENU INICIAL\n");
        printf("1. Iniciar novo jogo\n");
        printf("2. Regras\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &menuOption1);

        if (menuOption1 == 1) {
            printf("\nIniciando novo jogo...\n");
            printf("Escolha qual peça você quer mover:\n");
            printf("1. Torre\n");
            printf("2. Bispo\n");
            printf("3. Rainha\n");
            printf("Escolha: ");
            scanf("%d", &peca);

            switch (peca) {

                // Torre → usa FOR

                case 1:
                    printf("\n--- Movimento da Torre ---\n");

                        for (int k = 1; k <= 5; k++) {
                        printf("T");
                    }

                    printf("\n");

                    break;

                    // Bispo → usa WHILE

                case 2:
                    printf("\n--- Movimento do Bispo ---\n");

                    for (int i = 1; i <= numero; i++) {
                        for (int j = 1; j <= i; j++) {
                            printf("B");
                        }
                            printf("\n");
                    }   

                    printf("\n");

                    break;

                    // Rainha → usa DO-WHILE

                case 3:
                    printf("\n--- Movimento da Rainha ---\n");
                    int j = 1;
                    do {
                        printf("R");
                        j++;
                    } while (j <= 8);

                    printf("\n");

                    break;

                default:
                    printf("Opção inválida de peça!\n");
                    break;
            }
        }

        else if (menuOption1 == 2) {
            printf("\n=== Regras do Jogo ===\n");
            printf("Torre: move-se 5 casas para a Direita.\n");
            printf("Bispo: move-se 5 casas na Diagonal.\n");
            printf("Rainha: move-se 8 casas para a Esquerda.\n");
            printf("Este é apenas um simulador de movimentos.\n");
        }

        else if (menuOption1 == 3) {
            printf("Saindo do jogo... Até a próxima!\n");
        }

        else {
            printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        }

    } while (menuOption1 != 3);

    return 0;
}
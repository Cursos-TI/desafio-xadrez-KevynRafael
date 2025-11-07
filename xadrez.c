#include <stdio.h>

int main() {


    // Abaixo declaro as variaveis que seram utilizadas pelo sistema

    int menuOption1, peca;

    do {

        //Menu interativo para iniciar o jogo

        printf("\n== Bem-vindo ao Jogo de Xadrez! ==\n");
        printf("MENU INICIAL\n");
        printf("1. Iniciar novo jogo\n");
        printf("2. Regras\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &menuOption1);

        //Segundo mnu interativo para escolha de peça

        if (menuOption1 == 1) {
            printf("\nIniciando novo jogo...\n");
            printf("Escolha qual peça você quer mover:\n");
            printf("1. Torre\n");
            printf("2. Bispo\n");
            printf("3. Rainha\n");
            printf("Escolha: ");
            scanf("%d", &peca);

            //Após a escolha do usuario o sistemas ira mostrar o movimento da peça escolhida

            switch (peca) {
                case 1: // Torre → usa FOR
                    printf("\n--- Movimento da Torre ---\n");
                    for (int i = 1; i <= 5; i++) {
                        printf("Casa %d: Direita\n", i);
                    }
                    break;

                case 2: // Bispo → usa WHILE
                    printf("\n--- Movimento do Bispo ---\n");
                    int i = 1;
                    while (i <= 5) {
                        printf("Casa %d: Cima, Direita\n", i);
                        i++;
                    }
                    break;

                case 3: // Rainha → usa DO-WHILE
                    printf("\n--- Movimento da Rainha ---\n");
                    int j = 1;
                    do {
                        printf("Casa %d: Esquerda\n", j);
                        j++;
                    } while (j <= 8);
                    break;

                default:
                    printf("Opção inválida de peça!\n");
                    break;
            }
        }

        //Exibindo as regras do jogo

        else if (menuOption1 == 2) {
            printf("\n=== Regras do Jogo ===\n");
            printf("Torre: move-se 5 casas para a Direita (for).\n");
            printf("Bispo: move-se 5 casas na Diagonal (Cima, Direita) (while).\n");
            printf("Rainha: move-se 8 casas para a Esquerda (do-while).\n");
            printf("Este é apenas um simulador de movimentos.\n");
        }

        //Ao digitar o numero 3 o jogo ira finalizar

        else if (menuOption1 == 3) {
            printf("Saindo do jogo... Até a próxima!\n");
        }

        //Caso a escolha do usuario nao seja compativel exibir

        else {
            printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        }

    } while (menuOption1 != 3);


    return 0;
}

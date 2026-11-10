#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    int opcao_menu;
    int slots_personagem[3] = {1, 2, 3};

    do {

        printf("=====================================================================\n");
        printf("Opção 1: Play\n");
        printf("Opção 2: Creditos\n");
        printf("Opção 3: Sair\n");
        printf("=====================================================================\n");
        printf("Insira o numero da Opção Escolhida: ");
        scanf("%d", &opcao_menu);

        switch(opcao_menu) {

            case 1:
                printf("=====================================================================\n");
                printf("! -- SLOTS DE PERSONAGEM -- !\n");
                printf("=====================================================================\n");
                printf("Slot de Personagem 1: Vazio\n");
                printf("Slot de Personagem 2: Vazio\n");
                printf("Slot de Personagem 3: Vazio\n");
                printf("=====================================================================\n");
                printf("Insira o numero da Opção Escolhida: ");
                scanf("%d", &opcao_menu);
                break;

            case 2:
                printf("=====================================================================\n");
                printf("! -- CRÉDITOS DO JOGO -- !\n");
                printf("=====================================================================\n");
                printf("Desenvolvedor: Felipe Gaspar\n");
                break;

            case 3:
                printf("Encerrando o jogo...\n");
                break;

            default:
                printf("=======================\n");
                printf("Opção inválida!\n");
                break;
        }

    } while (opcao_menu != 3);

    return 0;
}

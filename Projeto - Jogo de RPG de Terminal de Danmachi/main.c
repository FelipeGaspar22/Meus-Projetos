#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    int opcao_menu, opcao_slot, opcao_creditos;
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

                do {

                    printf("=====================================================================\n");
                    printf("! -- SLOTS DE PERSONAGEM -- !\n");
                    printf("=====================================================================\n");
                    printf("1 - Slot de Personagem 1: Vazio\n");
                    printf("2 - Slot de Personagem 2: Vazio\n");
                    printf("3 - Slot de Personagem 3: Vazio\n");
                    printf("4 - Voltar\n");
                    printf("=====================================================================\n");
                    printf("Insira o numero da Opção Escolhida: ");
                    scanf("%d", &opcao_slot);

                } while(opcao_slot != 4);
                break;

            case 2:
                do {
                    
                    
                    printf("=====================================================================\n");
                    printf("! -- CRÉDITOS DO JOGO -- !\n");
                    printf("=====================================================================\n");
                    printf("Desenvolvedor: Felipe Gaspar\n");
                    printf("Roterista: Felipe Gaspar\n");
                    printf("\n");
                    printf("1 - Voltar\n");
                    printf("=====================================================================\n");
                    printf("Insira o numero da Opção Escolhida: ");
                    scanf("%d", &opcao_creditos);
                        
                    
                } while (opcao_creditos != 1);
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

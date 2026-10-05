#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
    int opcao_menu;
    int slots_personagem[3] = {1, 2, 3};
    
    printf("=====================================================================\n");
    printf("Opção 1: Play\n");
    printf("Opção 2: Creditos\n");
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
			break;
		
		case 2:
			printf("=====================================================================\n");
			printf("! -- CRÉDITOS DO JOGO -- !\n");
			printf("=====================================================================\n");
			printf("Desenvolvedor: Felipe Gaspar\n");
			
			break;
			
		default:
			printf("=======================\n");
			printf("Opção invalidade!\n");
			break;

	}
	

	return 0;
}

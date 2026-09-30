#include <stdio.h>

typedef struct{
    
    char name_personagem[40];
    char classe[20];
    
    int lv;
    int pontos_status;
    int xp;
    
    int hp;
    int mp;
    int forca;
    int resistencia;
    int agilidade;
    int destreza;
    int magia;
} personagem;

personagem criarpersonagem(){
    personagem p = {0};
    p.lv = 1;
    p.xp = 0;
    p.pontos_status = 0;
    
    p.hp = p.resistencia * 2;
    p.mp = p.magia * 5;
    
    return p;
}

int main()
{
    int opcao_classe;
    
    personagem heroi = criarpersonagem();
    printf("\n- Insira o nome do personagem: ");
    scanf("%39s", heroi.name_personagem);
    printf("\n-------------------------------");
    printf("\n  [Classes]");
    printf("\n- Guerreiro - (1)");
    printf("\n- Arqueiro - (2)");
    printf("\n- Assassino - (3)");
    printf("\n- Mago - (4)");
    printf("\n-------------------------------");
    printf("\n- Escolha sua classe: ");
    scanf("%d", opcao_classe);
    printf("\n-------------------------------");
    
    return 0;
}

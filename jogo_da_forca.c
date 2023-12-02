#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

void bancoDePalavras(char *str, char *str2);
void boasVindas();
void exibeForca(int vidas);
void exibeLetrasUsadas(char letrasUsadas[]);
void verificaPalavra(char palavra[], char letrasUsadas[]);
int vencedor(char palavra[], char letrasUsadas[]);
void jogo();

int main(){
    boasVindas();
    jogo();
    return 0;
}

void bancoDePalavras(char *str, char *str2){
    srand(time(NULL));

    char *temas[7]={"FRUTA","ANIMAL","COMIDA","PAIS","CORES","ESPORTE","PROFISSAO"};

    char *palavras[][8]={{"MACA", "UVA", "BANANA", "MELANCIA", "MORANGO", "PERA", "ABACAXI", "CEREJA"},
                        {"LEAO", "CACHORRO", "GATO", "COELHO", "ELEFANTE", "GIRAFA", "PATO", "CORUJA"},
                        {"CHOCOLATE", "PASTEL", "SORVETE", "BOLO", "SALADA", "PIZZA", "HAMBURGUER", "SUSHI"},
                        {"INGLATERRA", "BRASIL", "JAPAO", "CHINA", "ESPANHA", "AUSTRALIA", "CANADA", "MEXICO"},
                        {"AZUL", "AMARELO", "VERMELHO", "VERDE", "LARANJA", "ROXO", "ROSA", "MARROM"},
                        {"FUTEBOL", "BASQUETE", "TENIS", "NATACAO", "VOLEIBOL", "CICLISMO", "SURF", "ATLETISMO"},
                        {"MEDICO", "ENGENHEIRO", "PROFESSOR", "ARTISTA", "POLICIAL", "BOMBEIRO", "DENTISTA", "MUSICO"}};

    int tema=rand()%7;
    int palavra=rand()%8;

    strcpy(str,temas[tema]);
    strcpy(str2,palavras[tema][palavra]);
}

void boasVindas(){
    printf("\n=== JOGO DA FORCA ===\n");
    printf(" ________\n");
    printf(" |/    |\n");
    printf(" |     O\n");
    printf(" |    /|\\\n");
    printf(" |     |\n");
    printf(" |    / \\\n");
    printf(" |\n");
    printf("_|_\n\n");

    printf("Bem-vindo ao Jogo da Forca! Tente adivinhar a palavra secreta.\n");
    printf("Voce tera algumas chances antes que o personagem seja enforcado.\n");
    
    printf("\nPressione ENTER para continuar. . .");
    getchar();

    system("cls");
}

void exibeForca(int vidas){
    printf(" ________\n");
    printf(" |/    |\n");

    switch (vidas){
        case 6:
            printf(" |\n");
            printf(" |\n");
            printf(" |\n");
            printf(" |\n");
            break;
        case 5:
            printf(" |     O\n");
            printf(" |\n");
            printf(" |\n");
            printf(" |\n");
            break;
        case 4:
            printf(" |     O\n");
            printf(" |     |\n");
            printf(" |     |\n");
            printf(" |\n");
            break;
        case 3:
            printf(" |     O\n");
            printf(" |    /|\n");
            printf(" |     |\n");
            printf(" |\n");
            break;
        case 2:
            printf(" |     O\n");
            printf(" |    /|\\\n");
            printf(" |     |\n");
            printf(" |\n");
            break;
        case 1:
            printf(" |     O\n");
            printf(" |    /|\\\n");
            printf(" |     |\n");
            printf(" |    /\n");
            break;
        case 0:
            printf(" |     O\n");
            printf(" |    /|\\\n");
            printf(" |     |\n");
            printf(" |    / \\\n");
            break;
        default:
            break;
    }

    printf(" |\n");
    printf("_|_\n\n");
}

void exibeLetrasUsadas(char letrasUsadas[]){
    printf("\n\nLetras ja usadas:");

    for(int i=0;letrasUsadas[i]!='\0';i++)
        printf(" %c", letrasUsadas[i]);

    printf("\n");
}

void verificaPalavra(char palavra[], char letrasUsadas[]){
    for(int i=0;palavra[i]!='\0';i++){
        if(strchr(letrasUsadas,palavra[i])!=NULL)
            printf("\t%c", palavra[i]);
        else
            printf("\t_");
    }

    printf("\n");
}

int vencedor(char palavra[], char letrasUsadas[]){
    int venceu=1;

    for(int i=0;palavra[i]!='\0';i++){
        if(strchr(letrasUsadas,palavra[i])==NULL)
            venceu=0;
    }

    return venceu;
}

void jogo(){
    int vidas=6, j=0, venceu;
    char tema[30], palavra[30], letrasUsadas[26]={'\0'};

    bancoDePalavras(tema,palavra);

    do{
        char letra;
        int encontrou=0;

        printf("\n=== JOGO DA FORCA ===\n");
        printf("\nTEMA: %s", tema);

        exibeLetrasUsadas(letrasUsadas);
        exibeForca(vidas);
        verificaPalavra(palavra,letrasUsadas);
        venceu=vencedor(palavra,letrasUsadas);

        if(venceu){
            printf("\nParabens! Voce adivinhou a palavra!\n");
            break;
        }
        else if(venceu==0&&vidas==0){
            printf("\nInfelizmente, voce perdeu! Tente novamente.\n");
            break;
        }

        printf("\nDigite uma letra: ");
        scanf(" %c", &letra);
        letra=toupper(letra);

        letrasUsadas[j++]=letra;
        letrasUsadas[j]='\0';

        for(int i=0;palavra[i]!='\0';i++){
            if(letra==palavra[i])
                encontrou=1;
        }

        if(encontrou==0)
            vidas--;
        
        system("cls");
    }while(vidas>=0&&venceu==0);
}
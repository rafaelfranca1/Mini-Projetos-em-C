#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

#define PLAYER 'X'
#define BOT 'O'

char tabuleiro[3][3];

void iniciaTabuleiro(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            tabuleiro[i][j]=' ';
    }
}

void mostraTabuleiro(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(j!=2)
                printf(" %c |", tabuleiro[i][j]);
            else
                printf(" %c\n", tabuleiro[i][j]);
        }
        if(i!=2)
            printf("---|---|---\n");
    }
}

void mostraPosicoesValidas() {
    printf("Posicoes validas para jogar: ");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(tabuleiro[i][j]==' ')
                printf("(%d, %d) ", i+1, j+1);
        }
    }
    
    printf("\n");
}

int verificaEspacoLivre(){
    int espacosLivres=9;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(tabuleiro[i][j]!=' ')
                espacosLivres--;
        }
    }

    return espacosLivres;
}

void jogadaPlayer(){
    int x, y;

    do{
        printf("Digite a linha (1-3): ");  
        scanf("%d", &x);
        x--;

        printf("Digite a coluna (1-3): "); 
        scanf("%d", &y);
        y--;

        if(tabuleiro[x][y]!=' ')
            printf("Posicao ocupada. Escolha novamente.\n");
        else{
            tabuleiro[x][y]=PLAYER;
            break;
        }
    }while(tabuleiro[x][y]!=' ') ;
}

void mostraVencedor(char vencedor){
    if(vencedor==PLAYER)
        printf("Parabens! Voce venceu!\n");
    else if(vencedor==BOT)
        printf("Voce perdeu! Melhor sorte na proxima.\n");
    else
        printf("Eh um empate! Jogo acirrado.\n");
}

void jogadaBot(){
    srand(time(NULL));
    int x, y;
    
    if(verificaEspacoLivre()>0){
        do{
            x=rand()%3;
            y=rand()%3;
        }while(tabuleiro[x][y]!=' ');

        tabuleiro[x][y]=BOT;
    }
    else
        mostraVencedor(' ');
}

char verificaVencedor(){
    for(int i=0;i<3;i++){
        //verifica as linhas
        if(tabuleiro[i][0]==tabuleiro[i][1]&&tabuleiro[i][0]==tabuleiro[i][2])
            return tabuleiro[i][0];
        //verifica as colunas
        if(tabuleiro[0][i]==tabuleiro[1][i]&&tabuleiro[0][i]==tabuleiro[2][i])
            return tabuleiro[0][i];
        //verifica a diagonal primaria
        if(tabuleiro[0][0]==tabuleiro[1][1]&&tabuleiro[0][0]==tabuleiro[2][2])
            return tabuleiro[0][0];
        //verifica a diagonal secundaria
        if(tabuleiro[0][2]==tabuleiro[1][1]&&tabuleiro[0][2]==tabuleiro[2][0])
            return tabuleiro[0][2];
    }

    return ' ';
}

int main(){
    char resposta;

    do{
        char vencedor=' ';
        resposta=' ';

        iniciaTabuleiro();

        while(vencedor==' '&&verificaEspacoLivre()!=0){
            system("cls");
            printf("\n=== JOGO DA VELHA ===\n\n");

            mostraTabuleiro();
            mostraPosicoesValidas();

            jogadaPlayer();
            vencedor=verificaVencedor();

            if(vencedor!=' '||verificaEspacoLivre()==0)
                break;

            jogadaBot();
            vencedor=verificaVencedor();

            if(vencedor!=' '||verificaEspacoLivre()==0)
                break;

            system("cls");
        }

        system("cls");
        printf("\n=== JOGO DA VELHA ===\n\n");

        mostraTabuleiro();
        mostraVencedor(vencedor);

        printf("Voce gostaria de jogar novamente? (S/N): ");
        scanf(" %c", &resposta);
        resposta=toupper(resposta);
    }while(resposta=='S');

    printf("Obrigado por jogar!");

    return 0;
}
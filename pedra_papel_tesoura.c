#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int game(char player, char bot){
    if(player==bot)
        return -1;
    if((player=='t'&&bot=='p')||(player=='p'&&bot=='r')||(player=='r'&&bot=='t'))
        return 0;
    else
        return 1;
}

int main(){
    int n, resultado;
    char player, bot;

    srand(time(NULL));
    n=rand()%100;
    if(n>66)
        bot='r';
    else if(n>33)
        bot='p';
    else
        bot='t';

    printf("===================================\n");
    printf("Bem-vindo ao Pedra Papel Tesoura\n");
    printf("===================================\n\n");

    do{
        printf("Escolha entre pedra(r), papel(p) ou tesoura(t): ");
        scanf(" %c", &player);
        player=tolower(player);
    }while(player!='r'&&player!='p'&&player!='t');

    resultado=game(player,bot);

    switch(player){
        case 't':
            printf("\nTesoura ");
            break;
        case 'p':
            printf("\nPapel ");
            break;
        case 'r':
            printf("\nPedra ");
            break;
    }

    if(resultado==0)
        printf("contra ");
    else if(resultado==-1)
        printf("empata com ");
    else
        printf("perde para ");

    switch(bot){
        case 't':
            printf("tesoura.\n");
            break;
        case 'p':
            printf("papel.\n");
            break;
        case 'r':
            printf("pedra.\n");
            break;
    }

    if(resultado==0)
        printf("\nVoce ganhou!!! Parabens!\n");
    else if(resultado==-1)
        printf("\nEmpate. Jogue novamente!\n");
    else
        printf("\nO bot venceu. Tente novamente!\n");

    return 0;  
}
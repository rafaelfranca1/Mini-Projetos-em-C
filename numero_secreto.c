#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numero, chute, chutes=0;

    srand(time(NULL));
    numero=rand()%1000;
    
    printf("===================================\n");
    printf("Bem-vindo ao Jogo do Numero Secreto\n");
    printf("===================================\n\n");
    printf("Tente adivinhar um numero entre 0 e 999.\n\n");

    do{
        printf("Digite seu palpite: ");
        if(scanf("%d", &chute)!=1){
            printf("Entrada invalida. Tente novamente.\n");
            fflush(stdin);
            continue;
        }

        if(chute>numero)
            printf("Muito alto! Tente um numero menor.\n");
        else if(chute<numero)
            printf("Muito baixo! Tente um numero maior.\n");
        else if(numero==chute){
            system("cls");
            printf("Parabens! Voce acertou. O numero era %d\n", chute);
        }

        chutes++;
    }while(chute!=numero);

    printf("Voce acertou na %d tentativa", chutes);

    return 0; 
}
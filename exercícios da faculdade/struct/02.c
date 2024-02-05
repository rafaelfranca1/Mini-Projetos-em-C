/*Faça um programa que leia o código, a descrição, o valor unitário e a
quantidade em estoque de 10 produtos comercializados em uma papelaria.
Estas informações deverão ser armazenadas em um vetor de estruturas.
Depois da leitura dos dados de entrada, o programa deverá:
• Realizar uma rotina que permita alterar a descrição, o valor unitário e a
quantidade em estoque de determinado produto, que deverá ser
localizado por meio do seu código;
• Realizar uma rotina que mostre todos os produtos cuja descrição
comece com determinada letra (informada pelo usuário);
• Mostrar todos os produtos com quantidade em estoque inferior a 5
unidades.*/
#include <stdio.h>

typedef struct{
    int codigo, quantidade;
    char descricao[30];
    float valor;
}tpapelaria;

void leia(tpapelaria v[], int n){
    for(int i=0;i<n;i++){
        printf("digite o codigo do produto: "); scanf("%d", &v[i].codigo);
        printf("digite a descricao do produto: "); scanf("%s", v[i].descricao);
        printf("digite o valor unitario do produto: "); scanf("%f", &v[i].valor);
        printf("digite a quantidade do produto: "); scanf("%d", &v[i].quantidade);
    }
}

void altere(tpapelaria v[], int n){
    int cod;
    printf("digite o codigo de um produto: "); scanf("%d", &cod);
    for(int i=0;i<n;i++){
        if(cod==v[i].codigo){
            printf("digite a descricao do produto: "); scanf("%s", v[i].descricao);
            printf("digite o valor unitario do produto: "); scanf("%f", &v[i].valor);
            printf("digite a quantidade do produto: "); scanf("%d", &v[i].quantidade);
        }
    }
}

void exibaChar(tpapelaria v[], int n){
    char inicial;
    printf("digite a inicial da descriçao dos produtos: "); scanf(" %c", &inicial);
    for(int i=0;i<n;i++){
        if(inicial==v[i].descricao[0]){
            printf("%d | %s | %f | %d\n", v[i].codigo, v[i].descricao, v[i].valor, v[i].quantidade);
        }
    }
}

void exibaMenor5(tpapelaria v[], int n){
    for(int i=0;i<n;i++){
        if(v[i].quantidade<5){
            printf("%d | %s | %f | %d\n", v[i].codigo, v[i].descricao, v[i].valor, v[i].quantidade);
        }
    }
}

int main(){
    tpapelaria loja[10];
    int op;
    leia(loja,10);
    while(scanf("%d", &op)!=0){
        printf("\nEscolha uma opção:\n");
        printf("1. Alterar informações de um produto\n");
        printf("2. Mostrar produtos por inicial da descrição\n");
        printf("3. Mostrar produtos com quantidade menor que 5\n");
        printf("0. Sair\n");
        switch (op){
            case 1:
                altere(loja,10);
                break;
            case 2:
                exibaChar(loja,10);
                break;
            case 3:
                exibaMenor5(loja,10);
                break;
            default:
                printf("opçao invalida!\n");
                break;
        }
    }
    return 0;
}
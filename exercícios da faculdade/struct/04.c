/*Escreva um programa que auxilie no controle de uma fazenda que possui um total de
2000 cabeças de gado. A base de dados é formada por um conjunto de estruturas
contendo os seguintes campos referente a cada cabeça de gado: código da cabeça de
gado, número de litros de leite produzido por semana, quantidade de alimento ingerida
por semana - em quilos, data de nascimento e abate (‘N’ (não) ou ‘S’ (sim)).
• Ler a base de dados armazenando em um vetor de estruturas.
• Preencher o campo abate, considerando que a cabeça de gado irá para o abate caso:
tenha mais de 5 anos, ou produza menos de 40 litros de leite por semana, ou; produza
entre 50 e 70 litros de leite por semana e ingira mais de 50 quilos de alimento por dia.
Crie o menu de opções para:
c) Calcular e mostrar a quantidade total de leite produzida por semana;
d) Calcular e mostrar a quantidade total de alimento consumido por semana;
e) Calcular e mostrar a quantidade total de leite a ser produzida por semana, após o
abate;
f) Calcular e mostrar o total de alimento consumido por semana após o abate;
g) Calcular e mostrar a quantidade de cabeças de gado que irão para o abate.
h) Sair do programa.*/
#include <stdio.h>

#define MAX 2000

typedef struct{
    int cod, nascimento;
    float leite, comida;
    char abate;
}tgados;

void leia(tgados v[], int n){
    for(int i=0;i<n;i++){
        printf("digite o codigo da cabeca de gado: "); scanf("%d", &v[i].cod);
        printf("digite o numero de litros de leite produzido por semana: "); scanf("%f", &v[i].leite);
        printf("digite a quantidade de alimento ingerida por semana: "); scanf("%f", &v[i].comida);
        printf("digite a data de nascimento: "); scanf("%d", &v[i].nascimento);
        if(2023-v[i].nascimento>5||v[i].leite<40||v[i].leite<=70||v[i].leite>=50||v[i].comida/7>50)
            v[i].abate='S';
        else
            v[i].abate='N';
    }
}

void totalLeite(tgados v[], int n){
    float t=0;
    for(int i=0;i<n;i++){
        t+=v[i].leite;
    }
    printf("Quantidade total de leite a ser produzida por semana: %f", t);
}

void totalComida(tgados v[], int n){
    float t=0;
    for(int i=0;i<n;i++){
        t+=v[i].comida;
    }
    printf("Total de alimento consumido por semana: %fleite", t);
}

void leiteAbate(tgados v[], int n){
    float t=0;
    for(int i=0;i<n;i++){
        if(v[i].abate=='N')
            t+=v[i].leite;
    }
    printf("Quantidade total de leite a ser produzida por semana apos o abate: %f", t);
}

void comidaAbate(tgados v[], int n){
    float t=0;
    for(int i=0;i<n;i++){
        if(v[i].abate=='N')
            t+=v[i].comida;
    }
    printf("Total de alimento consumido por semana apos o abate: %f", t);
}

void abates(tgados v[], int n){
    int t=0;
    for(int i=0;i<n;i++){
        if(v[i].abate=='S')
            t++;
    }
    printf("Quantidade de cabecas de gado que irao para o abate: %d", t);
}

int main(){
    tgados cabecas[MAX];
    leia(cabecas,MAX);
    int op;
    while(1){
        printf("\nEscolha uma opcao:\n");
        printf("1. Mostrar a quantidade total de leite produzida por semana\n");
        printf("2. Mostrar a quantidade total de alimento consumido por semana\n");
        printf("3. Mostrar a quantidade total de leite a ser produzida por semana, apos o abate\n");
        printf("4. Mostrar o total de alimento consumido por semana apos o abate\n");
        printf("5. Mostrar a quantidade de cabecas de gado que irao para o abate\n");
        printf("0. Sair\n");
        scanf("%d", &op);
        switch (op){
            case 1:
                totalLeite(cabecas,MAX);
                break;
            case 2:
                totalComida(cabecas,MAX);
            break;
            case 3:
                leiteAbate(cabecas,MAX);
            break;
            case 4:
                comidaAbate(cabecas,MAX);
            break;
            case 5:
                abates(cabecas,MAX);
            break;
            case 0:
                return 0;
            default:
                break;
        }
    }
    return 0;
}
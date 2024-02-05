/* Seja uma estrutura para descrever os carros de uma determinada
revendedora, contendo os seguintes campos: marca, ano, cor e
preço.
a) Escrever a definição da estrutura carro.
b) Declarar um vetor do tipo da estrutura definida acima, de
tamanho 20.
Crie um menu para:
• Ler o vetor.
• Ler um preço e mostrar os carros (marca, cor e ano) que tenham
preço igual ou menor ao preço recebido.
• Ler a marca de um carro e mostrar as informações de todos os
carros dessa marca (preço, ano e cor).
• Ler a marca, ano e cor e informar se existe ou não um carro com
essas características. Se existir, informar o preço.*/
#include <stdio.h>

typedef struct{
    char marca[30], cor[30];
    int ano;
    float preco;
}tcarros;

void leia(tcarros v[], int n){
    for(int i=0;i<n;i++){
        printf("escreva a marca do carro: "); scanf("%s", v[i].marca);
        printf("escreva o ano do carro: "); scanf("%d", &v[i].ano);
        printf("escreva a cor do carro: "); scanf("%s", v[i].cor);
        printf("escreva o preco do carro: "); scanf("%f", &v[i].preco);
    }
}

void porPreco(tcarros v[], int n){
    float valor;
    printf("digite o preco: "); scanf("%f", &valor);
    for(int i=0;i<n;i++){
        if(v[i].preco<=valor)
            printf("%s | %d | %s | %f\n", v[i].marca, v[i].ano, v[i].cor, v[i].preco);
    }
}

void porMarca(tcarros v[], int n){
    char logo[30];
    printf("digite a marca: ");scanf("%s", logo);
    for(int i=0;i<n;i++){
        int j=0;
        while(v[i].marca[j]!='\0'&&logo[j]!='\0'&&v[i].marca[j]==logo[j])
            j++;
        if(v[i].marca[j]=='\0'&&logo[j]=='\0')
            printf("%s | %d | %s | %f\n", v[i].marca, v[i].ano, v[i].cor, v[i].preco);
    }
}

void existe(tcarros v[], int n){
    char logo[30], cor[30];
    int ano, achou=0;
    printf("Digite a marca, ano e cor para verificar se existe: "); scanf("%s %d %s", logo, &ano, cor);
    for(int i=0;i<n;i++){
        int j=0, k=0;
        while(v[i].marca[j]!='\0'&&logo[j]!='\0'&&v[i].marca[j]==logo[j])
            j++;
        while(v[i].cor[k]!='\0'&&cor[k]!='\0'&&v[i].cor[k]==cor[k])
            k++;
        if(v[i].marca[j]=='\0'&&logo[j]=='\0'&&v[i].cor[k]=='\0'&&cor[k]=='\0'&&ano==v[i].ano){
            printf("existe | %f\n", v[i].preco);
            achou=1;
            break;
        }
    }
    if(!achou) 
            printf("nao existe carro assim");
}

int main(){
    tcarros loja[20];
    leia(loja,20);
    int op;
    while(scanf("%d", &op)!=0){
        printf("escolha uma opcao: \n");
        printf("1. filtrar por preco\n");
        printf("2. filtrar por marca\n");
        printf("3. filtrar por ano, marca e cor\n");
        printf("0. sair\n");
        switch (op){
            case 1:
                porPreco(loja,20);
                break;
            case 2:
                porMarca(loja,20);
                break;
            case 3:
                existe(loja,20);
                break;
            default:
                printf("opçao invalida!\n");
                break;
        }
    }
    return 0;
}
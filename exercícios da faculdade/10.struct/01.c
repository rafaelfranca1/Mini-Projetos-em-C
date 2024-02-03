/*Criar uma estrutura para receber os nomes de clubes de futebol e seus
respectivos pontos no campeonato. Ler os nomes e os pontos e mostrar
qual equipe (nome e pontos) é a vencedora. Considerar 10 clubes no total.*/
#include <stdio.h>

#define MAX 10

typedef struct{
    char equipe[50];
    float pontuacao;
}tChampions;

void lerStruct(tChampions v[], int n){
    for(int i=0;i<n;i++){
        printf("nome da equipe %d: ", i+1);
        scanf("%s", v[i].equipe);
        printf("pontuacao da equipe %d: ", i+1);
        scanf("%f", &v[i].pontuacao);
    }
}

void vencedor(tChampions v[], int n, float *p, char *eq){
    int campeao=0;
    for(int i=0;i<n;i++){
        if(v[i].pontuacao>v[campeao].pontuacao)
            campeao=i;
    }
    *p=v[campeao].pontuacao;
    int j=0;
    while(v[campeao].equipe[j]!='\0'){
        eq[j]=v[campeao].equipe[j];
        j++;
    }
    eq[j]='\0';
}

int main(){
    tChampions pelada[MAX];
    char equipe[50];
    float pontos;
    lerStruct(pelada,MAX);
    vencedor(pelada,MAX,&pontos,&equipe);
    printf("A equipe vencedora foi %s com %.2f pontos.\n", equipe, pontos);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define MAX 5

//menu inicial
void menuPrincipal(){
    char start;
    do{
        printf("===================================\n");
        printf("Bem-vindo ao Jogo da Sequencia Secreta\n");
        printf("===================================\n\n");
        printf("Pressione ENTER para comecar\n\n");
        start=getchar();
    }while(start!='\n');
    system("cls");
}

//exibe a sequecia
void exibeSequencia(int v[], int tempo){
    do{
        printf("Voce tem %02d segundos para decorar a sequencia\n\n\n", tempo);

        for(int i=0;i<MAX;i++)
            printf("\t%d", v[i]);

        sleep(1);
        tempo--;
        
        system("cls");
    }while(tempo>0);
}

//ler as respostas
void lerResposta(int v[]){
    printf("Agora, digite suas respostas.\n");

    for(int i=0;i<MAX;i++){
        printf("Numero %d: ", i+1); 
        scanf("%d", &v[i]);
    }
    
    system("cls");
}

//compara a sequenccia com as respostas
void compara(int v[], int u[]){
    int acertos=0;

    for(int i=0;i<MAX;i++){
        if(v[i]==u[i])
            acertos++;
    }

    if(acertos==MAX)
        printf("Parabens!!! Voce acertou.\n");
    else
        printf("Nao foi dessa vez. Tente novamente.\n");
        
    printf("A sequencia era.\n\n");
    for(int i=0;i<MAX;i++)
        printf("\t%d", v[i]);
}

int main(){
    int sequencia[MAX], respostas[MAX], tempo=10;

    srand(time(NULL));
    for(int i=0;i<MAX;i++)
        sequencia[i]=rand()%10;

    menuPrincipal();
    exibeSequencia(sequencia,tempo);
    lerResposta(respostas);
    compara(sequencia,respostas);
        
    return 0; 
}
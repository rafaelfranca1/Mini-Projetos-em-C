/*Obter um vetor V de 20 posições. Mostrar o maior elemento do vetor V e a sua posição.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lervetor(int a[], int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%30;
    }
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void maiorV(int a[], int n){
    int maior=a[0], posicao=0;
    for(int i=0;i<n;i++){
        if(a[i]>maior){
            maior=a[i];
            posicao=i;
        }
    }
    printf("o maior elemento vetor eh o %d e esta na posicao %d\n", maior, posicao);
}

int main(){
    int const tamanho=20;
    int vetorV[tamanho];
    srand(time(NULL));
    lervetor(vetorV, tamanho);
    maiorV(vetorV, tamanho);
    return 0;
}
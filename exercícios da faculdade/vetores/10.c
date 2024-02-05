/*Ler um vetor de 16 posições. Troque os 8 primeiros valores pelos 8 últimos. 
Escreva ao final o vetor obtido.*/
#include <stdio.h>
#include <stdlib.h>//bibliotecas do srans e rand
#include <time.h>

void lervetor(int a[], int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%10;
    }
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void vetor8(int a[], int b[], int n){
    for(int i=0;i<n;i++){
        if(i<8){
            b[i]=a[i+8];
        }
        else{
            b[i]=a[i-8];
        }
    }
}

int main(){
    int const tamanho=16;
    int vetorA[tamanho], vetorB[tamanho];
    srand(time(NULL));
    lervetor(vetorA, tamanho);
    vetor8(vetorA, vetorB, tamanho);
    for(int i=0;i<tamanho;i++){
        printf("%d ", vetorB[i]);
    }
    return 0;
}
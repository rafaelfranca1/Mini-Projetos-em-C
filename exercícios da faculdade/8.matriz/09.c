/*9.Escreva um programa que preencha uma matriz M(10x10) com números
inteiros, execute as trocas especificadas a seguir e mostre a matriz
resultante: a linha 2 com a linha 8; a coluna 4 com a coluna 10.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Função para preencher a matriz com números inteiros aleatórios
void preencher(int a[][10], int l, int c){
    srand(time(NULL));
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            a[i][j] = rand() % 10;
        }
    }
}
// Função para exibir a matriz na tela
void exibir(int a[][10], int l, int c){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", a[i][j]); 
        }
        printf("\n"); 
    }
}
// Função para realizar as trocas especificadas
void troca(int a[][10], int l, int c){
    int v[10]; // Vetor auxiliar para armazenar temporariamente os elementos
    // Troca a linha 2 com a linha 8
    for(int i = 0; i < l; i++){
        v[i] = a[i][3];
        a[i][3] = a[i][9];
        a[i][9] = v[i];
    }
    // Troca a coluna 4 com a coluna 10
    for(int j = 0; j < c; j++){
        v[j] = a[1][j];
        a[1][j] = a[7][j];
        a[7][j] = v[j];
    }
}

int main(){
    int m1[10][10];
    preencher(m1, 10, 10);
    printf("Matriz original:\n");
    exibir(m1, 10, 10);
    printf("\n");
    troca(m1, 10 ,10);
    exibir(m1, 10, 10);

    return 0;
}

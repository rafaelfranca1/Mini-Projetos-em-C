/*Faça um programa que preencha uma matriz M(8x8) com números
inteiros e some cada uma das linhas, armazenando o resultado das somas
em um vetor. A seguir, o programa deverá multiplicar cada elemento da
matriz pela soma da linha correspondente e mostrar a matriz resultante.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int a[][8], int l, int c){
    srand(time(NULL));
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            a[i][j]=rand()%5;
        }
    }
}

void exibir(int a[][8], int l, int c){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void m8(int a[][8], int b[][8], int l, int c){
    int v[8], soma;
    for(int i=0;i<l;i++){
        soma=0;
        for(int j=0;j<c;j++){
            soma+=a[i][j];
        }
        v[i]=soma;
    }
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            b[i][j]=a[i][j]*v[i];
        }
    }
}

int main(){
    int m1[8][8], m2[8][8];
    preencher(m1, 8, 8);
    exibir(m1, 8, 8);
    m8(m1, m2, 8, 8);
    exibir(m2, 8, 8);
    return 0;
}
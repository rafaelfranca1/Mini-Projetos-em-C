/*Escreva um programa que preencha uma matriz M(6x4) com números
inteiros, calcule e mostre quantos elementos dessa matriz são maiores
que 30 e, em seguida, monte uma segunda matriz com os elementos
diferentes de 30. No lugar do número 30, da segunda matriz, coloque o
número zero.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int a[][4], int l, int c){
    srand(time(NULL));
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            a[i][j]=rand()%10+25;
        }
    }
}

void exibir(int a[][4], int l, int c){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void m30(int a[][4], int b[][4], int l, int c, int *cont){
    *cont=0;
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]>30){
                (*cont)++;
            }
            if(a[i][j]!=30){
                b[i][j]=a[i][j];
            }
            else if(a[i][j]==30){
                b[i][j]=00;
            }
        }
    }
}

int main(){
    int m1[6][4], m2[6][4], contador;
    preencher(m1, 6, 4);
    exibir(m1, 6, 4);
    m30(m1, m2, 6, 4, &contador);
    printf("quantidade: %d\n", contador);
    exibir(m2, 6, 4);
    return 0;
}
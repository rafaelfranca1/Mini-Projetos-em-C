/*Seja A uma matriz 4x5. Determine o maior elemento de A e a sua posição.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 void preencherM(int a[][5], int l, int c){
    srand(time(NULL));
    for(int i=0; i<l;i++){
        for(int j=0; j<c; j++){
            a[i][j]=rand()%90+10;//o primeiro numero decide quantos antecessores vai ter na matriz do valor da soma dos dois
        }
    }
 }

 void mostrarM(int a[][5], int l, int c){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
 }

 int maiorM(int a[][5], int l, int c, int *maior, int *linha, int *coluna){
    *maior=a[0][0], *linha=0, *coluna=0;
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]>*maior){
                *maior=a[i][j];
                *linha=i;
                *coluna=j;
            }
        }
    }
 }

 int main(){
    int matriz[4][5], maior, linha, coluna;
    preencherM(matriz, 4, 5);
    mostrarM(matriz, 4, 5);
    maiorM(matriz, 4 ,5, &maior, &linha, &coluna);
    printf("o maior elemento da matriz eh %d %d %d", maior, linha, coluna);
    return 0;
 }

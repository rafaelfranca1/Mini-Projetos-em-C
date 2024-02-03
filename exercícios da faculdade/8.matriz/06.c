/*Faça um programa que preencha uma matriz M(3x3), calcule e mostre a
matriz R, resultante da multiplicação dos elementos de M pelo seu menor
elemento.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preeencher(int a[][3], int l, int c){
    srand(time(NULL));
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            a[i][j]=rand()%10;
        }
    }
}

void exibir(int a[][3], int l, int c){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int menorV(int a[][3], int l, int c){
    int menor=20;
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]<menor){
                menor=a[i][j];
            }
        }
    }
    return menor;
}

void MR(int a[][3], int b[][3], int l, int c, int m){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            b[i][j]=a[i][j]*m;
        }
    }
}

int main(){
    int matriz[3][3], matriz2[3][3];
    preeencher(matriz, 3, 3);
    exibir(matriz, 3, 3);
    int menor=menorV(matriz, 3, 3);
    printf("%d\n", menor);
    MR(matriz, matriz2, 3, 3, menor);
    exibir(matriz2, 3, 3);
    return 0;
}

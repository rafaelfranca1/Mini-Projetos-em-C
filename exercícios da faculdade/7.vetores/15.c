/*Fazer um programa que leia dois conjuntos, A e B, de 10 inteiros
cada. Escrever uma função que determine o conjunto interseção
entre A e B (elementos comuns aos dois conjuntos).*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int a[], int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%11;
        printf("%d ", a[i]);
    }
    printf("\n");
}

void exibir(int a[], int n){
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

void intersecao(int a[], int b[], int c[], int n){
    int tam=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
                int repetido=0;
                for(int k=0;k<n;k++){
                    if(a[i]==c[k]){
                        repetido=1;
                        break;
                    }
                }
                if(!repetido){
                    c[tam]=a[i];
                    tam++;
                }
            }
        }
    }
}

int main(){
    int v1[10], v2[10], v3[10]={0};
    srand(time(NULL));
    preencher(v1, 10);
    preencher(v2, 10);
    intersecao(v1, v2, v3, 10);
    exibir(v3, 10);
    return 0;
}
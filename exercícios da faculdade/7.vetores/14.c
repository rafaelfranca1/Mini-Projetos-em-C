/*Faça uma função que recebe, por parâmetro, 2 vetores A e B de
tamanho 10 de inteiros. Ao final da função, B deve conter o
fatorial de cada elemento de A. O vetor B retorna alterado.
A = 4 1 0 3 ...
B = 24 1 1 6 ...*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ler(int a[], int n){
    srand(time(NULL));
    for(int i=0;i<n;i++){
        a[i]=rand()%10;
        printf("%d ", a[i]);
    }
    printf("\n");
}

void fatorial(int a[], int b[], int n){
    for(int i=0;i<n;i++){
        int fat=1;
        for(int j=1;j<=a[i];j++){
            fat*=j;
        }
        b[i]=fat;
    }
}

int main(){
    int const tam=10;
    int v1[tam], v2[tam];
    ler(v1, tam);
    fatorial(v1, v2, tam);
    printf("\n");
    for(int i=0;i<tam;i++){
        printf("%d ", v2[i]);
    }
    return 0;
}
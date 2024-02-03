/*Ler um vetor A com 20 elementos. Gerar e mostrar o vetor B obtido pela invers�o da ordem do vetor A*/
#include <stdio.h>
#include <stdlib.h>
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

void inverter(int a[], int b[], int n){
    int j=n-1;
    for(int i=0; i<n;i++){
        b[i]=a[j--];
    }
}

int main(){
    const int tamanho=20;
    int vetorA[tamanho], vetorB[tamanho];
    srand(time(NULL));
    lervetor(vetorA, tamanho);
    inverter(vetorA, vetorB, tamanho);
    for(int i=0;i<tamanho;i++){
        printf("%d ", vetorB[i]);
    }
    return 0;
}

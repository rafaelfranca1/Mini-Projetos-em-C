/*Dados dois vetores A e B com 10 elementos cada. 
Armazenar no vetor C a soma do elemento em A com o elemento em B em cada uma das posições.*/
#include <stdio.h>

void lerVetor(int a[], int n){
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}

void somaVetor(int a[], int b[], int c[], int n){
    for(int i=0;i<n;i++){
        c[i]=a[i]+b[i];
        printf("%d ", c[i]);
    }
}

int main(){
    int vetorA[10];
    int vetorB[10];
    int vetorC[10];
    lerVetor(vetorA, 10);
    lerVetor(vetorB, 10);
    somaVetor(vetorA, vetorB, vetorC, 10);
    return 0;
}
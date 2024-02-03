/*Ler dois vetores A e B de 10 elementos cada. Intercalar os elementos de A com os elementos de B 
de maneira a formar um terceiro vetor, C. Escrever o vetor C.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lerVetor(int a[], int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%10;
    }
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void intercalar(int a[], int b[], int c[], int n){
    int j=0;
    for(int i=0;i<n;i++){
        c[j++]=a[i];
        c[j++]=b[i];
    }
}

int main(){
    int vetorA[10], vetorB[10], vetorC[20];
    srand(time(NULL));
    lerVetor(vetorA, 10);
    lerVetor(vetorB, 10);
    intercalar(vetorA, vetorB, vetorC, 20);
    for(int i=0;i<20;i++){
        printf("%d ", vetorC[i]);
    }
    return 0;
}
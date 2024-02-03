#include <stdio.h>
//bibliotecas do srand e rand
#include <stdlib.h>
#include <time.h>

void lerV(int a[], int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%10;//preenche o vetor co numeros aleatorios
        printf("%d ", a[i]);
    }
}

int main(){
    int vetor[10];
    srand(time(NULL));//faz com que o vetor sempre se inicie com numero diferente
    lerV(vetor, 10);
    return 0;
}
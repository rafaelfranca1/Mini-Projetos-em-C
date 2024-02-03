/*Calcular a soma dos elementos de um vetor de 10 posições*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ler(int a[], int n){/*ler todos os numero e armazena no vetor a[]*/
    int i;
    for(i=0;i<n;i++){
        a[i]=rand()%10;
    }
}

int soma(int a[], int n){/*soma todos os elementos do vetor*/
    int i, s=0;
    for(i=0;i<n;i++){
        s=s+a[i];
    }
    return s;
}

int main(){
    int vetora[10];
    srand(time(NULL));
    ler(vetora, 10);/*chama a função para ler os valores do vetor*/
    printf("%d", soma(vetora, 10));/*imprime os valor da função soma*/
    return 0;
}

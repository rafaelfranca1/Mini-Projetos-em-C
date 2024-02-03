/* Fazer uma função que procura por um número em um vetor e
retorna o seu endereço (índice) caso o encontre. Se não encontrar
mostrar uma mensagem de que não achou.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lervetor(int a[], int n){
    srand(time(NULL));
    for(int i=0;i<n;i++){
        a[i]=rand()%10;
        printf("%d ", a[i]);
    }
    printf("\n");
}

int search(int a[], int n, int valor){
    for(int i=0;i<n;i++){
        if(valor==a[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int const tamanho=10;
    int vetor[tamanho], valor;
    lervetor(vetor, tamanho);
    scanf("%d", &valor);
    int indice=search(vetor, tamanho, valor);
    if(indice==-1){
        printf("nao tem");
    }
    else{
        printf("o indice do vetor que tem o numero %d eh %d", valor, indice);
    }
    return 0;
}
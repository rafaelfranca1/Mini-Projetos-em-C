/*Multiplicar os elementos que estão nos índices ímpares do vetor pela constante 15.*/
#include <stdio.h>

void ler(int a[], int n){
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}

void mult(int a[], int n){
    const int fixo=15; 
    for(int i=0;i<n;i++){
        if(a[i]%2==1){
            int produto=a[i]*fixo;
            printf("%d ", produto);
        }
    }
    printf("\n");
}

int main(){
    int vetor[10];
    ler(vetor, 10);
    mult(vetor, 10);
    return 0;
}
/*Calcular a média dos elementos do vetor do exercício 1*/
#include <stdio.h>

int ler(int a[], int n){/*ler e armazenar os valores no vetor*/
    int i;
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}

int media(int a[], int n){/*fazer a media dos vaalores do vetor*/
    int i, s=0, m=0;
    for(i=0;i<n;i++){
        s=s+a[i];
    }
    m=s/10;
    return m;
}

int main(){
    int vetora[10];
    ler(vetora, 10);
    printf("media = %d\n", media(vetora, 10));
    return 0;
}

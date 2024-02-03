/*. Dada uma matriz A, determine a linha de A que possui a maior soma de seus elementos.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int a[][3], int l, int c){
    srand(time(NULL));
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            a[i][j]=rand()%10;
        }
    }
}

void exibir(int a[][3], int l, int c){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int V(int a[][3], int m[], int l, int c){
    int maior=0, soma, b[3];
    for(int i=0;i<l;i++){
        soma=0;
        for(int j=0;j<c;j++){
            soma+=a[i][j];
            b[j]=a[i][j];
        }
        if(soma>maior){
                for(int k=0;k<3;k++){
                    m[k]=b[k];
                }
            maior=soma;
        }
    }
}

int main(){
    int matriz[3][3], vetor[3];
    preencher(matriz, 3, 3);
    exibir(matriz, 3, 3);
    printf("\n");
    V(matriz, vetor, 3, 3);
    for(int i=0;i<3;i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}


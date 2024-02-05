/* Escreva uma função que concatena/junta dois vetores. Por
exemplo, V1 = 0, 1, 2, 3, 4 e V2 = 4, 3, 2, 1, 0, o vetor resultante
será R = 0, 1, 2, 3, 4, 4, 3, 2, 1, 0.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lerV(int a[], int n){
    srand(time(NULL));
    printf("vetor: ");
    for(int i=0;i<n;i++){
        a[i]=rand()%10;
        printf("%d ", a[i]);
    }
    printf("\n");
}

void resultante(int a[], int b[], int c[], int n, int m){
    for(int i=0;i<n;i++){
        c[i]=a[i];
    }
    for(int i=0;i<m;i++){
        c[i+n]=b[i];
    }
}

int main(){
    int const tamV=5;
    int v1[tamV], v2[tamV], v3[2*tamV];
    lerV(v1, tamV);
    lerV(v2, tamV);
    resultante(v1, v2, v3, tamV, tamV);
    printf("vetor resultante: ");
    for(int i=0;i<2*tamV;i++){
        printf("%d ", v3[i]);
    }
    return 0;
}
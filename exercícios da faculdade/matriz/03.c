//calcular e mostrar a soma dos elementos da diagonal secundaria
//armazenar o os elementos da diagonal secundaria no vetor D e mostrar
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherM(int a[][3], int l, int c){
    srand(time(NULL));
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            a[i][j]=rand()%10;
        }
    }
}

void mostrarM(int a[][3], int l, int c){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int soma(int a[][3], int l, int c){
    int somatorio=0;
    for(int j=c-1,i=0;j>=0 && i<l;j--, i++){
            somatorio+=a[i][j];
    }
    return somatorio;
}


void V(int a[][3], int l, int c, int b[]){
    int tam=0;
    for(int j=c-1,i=0;j>=0 && i<l;j--, i++){
            b[tam]=a[i][j];
            tam++;
    }
}

int main(){
    int matriz[3][3], vetor[3];
    preencherM(matriz, 3, 3);
    mostrarM(matriz, 3, 3);
    int total=soma(matriz, 3, 3);
    V(matriz, 3, 3, vetor);
    printf("A soma dos elementos da diagonal principal eh: ");
    printf("%d\n", total);
    printf("O vetor que contem os elementos da diagonal principal eh: ");
    for(int i=0;i<3;i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}

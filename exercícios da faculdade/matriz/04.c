/*Seja A uma matriz 3x3. Determine a matriz T transposta de A.
(obs.: T[l][c] = A [c][l]). Mostre a matriz T.*/
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

void transporta(int a[][3], int b[][3], int l, int c){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            b[i][j]=a[j][i];
        }
    }
}

int main(){
    int m1[3][3], m2[3][3];
    preencher(m1, 3, 3);
    exibir(m1, 3, 3);
    printf("\n");
    transporta(m1, m2, 3, 3);
    exibir(m2, 3, 3);
    return 0;
}

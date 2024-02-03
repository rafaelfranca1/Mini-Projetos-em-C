
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int a[][5], int l, int c){
    srand(time(NULL));
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            a[i][j] = rand() % 10;
        }
    }
}

void exibir(int a[][5], int l, int c){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", a[i][j]); 
        }
        printf("\n"); 
    }
}

void zeroPorLinha(int a[][5], int l, int c, int v[]){
    for(int i=0;i<l;i++){
        int cont=0;
        for(int j=0;j<c;j++){
            if(a[i][j]==0){
                cont++;
            }
            v[i]=cont;
        }
    }
}

void zeroPorColuna(int a[][5], int l, int c, int v[]){
    for(int j=0;j<c;j++){
        int cont=0;
        for(int i=0;i<l;i++){
            if(a[i][j]==0){
                cont++;
            }
            v[j]=cont;
        }
    }
}

void ParPorLinha(int a[][5], int l, int c, int v[]){
    for(int i=0;i<l;i++){
        int cont=0;
        for(int j=0;j<c;j++){
            if(a[i][j]%2==0){
                cont++;
            }
            v[i]=cont;
        }
    }
}

void ParPorColuna(int a[][5], int l, int c, int v[]){
    for(int j=0;j<c;j++){
        int cont=0;
        for(int i=0;i<l;i++){
            if(a[i][j]%2==0){
                cont++;
            }
            v[j]=cont;
        }
    }
}

void mediaLinha(int a[][5], int l, int c, float v[]){
    for(int i=0;i<l;i++){
        float soma=0, media=0;
        for(int j=0;j<c;j++){
            soma+=a[i][j];
        }
        if(c>0){
            media=soma/c;
        }
        v[i]=media;
    }
}

int maiormedia(int a[][5], int l, int c){
    int maior=-1, mm=0;
    for(int i=0;i<l;i++){
        float soma=0, media=0;
        for(int j=0;j<c;j++){
            soma+=a[i][j];
        }
        media=(float)soma/c;
        if(media>maior){
            maior=media;
            mm=i;
        }
    }
    return mm;
}

int main(){
    int m[5][5], numZlinha[5], numZcoluna[5], parlinha[5], op, parcoluna[5];
    float media[5];
    preencher(m, 5, 5);
    exibir(m, 5, 5);
    printf("\n");
    zeroPorLinha(m, 5, 5, numZlinha);
    for(int i=0;i<5;i++){
        printf("quantidade de zero na linha %d: %d \n", i, numZlinha[i]);
    }
    zeroPorColuna(m, 5, 5, numZcoluna);
    for(int i=0;i<5;i++){
        printf("quantidade de zero na coluna %d: %d \n", i, numZcoluna[i]);
    }
    ParPorLinha(m, 5, 5, parlinha);
    printf("digite a linha da matriz para saber a quantidade de pares: ");
    scanf("%d", &op);
    switch (op){
        case 1:
            printf("a linha 1 da matriz tem %d\n", parlinha[0]);
            break;
        case 2:
            printf("a linha 2 da matriz tem %d\n", parlinha[1]);
            break;
        case 3:
            printf("a linha 3 da matriz tem %d\n", parlinha[2]);
            break;
        case 4:
            printf("a linha 4 da matriz tem %d\n", parlinha[3]);
            break;
        case 5:
            printf("a linha 5 da matriz tem %d\n", parlinha[4]);
            break;
        default:
            break;
    }
    ParPorColuna(m, 5, 5, parcoluna);
    printf("digite a coluna da matriz para saber a quantidade de pares: ");
    scanf("%d", &op);
    switch (op){
        case 1:
            printf("quantidade de pares na coluna 1 da matriz eh %d\n", parcoluna[0]);
            break;
        case 2:
            printf("quantidade de pares na coluna 2 da matriz eh %d\n", parcoluna[1]);
            break;
        case 3:
            printf("quantidade de pares na coluna 3 da matriz eh %d\n", parcoluna[2]);
            break;
        case 4:
            printf("quantidade de pares na coluna 4 da matriz eh %d\n", parcoluna[3]);
            break;
        case 5:
            printf("quantidade de pares na coluna 5 da matriz eh %d\n", parcoluna[4]);
            break;
        default:
            break;
    }
    mediaLinha(m, 5, 5, media);
    for(int i=0;i<5;i++){
        printf("media da linha %d: %.2f \n", i, media[i]);
    }
    printf("a linha com maior media eh %d", maiormedia(m, 5, 5));
    return 0;
}
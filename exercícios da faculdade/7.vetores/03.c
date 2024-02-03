/*Calcular quantos elementos do vetor, do exercício 2, estão acimada média.*/
#include <stdio.h>

int ler(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}

int media(int a[], int n){
    int i, s=0, m=0;
    for(i=0;i<n;i++){
        s=s+a[i];
    }
    m=s/10;
    return m;
}

int AcimaDaMedia(int a[], int n, float m){
    int cont=0;
    if(n>=m){
        cont=cont+1;
    }
    return cont;
}

int main(){
    int vetora[10], m;
    ler(vetora, 10);
    m=media(vetora, 10);
    printf("\nmedia = %d\n", m);
    printf("numeros acima da media = %d\n", AcimaDaMedia(vetora, 10, m));
    return 0;
}


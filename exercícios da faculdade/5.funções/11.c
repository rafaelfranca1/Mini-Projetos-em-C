#include <stdio.h>

int primo(int x){
    if(x<=1){
        return 0;
    }
    for(int i=2;i<x;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}

int soma(int x, int y){
    int maior, menor;
    if(x>y){
        maior=x;
        menor=y;
    }
    else{
       maior=y;
       menor=x;
    }
    int soma=0;
    for(int i=menor;i<=maior;i++){
        if(primo(i)==1){
            soma=soma+i;
        }
    }
    return soma;
}

int main(){
    int n, k, somatorio;
    printf("digite dois numeros: ");
    scanf("%d %d", &n, &k);

    somatorio=soma(n,k);

    printf("A soma dos numeros primos entre %d e %d e: %d\n", n, k, somatorio);
    return 0;
}
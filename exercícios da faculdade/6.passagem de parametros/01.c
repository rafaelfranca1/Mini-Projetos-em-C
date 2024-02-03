/*Escreva uma função chamada MM que recebe dois parâmetros,
A e B, e devolve o menor dos dois em A e o maior dos dois em B.
Caso sejam passados valores iguais, a ordem da resposta entreeles não importa.*/
#include <stdio.h>

void MM(int *a, int *b){
    int aux;
    if(*b<*a){
        aux=*a;
        *a=*b;
        *b=aux;
    }
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    MM(&a,&b);
    printf("a=%d, b=%d", a, b);
    return 0;
}

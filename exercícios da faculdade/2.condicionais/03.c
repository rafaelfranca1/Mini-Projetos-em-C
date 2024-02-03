#include <stdio.h>

int main()
{
    int n1, n2, n3, menor, soma;

    printf("digite tres numeros: \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1==n2&&n1==n3&&n2==n3){
        printf("error: numero iguais");

        return  0;
    }

    if(n1<n2 && n1<n3){
        menor = n1;
    }

    if(n2<n1 && n2<n3){
        menor = n2;
    }
    
    if(n3<n1 && n3<n2){
        menor = n3;
    }

    soma = n1 + n2 + n3 - menor;

    printf("a soma eh %d", soma);

    return 0;
}
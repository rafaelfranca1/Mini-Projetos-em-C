#include <stdio.h>

int main(){
    int n, soma = 0, contador = 0, maior, menor, numeronegtivo = 0;
    float media;
    
    scanf("%d", &n);
    maior = menor = n;

    while (n != 0) {
        soma = soma + n;
        contador = contador + 1;

        if(n>maior){
            maior = n;
        }
        else if(n<menor){
            menor = n;
        }

        if(n<0){
            numeronegtivo = numeronegtivo + 1;
        }

        media = (float) soma / contador;

        scanf("%d", &n);
    }

    printf("soma: %d\n", soma);
    printf("media: %.2f\n", media);
    printf("maior: %d\n", maior);
    printf("menor: %d\n", menor);
    printf("negativos: %d\n", numeronegtivo);

    return 0;
}

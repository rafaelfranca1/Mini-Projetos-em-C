#include <stdio.h>
#include <math.h>

int main(){

    int valor, n1, n2, soma;
    float raiz1, raiz;

    printf("Menu de opcoes:\n1 - Somar dois numeros\n2 - Raiz quadrada de um numero.");

    printf("\nDigite a opcao desejada: ");
    scanf("%d", &valor);

    switch (valor)
    {
    case 1:
        printf("digite dois numeros: \n");
        scanf("%d %d", &n1, &n2);

        soma = n1 + n2;

        printf("a soma dos numeros eh %d", soma);
        break;
    
    case 2:
        printf("digite uma raiz quadrada: ");
        scanf("%f", &raiz1);

        raiz = pow(raiz1, 1.0/2.0);

        printf("a raiz quadrada de %.2f eh %.2f", raiz1, raiz);
        break;
    
    default: printf("error");
        break;
    }
}
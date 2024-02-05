#include <stdio.h>

int main()
{
    for(int i = 0; i < 4; i++)
    {
        int n1, n2, soma, sub, div, mult, valor;

        printf("\ndigite dois numeros inteiros: \n");
        scanf("%d %d", &n1, &n2);

        soma = n1 + n2;
        sub = n1 - n2;
        div = n1 / n2;
        mult = n1 * n2;

        printf("digite o numero da operacao: ");
        scanf("%d", &valor);

        switch (valor)
        {
        case 1 : printf("%d\n", soma); 
        break;

        case 2 : printf("%d\n", sub); 
        break;

        case 3 : printf("%d\n", div); 
        break;

        case 4 : printf("%d\n", mult); 
        break;

        default: printf("error\n"); break;
        }
    }

    return 0;
}
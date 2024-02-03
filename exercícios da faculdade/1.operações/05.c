#include <stdio.h>

int main()
{
    int num1, num2, div, res;
    
    printf("\ndigite o primeiro numero: ");
    scanf("%d", &num1);
    printf("\ndigite o segundo numero: ");
    scanf("%d", &num2);

    div = num1 / num2;
    res = num1 % num2;

    printf("\na divisao entre os numeros e de %d", div);
    printf("\n\no resto da divisao entre os numeros e de %d", res);
    
    return 0;
}

#include <stdio.h>

int main()
{
    float sal, tquil, quil, total, desc;

    printf("digite o valor do salario minimo: ");
    scanf("%f", &sal);
    printf("digite a quantidade de quilowatts consumida: ");
    scanf("%f", &tquil);

    quil = sal / 5;
    total = quil * tquil;
    desc = total - (total * 15 / 100);

    printf("\nO valor de cada quilowatt corresponde a: %.2f reais", quil);
    printf("\nO valor a ser pago por essa residencia corresponde a: %.2f reais", total);
    printf("\nO valor a ser pago com desconto de 15 por cento corresponde a: %.2f reais\n", desc);

    return 0;
}

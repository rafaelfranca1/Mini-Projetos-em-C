
#include <stdio.h>

int main()
{
    float sb, grat, rea, desc, sl;

    printf("informe o valor do salario bruto: ");
    scanf("%f", &sb);

    rea = sb * 38 / 100;
    grat = sb * 20 / 100;
    desc = sb * 15 / 100;
    sl = sb + rea + grat - desc;

    printf("\nO seu salario liquido corresponde a: %.2f reais\n", sl);

    return 0;
}

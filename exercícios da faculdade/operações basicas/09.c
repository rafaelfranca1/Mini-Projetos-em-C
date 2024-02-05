#include <stdio.h>

int main()
{
    float nht, ht, sm, nhe, sb, he, rhe, sl;

    printf("informe o numero de horas trabalhadas: ");
    scanf("%f", &nht);
    printf("informe o valor do salario minimo: ");
    scanf("%f", &sm);
    printf("informe o numero de horas extras trabalhadas: ");
    scanf("%f", &nhe);

    ht = sm / 8;
    he = sm / 4;
    sb = nht * ht;
    rhe = nhe * he;
    sl = sb + rhe;

    printf("\nO salario a receber corresponde a: %.2f reais\n", sl);

    return 0;
}

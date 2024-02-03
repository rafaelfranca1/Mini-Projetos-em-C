#include <stdio.h>

int main(){
    float vp, vf, icms, tarifa;
    int op, consumo;

    printf("classes consumidoras\n1.classe A\n2.classe B\n3.classe C\nescolha uma opcao:");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        tarifa = 0.5;
        printf("informe seu consumo: ");
        scanf("%d", &consumo);
        vf = consumo * tarifa;
        icms = 0.3 * vf;
        vp = vf + icms;
        printf("o valor a pagar eh de %2.f", vp);
        break;
    case 2:
        tarifa = 0.8;
        printf("informe seu consumo: ");
        scanf("%d", &consumo);
        vf = consumo * tarifa;
        icms = 0.3 * vf;
        vp = vf + icms;
        printf("o valor a pagar eh de %2.f", vp);
        break;
    case 3:
        tarifa = 1.0;
        printf("informe seu consumo: ");
        scanf("%d", &consumo);
        vf = consumo * tarifa;
        icms = 0.3 * vf;
        vp = vf + icms;
        printf("o valor a pagar eh de %2.f", vp);
        break;
    default:
        break;
    }
    return 0;
}
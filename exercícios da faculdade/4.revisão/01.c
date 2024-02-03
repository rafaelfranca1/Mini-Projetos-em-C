#include <stdio.h>

int main(){
    int op;
    float desc, valor, valorfinal;

    printf("INFORME O VALOR DO SEU VEICULO: ");
    scanf("%f", &valor);
    printf("INFORME O COMBUSTIVEL DO SEU VEICULO:\n1.alcool\n2.gasolina\n3.disel\n4.outro");
    printf("\nESCOLHA SUA OPCAO: ");
    scanf("%d", &op);


    switch(op){
        case 1 :
            desc = valor * 0.25;
            valorfinal = valor - desc;
            printf("o valor a ser pago eh de %.2f", valorfinal);
            break;
        case 2 :
            desc = valor * 0.21;
            valorfinal = valor - desc;
            printf("o valor a ser pago eh de %.2f", valorfinal);
            break;
        case 3 :
            desc = valor * 0.14;
            valorfinal = valor - desc;
            printf("o valor a ser pago eh de %.2f", valorfinal);
            break;
        case 4 :
            desc = 0;
            valorfinal = valor - desc;
            printf("o valor a ser pago eh de %.2f", valorfinal);
            break;
        default :
            break;
    }
    return 0;
}

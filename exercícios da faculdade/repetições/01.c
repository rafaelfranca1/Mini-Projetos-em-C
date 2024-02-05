#include <stdio.h>

int main(){
    float n1, n2, r;
    int op;

    do{
        printf("\nMENU DE OPCOES\n1.ADICAO\n2.SUBTRACAO\n3.MULTIPLICACAO\n4.DIVISAO\n0.SAIR\nEscolha uma opcao? ");
        scanf("%d", &op);

        switch(op){
            case 1 :    printf("digite dois numeros: ");
                        scanf("%f %f", &n1, &n2);
                        r = n1 + n2;
                        printf("%.2f + %.2f = %.2f\n", n1, n2, r);
                        break;
            case 2 :    printf("digite dois numeros: ");
                        scanf("%f %f", &n1, &n2);
                        r = n1 - n2;
                        printf("%.2f - %.2f = %.2f\n", n1, n2, r);
                        break;
            case 3 :    printf("digite dois numeros: ");
                        scanf("%f %f", &n1, &n2);
                        r = n1 * n2;
                        printf("%.2f * %.2f = %.2f\n", n1, n2, r);
                        break;
            case 4 :    printf("digite dois numeros: ");
                        scanf("%f %f", &n1, &n2);
                        if(n2==0){
                            printf("error");
                            return 0;
                        }
                        r = n1 / n2;
                        printf("%.2f / %.2f = %.2f\n", n1, n2, r);
                        break;
        }
    }while(op!=0);

    return 0;
}

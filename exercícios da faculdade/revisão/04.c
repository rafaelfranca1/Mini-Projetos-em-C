#include <stdio.h>

int main(){
    int op;
    float valor, vista, prazo, total_vista, total_prazo;

    do{
        printf("escolha sua opcao\n1.a vista\n2.a prazo\n0.sair\n");
        scanf("%d", &op);
            switch(op){
                    case 1: printf("informe o valor da sua compra a vista: ");
                            scanf("%f", &vista);
                            total_vista = total_vista + vista;
                            break;
                    case 2: printf("informe o valor da sua compra a prazo: ");
                            scanf("%f", &prazo);
                            total_prazo = total_prazo + prazo;
                            break;
                    default :
                            break;
                }
    }while(op!=0);

    valor = total_prazo +total_vista;

    printf("valor total das vendas a vista eh %.2f, o valor total das vendas a prazo eh %.2f e o valor total das vendas eh %.2f", total_vista, total_prazo, valor);

    return 0;
}

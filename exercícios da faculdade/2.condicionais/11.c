#include <stdio.h>

int main(){
    int op;
    float sal, aumento, novosal;

    printf("cargos\n1.escrituario\n2.secretario\n3.caixa\n4.gerente\n5.diretor\ninforme o cargo: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("informe seu salario atual: ");
        scanf("%f", &sal);
        aumento = sal * 0.5;
        novosal = sal + aumento;
        printf("voce eh escriturio, seu aumento eh de %.2f e seu novo salario eh %.2f", aumento, novosal);
        break;
    case 2:
        printf("informe seu salario atual: ");
        scanf("%f", &sal);
        aumento = sal * 0.35;
        novosal = sal + aumento;
        printf("voce eh secretario, seu aumento eh de %.2f e seu novo salario eh %.2f", aumento, novosal);
        break;
    case 3:
        printf("informe seu salario atual: ");
        scanf("%f", &sal);
        aumento = sal * 0.2;
        novosal = sal + aumento;
        printf("voce eh caixa, seu aumento eh de %.2f e seu novo salario eh %.2f", aumento, novosal);
        break;
    case 4:
        printf("informe seu salario atual: ");
        scanf("%f", &sal);
        aumento = sal * 0.1;
        novosal = sal + aumento;
        printf("voce eh gerente, seu aumento eh de %.2f e seu novo salario eh %.2f", aumento, novosal);
        break;
    case 5:
        printf("informe seu salario atual: ");
        scanf("%f", &sal);
        aumento = sal * 0;
        novosal = sal + aumento;
        printf("voce eh diretor, seu aumento eh de %.2f e seu novo salario eh %.2f", aumento, novosal);
        break;
    default:
        break;
    }
    return 0;
}
#include <stdio.h>

int main(){
    int pulsotype, somares = 0, somacomer = 0, pulso, contcomer = 0, codigo;
    float mediacomer;

    do{printf("escolha o tipo de pulso:\n1.residencial\n2.comercial\nescolha: ");
    scanf("%d", & pulsotype);
    switch(pulsotype){
        case 1: printf("digite seu codigo: ");
                scanf("%d", &codigo);
                printf("digite o pulso: ");
                scanf("%d", &pulso);
                printf("seu codigo eh %d e seu pulso %d", codigo, pulso)
                somares = somares + pulso;
                break;

        case 2: printf("digite seu codigo: ");
                scanf("%d", &codigo);
                printf("digite o pulso: ");
                scanf("%d", &pulso);
                printf("seu codigo eh %d e seu pulso %d", codigo, pulso);
                somacomer = somacomer + pulso;
                contcomer = contcomer + 1;
                mediacomer = somacomer / contcomer;
                break;
        default:
                break;
                }
    }while(pulsotype!=0);


    printf("\nmedia = %.2f, soma = %d", mediaalt, homens);
    printf("\nmaior = %.2f", maior);
    printf("\nmenor = %.2f", menor);
    return 0;
}
}

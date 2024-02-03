#include <stdio.h>

int main(){
    int sexo, contador = 0, homens = 0, contalt = 0;
    float alt, somaalt = 0, mediaalt, maioralth = 0, menoralth = 1000000, maioraltm = 0, menoraltm = 1000000, menor, maior;

    while(contador <15){
        contador = contador + 1;
        printf("escolha o genero:\n1.homem\n2.mulher\nescolha: ");
        scanf("%d", & sexo);
        switch(sexo){
            case 1: printf("digite a altura: ");
                    scanf("%f", &alt);
                    homens = homens + 1;
                    while(alt>maioralth){
                            if(alt>maioralth){
                                maioralth = alt;
                            }
                    }
                    while(alt<menoralth){
                            if(alt<menoralth){
                                menoralth = alt;
                            }
                    }
                    break;

            case 2: printf("digite a altura: ");
                    scanf("%f", &alt);
                    contalt = contalt + 1;
                    somaalt = somaalt + alt;
                    mediaalt = somaalt / contalt;
                    while(alt>maioraltm){
                            if(alt>maioraltm){
                                maioraltm = alt;
                            }
                    }
                    while(alt<menoraltm){
                            if(alt<menoraltm){
                                menoraltm = alt;
                            }
                    }
                    break;
            default:
                    break;

        }
    }

    if(maioralth>maioraltm){
        maior = maioralth;
    }
    else{
        maior = maioraltm;
    }

    if(menoralth>menoraltm){
        menor = menoralth;
    }
    else{
        menor = menoraltm;
    }

    printf("\nmedia = %.2f, soma = %d", mediaalt, homens);
    printf("\nmaior = %.2f", maior);
    printf("\nmenor = %.2f", menor);
    return 0;
}

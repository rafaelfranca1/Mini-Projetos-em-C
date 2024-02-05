#include <stdio.h>

int main(){
    int i, homens = 0, mulheres = 0;
    char sexo;
    float alturam, halto = -1, malto = -1, hbaixo=110000, mbaixo=110000, alturaf, soma = 0, media, alto, baixo;

    for(i=1;i<=15;i++){
        printf("digite o sexo, m ou f: ");
        scanf(" %c", &sexo);

        if(sexo=='m'){
            homens++;
            printf("digite a altura: ");
            scanf("%f", &alturam);
            if(alturam>halto){
                halto = alturam;
            }
            if(alturam<hbaixo){
                hbaixo = alturam;
            }
        }
        else if(sexo=='f'){
            mulheres++;
            printf("digite a altura: ");
            scanf("%f", &alturaf);
            soma = soma + alturaf;
            if(alturaf>malto){
                malto = alturaf;
            }
            if(alturaf<mbaixo){
                mbaixo = alturaf;
            }
        }
    }
    media = soma/mulheres;
    if(halto>malto){
        alto = halto;
    }
    else
    {
        alto = malto;
    }
    if(hbaixo<mbaixo){
        baixo = hbaixo;
    }
    else
    {
        baixo = mbaixo;
    }

    printf("a média de altura das mulheres %f\n", media);
    printf("mais alto %f\n", alto);
    printf("mais baixo %f\n", baixo);
    printf("o número de homens %d\n", homens);

    return 0;
    
}
#include <stdio.h>

int main(){
    int horaextra, falta, H;
    float grat;

    printf("informe o numero de horas extras: ");
    scanf("%d", &horaextra);
    printf("informe o numero de horas faltadas: ");
    scanf("%d", &falta);

    horaextra = horaextra * 60;
    falta = falta * 60;
    H = horaextra - (2 / 3 * (falta));

    if(H>=2400){
        grat = 500;}
    else    if(H>=1800&&H<2400)
                grat = 400;
        else    if(H>=1200&&H<1800)
                    grat = 300;
            else    if(H>=600&&H<1200)
                        grat = 200;
                    else
                        grat = 100;
    printf("o funcionario recebera %.2f", grat);
    return 0;
}

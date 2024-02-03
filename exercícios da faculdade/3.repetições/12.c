#include <stdio.h>
int main(){
    int op, sim=0, nao=0, mulheres=0, homens=0, homemNao=0, mulherSim=0;
    float Hnao, Msim;
    char sexo;
    for(int i=0;i<20;i++){
        scanf(" %c", &sexo);
        if(sexo=='m'){
            homens++;
            scanf("%d", &op);
            switch (op) {
            case 1:
                sim++;
                break;
            case 2:
                nao++;
                homemNao++;
                break;
            default:
                break;
            }
        }
        else if(sexo=='f'){
            scanf("%d", &op);
            mulheres++;
            switch (op) {
            case 1:
                sim++;
                mulherSim++;
                break;
            case 2:
                nao++;
                break;
            default:
                break;
            }
        }
    }
    Hnao=homemNao*100/homens;
    Msim=mulherSim*100/mulheres;
    printf("pessoas que responderam sim: %d\n", sim);
    printf("pessoas que responderam nao: %d\n", nao);
    printf("porcetagem das mulheres que responderam sim: %f\n", Msim);
    printf("porcetagem dos homens que responderam nao: %f\n", Hnao);

    return 0;
}
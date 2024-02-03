#include <stdio.h>
int main () {
    int op, idade, gringa = 0, mulheres = 0;
    float porcentagem;

    printf("pesquisa populacional\n1.aceito participar\n2.nao aceito participar\nescolha: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1: do{
                printf("sexo\n1.masculino\n2.feminino\nescolha: ");
                scanf("%d", &op);
                switch (op)
                {
                case 1: printf("cor dos olhos\n1.azuis\n2.verdes\n3.castanhos\nescolha: ");
                        scanf("%d", &op);
                        switch (op)
                        {
                        case 1: printf("cor dos cabelos\n1.loiros\n2.castanhos\n3.pretos\nescolha: ");
                                scanf("%d", &op);
                                switch (op)
                                {
                                case 1: printf("digitte sua iddaade: ");
                                        scanf("%d", &idade);
                                    break;
                                case 2: printf("digitte sua iddaade: ");
                                        scanf("%d", &idade);
                                    break;
                                case 3: printf("digitte sua iddaade: ");
                                        scanf("%d", &idade);
                                    break;
                                default:
                                    break;
                                }
                            break;
                        case 2: printf("cor dos cabelos\n1.loiros\n2.castanhos\n3.pretos\nescolha: ");
                                scanf("%d", &op);
                                switch (op)
                                {
                                case 1: printf("digitte sua iddaade: ");
                                        scanf("%d", &idade);
                                    break;
                                case 2: printf("digitte sua iddaade: ");
                                        scanf("%d", &idade);
                                    break;
                                case 3: printf("digitte sua iddaade: ");
                                        scanf("%d", &idade);
                                    break;
                                default:
                                    break;
                                }
                            break;
                        case 3: printf("cor dos cabelos\n1.loiros\n2.castanhos\n3.pretos\nescolha: ");
                                scanf("%d", &op);
                                switch (op)
                                {
                                case 1: printf("digitte sua iddaade: ");
                                        scanf("%d", &idade);
                                    break;
                                case 2: printf("digitte sua iddaade: ");
                                        scanf("%d", &idade);
                                    break;
                                case 3: printf("digitte sua iddaade: ");
                                        scanf("%d", &idade);
                                    break;
                                default:
                                    break;
                                }
                            break;
                        default:
                            break;
                        }
                    break;
                case 2: mulheres = mulheres + 1;
                        printf("cor dos olhos\n1.azuis\n2.verdes\n3.castanhos\nescolha: ");
                        scanf("%d", &op);
                        switch (op)
                        {
                        case 1: printf("cor dos cabelos\n1.loiros\n2.castanhos\n3.pretos\nescolha: ");
                                scanf("%d", &op);
                                switch (op)
                                {
                                case 1: printf("digitte sua iddaade: ");
                                        scanf("%d", &idade);
                                    break;
                                case 2: printf("digitte sua iddaade: ");
                                        scanf("%d", &idade);
                                    break;
                                case 3: printf("digitte sua iddaade: ");
                                        scanf("%d", &idade);
                                    break;
                                default:
                                    break;
                                }
                            break;
                        case 2: printf("cor dos cabelos\n1.loiros\n2.castanhos\n3.pretos\nescolha: ");
                                scanf("%d", &op);
                                switch (op)
                                {
                                case 1: printf("digitte sua iddaade: ");
                                        scanf("%d", &idade);
                                        if(idade>=18&&idade<=35){
                                            gringa = gringa + 1;
                                        }
                                    break;
                                case 2: printf("digitte sua iddaade: ");
                                        scanf("%d", &idade);
                                    break;
                                case 3: printf("digitte sua iddaade: ");
                                        scanf("%d", &idade);
                                    break;
                                default:
                                    break;
                                }
                            break;
                        case 3: printf("cor dos cabelos\n1.loiros\n2.castanhos\n3.pretos\nescolha: ");
                                scanf("%d", &op);
                                switch (op)
                                {
                                case 1: printf("digitte sua iddaade: ");
                                        scanf("%d", &idade);
                                    break;
                                case 2: printf("digitte sua iddaade: ");
                                        scanf("%d", &idade);
                                    break;
                                case 3: printf("digitte sua iddaade: ");
                                        scanf("%d", &idade);
                                    break;
                                default:
                                    break;
                                }
                            break;
                        default:
                            break;
                        }
                    break;
                default:
                    break;
                }
            }while(op==1||op==2);
            break;
    default:
        break;
    }
    porcentagem = (gringa * 100)/mulheres;

    printf("%f", porcentagem);
    return 0;
}
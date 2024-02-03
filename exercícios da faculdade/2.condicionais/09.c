#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c, x1, x2, D;

    printf("digite os coeficientes das equacao\n\n");
    printf("digite o a da equacao: ");
    scanf("%lf", &a);
    printf("digite o b da equacao: ");
    scanf("%lf", &b);
    printf("digite o c da equacao: ");
    scanf("%lf", &c);

    if (a==0){
        printf("error: nao eh uma expressao do segundo grau");
        return 0;
    }

    D = b * b - 4 * a * c;
    printf("%lf", D);

    if(D<0){
        printf("\nerror: nao existe raizes de numero negativo\n");
        return 0;
    }

    if(D>=0){
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("\nas raizes da equacao sao %lf e %lf\n", x1, x2);
        return 0;
    }
}

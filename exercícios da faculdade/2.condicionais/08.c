#include <stdio.h>

int main(){

    int x1, y1, z1;

    printf("digite os comprimentos dos lados de um triangulo: \n");
    scanf("%d %d %d", &x1, &y1, &z1);

    if (x1>y1+z1||y1>x1+z1||z1>x1+y1){
        printf("Os valores nao formam um triangulo");
        return 0;
    }
    
    if (x1==y1&&y1==z1){
        printf("O triangulo eh equilatero");
        return 0;
    }
    else
        if (x1==y1||x1==z1||z1==y1){
            printf("O triangulo eh isoceles");
            return 0;
        }
        else{
            printf("O triangulo eh escaleno");
            return 0;
        }

    return 0;
}
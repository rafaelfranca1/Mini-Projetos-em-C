#include <stdio.h>

float peso(float altura, char sexo){
    float pesoideal;
    if(sexo=='f'||sexo=='F'){
        pesoideal=(62.1*altura)-44.7;
    }
    if(sexo=='M'||sexo=='m'){
        pesoideal=(72.7*altura)-58;
    }
    return pesoideal;
}

int main(){
    float altura;
    char sexo;

    printf("digite sua altura: ");
    scanf("%f", &altura);
    printf("digite seu sexo: ");
    scanf(" %c", &sexo);

    printf("%.2f kg", peso(altura, sexo)/100);
    return 0;
}
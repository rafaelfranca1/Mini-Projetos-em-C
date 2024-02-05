#include <stdio.h>

float notas(float a, float b, float c, char d){
    float media, ponderada;
    if(d=='A'||d=='a'){
        return (a+b+c)/3;
    }
    else if(d=='P'||d=='p'){
        return (a * 5 + b * 3 + c * 2) / 10.0;
    }
}

int main(){
    float n1, n2, n3;
    char tipo;
    printf("digite suas notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("MEDIAS\nA.aritimetica\nP.ponderada\nescolha a media: ");
    scanf(" %c", &tipo);
    printf("%f", notas(n1,n2,n3,tipo));
    return 0; 
}
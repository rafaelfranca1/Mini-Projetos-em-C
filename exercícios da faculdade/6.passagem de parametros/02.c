/*Escreva uma função chamada medidasDoRetangulo que recebe
os parâmetros b e h (as medidas em centímetros dos dois lados
de um retângulo) e devolve, em parâmetros, A e P
respectivamente, a área (b*h) e o perímetro (2*(b+h)) deste
retângulo. Mostre os resultados na função main().*/
#include <stdio.h>

void medidasDoRetangulo(float b, float h, float *a, float *p){
    *a=b*h;
    *p=2*(b*h);
}

int main(){
    float b, h, a, p;
    scanf("%f %f", &b, &h);
    medidasDoRetangulo(b, h, &a, &p);
    printf("area = %f, perimetro = %f", a, p);
    return 0;
}

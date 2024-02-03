#include <stdio.h>
#include <math.h>

int main()
{
    float raio, pi, area;
    
    printf("digite o raio do circulo: ");
    scanf("%f", &raio);

    pi = 3.14;
    area = pi * pow(raio, 2);

    printf("a area do circulo e de %.1f", area);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    float raio, alt, pi, area, vol;
    
    printf("digite o raio do cilindro: ");
    scanf("%f", &raio);
    printf("digite a altura do cilindro: ");
    scanf("%f", &alt);

    pi = 3.14;
    area = 2 * pi * raio * (raio + alt);
    vol = pi * pow(raio, 2) * alt;

    printf("a area do cilindro e de %.1f", area);
    printf("a area do cilindro e de %.1f", vol);

    return 0;
}
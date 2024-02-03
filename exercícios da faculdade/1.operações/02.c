#include <stdio.h>

int main()
{
    float n1, n2, n3, p1, p2, p3, media;

    printf("insira a primeira nota: ");
    scanf("%f", &n1);
    printf("insira o primeiro peso: ");
    scanf("%f", &p1);
    printf("insira a segunda nota: ");
    scanf("%f", &n2);
    printf("insira o segundo peso: ");
    scanf("%f", &p2);
    printf("insira a terceira nota: ");
    scanf("%f", &n3);
    printf("insira o terceiro peso: ");
    scanf("%f", &p3);

    media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);
    printf("\nmedia = %.1f\n", media);

    return 0;
}
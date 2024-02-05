#include <stdio.h>

int main()
{
    float n1, n2, n3, media;

    printf("insira a primeira nota: ");
    scanf("%f", &n1);
    printf("insira a segunda nota: ");
    scanf("%f", &n2);
    printf("insira a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;
    printf("\nmedia = %.1f\n", media);

    return 0;
}
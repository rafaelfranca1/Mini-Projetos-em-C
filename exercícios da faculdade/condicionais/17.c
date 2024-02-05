#include <stdio.h>

int main() {
    int num, bit, posicao = 1;
    long long binario = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("O binario eh 0\n");
        return 0;
    }

    while (num > 0) {
        bit = num % 2;
        binario = binario + bit * posicao;
        num = num / 2;
        posicao = posicao * 10;
    }

    printf("O binario eh %ld\n", binario);

    return 0;
}

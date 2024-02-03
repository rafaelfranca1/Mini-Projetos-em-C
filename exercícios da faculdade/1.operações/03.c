#include <stdio.h>
#include <math.h>

int main()
{
    float num, num2, num3, raiz2, raiz3;
    
    printf("digite um numero: ");
    scanf("%f", &num);

    num2 = num * num;
    num3 = num * num * num;
    raiz2 = pow(num, 1.0/2.0);
    raiz3 = pow(num, 1.0/3.0);

    printf("\no quadrado de %.1f e %.1f", num, num2);
    printf("\no cubo de %.1f e %.1f", num, num3);
    printf("\na raiz quadrada de %.1f e %.1f", num, raiz2);
    printf("\na raiz cubica de %.1f e %.1f\n", num, raiz3);

    return 0;
}
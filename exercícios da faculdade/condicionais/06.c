#include <stdio.h>

int main()
{
    int h1, h2, m1, m2, hv1, mv1, soma, hv2, mv2, mult;

    printf("digite as idades dos homens: \n");
    scanf("%d %d", &h1, &h2);

    printf("digite as idades das mulheres: \n");
    scanf("%d %d", &m1, &m2);

    if (h1==h2||m1==m2){
        printf("error");
        return 0;
    }

    if (h1>h2){
        hv1 = h1;
    }
    else{
        hv1 = h2;
    }

    if (m1>m2){
        mv1 = m1;
    }
    else{
        mv1 = m2;
    }

    if (h1<h2){
        hv2 = h1;
    }
    else{
        hv2 = h2;
    }

    if (m1<m2){
        mv2 = m1;
    }
    else{
        mv2 = m2;
    }

    soma = hv1 + mv1;
    mult = hv2 * mv2;

    printf("a soma dos mais velhos eh %d e o produto dos mais novos eh %d", soma, mult);

    return 0;
}
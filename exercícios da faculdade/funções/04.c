#include <stdio.h>

void escrevelinhas(char c, int n){
    int x, i;

    for(i=1; i<=n; i++){
        for(x=1;x<=10;x++){//minha linha cabe 50 caracteres
            printf("%c", c);
        }
        printf("\n");
    }
}

int main(){
    int linhas;
    char c;
    printf("digite um caracter: ");
    scanf("%c", &c);
    printf("digite o numero de linhas: ");
    scanf("%d", &linhas);
    escrevelinhas(c, linhas);
}

#include <stdio.h>

int ehpar(int n){//função que retorna 0 se for par e 1 se for impar
    if(n%2==0)
        return 0;
    else
        return 1;
}

int main(){
    int num;
    printf("digite um numero: ");
    scanf("%d", &num);
    if(ehpar(num))
        printf("eh impar\n");
    else
        printf("eh par\n");
    return 0;
}

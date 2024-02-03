#include <stdio.h>

int fatorial(int x){
    int i, f=1;
    for(i=1;i<=x;i++){
        f=f*i;
    }
    return f;
}

void sequencia(int y){
    printf("S=1");
    for(int j=1;j<=y;j++){
        printf("+1/%d!", j);
    }
}

int main(){
    int n;

    printf("digite um numero: ");
    scanf("%d", &n);
    printf("%d\n", fatorial(n));
    sequencia(n);
    return 0;
}
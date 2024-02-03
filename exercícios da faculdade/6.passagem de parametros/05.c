#include <stdio.h>

float soma(int a, float *s){
    *s=0;
    for(float i=1;i<=a;i++){
        *s= *s+(((i*i)+1)/(i+3));
    }
    return *s;
}

void exibicao(int n){
    printf("s=2/4");
    for(int i=2; i<=n; i++){
        int num=(i*i)+1;
        int denominador=i+3;
        printf("+%d/%d", num, denominador);
    }
}

int main(){
    int n;
    float s;
    scanf("%d", &n);
    soma(n, &s);
    exibicao(n);
    printf("\nS=%.2f", s);
    return 0;
}

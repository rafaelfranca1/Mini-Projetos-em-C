#include <stdio.h>
float g = 1.5;
int MinhaFuncao(int x){
    int a = 1;
    a++;
    return x * a;
}
int main(void){
    int a;
    scanf("%d", &a);
    if (a % 2 == 0){
        int b, i;
        for(i = 0; i < a; i++){
            b = MinhaFuncao(a);
            printf("b = %d\n", b);
        }
    }
    printf("a = %d, g = %.1f\n", a, g);
    return 0;
}
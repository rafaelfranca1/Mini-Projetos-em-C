#include <stdio.h>

int tabela(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            int num;
            num=i*j;
            printf("%d ", num);
        }
        printf("\n");
    }
}

int main(){
    int n1;
    do{ 
        printf("digite um numero: ");
        scanf("%d", &n1);
    }while(n1<1||n1>9);
    printf("\n");
    printf("tabela da multiplicacao do %d\n\n", n1);
    tabela(n1);
    return 0;
}

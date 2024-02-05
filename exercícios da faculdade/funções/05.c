#include <stdio.h>

int soma(int a, int b, int c){//funçao que soma os numeros divisiveis por a entre b e c ou c e b
    int i, soma=0;
    if(b<c){
        for(i=b;i<=c;i++){
            if(i%a==0){//se o numero for divisivel por a
                soma+=i;
            }
        }
    }
    else{
        for(i=c;i<=b;i++){
            if(i%a==0){//se o numero for divisivel por a
                soma+=i;
            }
        }
    }
    return soma;
}

int main(){
    int n1, n2, n3;

    do{
        printf("digite tres numeros: ");
        scanf("%d %d %d", &n1, &n2, &n3);
    }while(n1<=1);

    printf("a soma eh %d\n", soma(n1,n2,n3));
    return 0;
}

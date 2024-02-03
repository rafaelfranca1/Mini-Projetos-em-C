#include <stdio.h>

int main(){
    int num, soma = 0, contador = 0;
    
    for(num=2;contador<100;num = num + 1){
        if(num%2==0){
            soma = soma + num;
            contador = contador + 1;
        }
    }
    printf("%d", soma);

    return 0;
}

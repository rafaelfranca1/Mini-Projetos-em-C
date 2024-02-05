#include <stdio.h>

int main(){
    int i, num, sum;
    sum = 0;

    printf("digite um numero: ");
    scanf("%d", &num);

    if(num<=0){
        printf("error");
        return 0;
        }

    for(i = 1;i < num; i = i + 1){
        if(num % i == 0){
            sum = sum + i;
        }
    }

    if(sum==num){
        printf("perfeito");
    }
    else{
        printf("defeituoso");
    }
    return 0;
}

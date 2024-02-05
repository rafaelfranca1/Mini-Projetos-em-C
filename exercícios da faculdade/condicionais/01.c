#include <stdio.h>

int main(){

    int num;

    printf("digite um numero: ");
    scanf("%d", &num);

    if(num%2==0){
        printf("%d eh par", num);
    }
    else{
        printf("%d eh impar", num);
    }

    return 0;
}

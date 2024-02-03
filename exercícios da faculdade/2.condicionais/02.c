#include <stdio.h>

int main(){

    int num1, num2, num3;

    printf("digite tres numeros: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1==num2||num1==num3||num2==num3){
        printf("os numeros sao iguais");
    }

    if(num1 > num2 && num1 > num3){
        printf("\n%d eh o maior valor\n", num1);
    }
    else{
        if(num2>num3)
            printf("\n%d eh o maior valor\n", num2);
        else
            printf("\n%d eh o maior valor\n", num3);
    }

     if(num1 < num2 && num1 < num3){
        printf("%d eh o menor valor\n", num1);
    }
    else{
        if(num2<num3)
            printf("%d eh o menor valor\n", num2);
        else
            printf("%d eh o menor valor\n", num3);
    }

    return 0;
}

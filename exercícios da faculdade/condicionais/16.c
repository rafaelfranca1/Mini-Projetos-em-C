#include<stdio.h>
int main(void){
    int num1 = 0, num2 = 1, num, elemento = 0;
    
    
    printf("digite um numero: ");
    scanf("%d", &num);
    
    while(elemento<=num){
    	if(elemento!=0){
        	printf("%d ", elemento);
            }
        num1 = num2;
        num2 = elemento;
        elemento = num1 + num2;
    }

    return 0;
    }
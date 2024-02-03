#include <stdio.h>

int invertido(int x, int y){
    int inverso=0;
    while(x>0){
        int algarismo;
        algarismo = x%10;
        inverso=inverso*10+algarismo;
        x=x/10;
    }
    if(inverso==y){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int contrario=invertido(num1, num2);
    if(contrario==1){
        printf("%d e %d sao o contrario um do outro\n", num1, num2);
    }
    else{
        printf("%d e %d nao sao o contrario um do outro\n", num1, num2);
    }
    return 0;
}
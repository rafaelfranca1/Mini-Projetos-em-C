#include <stdio.h>

int main(){
    int num, resto;
    
    for(num =0;num<100;num = num + 1){
        resto = num % 4;
        if(resto==0){
            printf("%d\n", num);
        }
    }

    return 0;
}

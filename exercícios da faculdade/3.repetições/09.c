#include <stdio.h>

int main(){
    float soma = 0, x = 1, y;
    
    for(y=1;y<=50;y = y + 1){
        soma = soma + x/y;
        printf("%f ", soma);
        if(y<50){
            printf("+ ");
        }
    }
    printf("\nsoma = %f", soma);

    return 0;
}

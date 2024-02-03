#include <stdio.h>

int main(){
    int senha;

    printf("digite a senha: ");
    scanf("%d", &senha);

    if(senha==123){
            printf("senha correta");
        }
        else{
            while(senha!=123){
                printf("senha incorreta\ndigite novamente: ");
                scanf("%d", &senha);
                if(senha==123){
                        printf("senha correta");
                    }
            }
        }

    return 0;
}
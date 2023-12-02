#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

void gerador(char *str);

int main(){
    char senha[9];
    char resposta;

    printf("Bem-vindo ao Gerador de Senhas!\n\n");

    do{
        gerador(senha);
        printf("Senha gerada: %s\n", senha);
        printf("\nVoce gostaria de gerar outra senha? (S/N): ");
        scanf(" %c", &resposta);
        resposta=toupper(resposta);
        system("cls");
    }while(resposta=='S');

    printf("Senha gerada: %s\n", senha);
    printf("\nObrigado por usar o Gerador de Senhas! Ate a proxima.\n");

    return 0;
}

void gerador(char *str){
    srand(time(NULL));
    int maiuscula=0, numero=0, especial=0;

    for(int i=0;i<8;i++){
        int digito=rand()%3;

        if(digito==2&&maiuscula==0){
            //letra maiúscula
            str[i]=rand()%26+65;
            maiuscula++;
        }else if(digito==1&&numero==0){
            //número
            str[i]=rand()%10+48;
            numero++;
        }else if(digito==0&&especial==0){
            //caractere especial
            char simbolos[]={'_','!','@','#','$','?','&','%'};
            str[i]=simbolos[rand()%8];
            especial++;
        }else{
            //letra minuscula por padrão
            str[i]=rand()%26+97;
        }
    }
    str[8]='\0';
}
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void criarLogin(char str[], char str2[]){
    int i, palavras=1, j=0;
    int tam=strlen(str);
    for(i=0;i<tam;i++){
        if(str[i]==' ')
            palavras++;
    }
    str2[j]=tolower(str[0]);//adiciona a primeira letra no login
    j++;
    int cont=0;
    for(i=1;i<tam;i++){
        if(str[i-1]==' '&&cont==0){//adiciona as iniciais no login
            if(palavras>2){
                str2[j]=tolower(str[i]);
                j++;
                cont++;
            }
        }
        if(str[i-1]==' ')
            palavras--;
        if(palavras==1){//adiciona o ultimo sobrenome no login
            str2[j]=tolower(str[i]);
            j++;
        }
    }
    str2[j]='\0';
}

int main(){
    char nome[50], login[50];
    printf("Nome: "); fgets(nome,50,stdin);
    criarLogin(nome,login);
    printf("Login: %s", login);
    return 0;
}
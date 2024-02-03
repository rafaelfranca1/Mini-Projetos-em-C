/*Escreva um programa que receba o nome completo de um usuário e gere o
seu login. O login será composto pela primeira letra de cada nome em letras
maiúsculas e as mesmas letras minúsculas. O login deve estar em uma nova
string.
Nome: Pedro Hansdorf >> Login: PHph
Nome: Robson Soares Soares >> Login: RSSrss
Nome: Olívia Silva Santos Marques >> Login: OSSMossm*/
#include <stdio.h>
#include <ctype.h>

void registerlogin(char *str, char *str2){
    int size=0;
    for(int i=0;str[i]!='\0';i++){
        if(i==0||str[i-1]==' '){
            str2[size]=toupper(str[i]);
            size++;
        } 
    }
    for(int i=0;str[i]!='\0';i++){
        if(i==0||str[i-1]==' '){
            str2[size]=tolower(str[i]);
            size++;
        } 
    }
    str2[size]='\0';
}

int main(){
    char name[100], login[100];
    printf("Nome: ");
    fgets(name, sizeof(name), stdin);
    registerlogin(name, login);
    printf("Login: %s\n", login);
    return 0;
}
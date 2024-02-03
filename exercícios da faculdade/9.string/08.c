/*Crie um programa que receba uma string e um caractere, e apague todas as
ocorrências desses caractere na string.*/
#include <stdio.h>

void erase(char *str, char character){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==character){
            str[i]=' ';
        }
    }
}

int main(){
    char word[]="cururu", letter='u';
    erase(word, letter);
    printf("%s", word);
    return 0;
}
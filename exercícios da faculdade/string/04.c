/*Escreva um programa que receba uma frase com caracteres em minúsculo e
transforme o primeiro caractere de cada palavra da frase em maiúsculo.*/
#include <stdio.h>

void maiusculas(char *str){
    int i;
    for(i=0;str[i]!='\0';i++){
        if(i==0){
            str[i]-=32;
        }
        else if(str[i]==' '){
            str[i+1]-=32;
        }
    }
    printf("%s", str);
}

int main(){
    char frase[]="e eu to na flor da idade melhor se arrepender do que passar vontade";
    maiusculas(frase);
    return 0;
}
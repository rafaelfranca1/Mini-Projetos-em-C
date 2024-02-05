/*Escreva um programa que recebe uma string e transforma alguns dos caracteres
em maiúsculos e outros em minúsculos. Faça sorteios com a função rand() para
gerar números aleatórios em C, que serão usados para escolher os índices dos
caracteres que serão alterados. Use a função toupper() para converter o caracter
para maiúsculo.*/
#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

void muda(char *str){
    int cont=0;
    srand(time(NULL));
    for(int i=0;str[i]!='\0';i++){
        cont++;
    }
    for(int i=0;i<cont;i++){
        int sorteio=rand()%2;
        if(sorteio)
            str[i]=toupper(str[i]);//funçao que tranforma em maiusculo
        else
            str[i]=tolower(str[i]);//funçao que tranforma em minusculo
    }
}

int main(){
    char frase[]="like damn she in ha mood like damn she in ha mood";
    muda(frase);
    printf("%s", frase);
    return 0;
}


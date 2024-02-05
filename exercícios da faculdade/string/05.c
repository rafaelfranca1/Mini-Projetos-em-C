/*Escreva m programa que receba uma string (palavra), determine se ela é
palíndromo. Um palíndromo é uma palavra que tenha a propriedade de poder ser
lida tanto da direita para a esquerda como da esquerda para a direita. Ex.: arara,
ovo, anilina, salas.*/
#include <stdio.h>

int palindromo(char *str){
    int cont=0;
    for(int i=0;str[i]!='\0';i++){
        cont++;
    }
    int j=cont-1;
    for(int j=cont-1, i=0;i<cont;i++,j--){
        if(str[i]!=str[j])
            return 0;
    }
    return 1;
}

int main(){
    char palavra[]="anilina";
    if(palindromo(palavra)!=1)
        printf("nao eh um palindromo\n");
    else 
        printf("eh um palindromo\n");
    return 0;
}